//! Ghidra-backed engine providers — the Phase-2 scaffolding.
//!
//! Upstream, `ArchitectureGhidra::init` installs a family of component
//! subclasses that back the engine's loader / translator / symbol table /
//! type factory / … with queries to the Java host instead of a local file
//! (`decompiler/cpp/loadimage_ghidra.cc`, `ghidra_translate.cc`,
//! `database_ghidra.cc`, `typegrp_ghidra.cc`, `comment_ghidra.cc`,
//! `string_ghidra.cc`, `ghidra_context.cc`, `cpool_ghidra.cc`,
//! `inject_ghidra.cc`).  This module ports them into unlace as query-backed
//! implementations of unlace's existing engine traits.
//!
//! **Phase-2 status.** [`GhidraLoadImage`] is implemented and tested here as
//! the demonstrator for the pattern the whole phase turns on: the engine,
//! mid-decompile, re-entrantly calls a provider (here `load_fill`), which
//! issues a callback query on the *same* streams the command response is
//! being written to (`SharedClient`, below).  Proving that hook plugs into a
//! real unlace trait (`unlace_sleigh::loadimage::LoadImage`) with no change to
//! the standalone engine is what de-risks the rest.  The remaining providers
//! (`ContextGhidra`, the `ScopeGhidra` lazy symbol cache, `TypeFactoryGhidra`,
//! …) and the wiring into an `Architecture` are the gated work — see
//! `docs/rust-port/ghidra-phase2-plan.md`.

use std::cell::RefCell;
use std::io::{Read, Write};
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::Decoder;
use unlace_sleigh::loadimage::LoadImage;

use unlace_decomp::dtype::RemoteTypeFetch;
use unlace_decomp::remote_provider::RemoteProviderFetch;

use crate::client::GhidraClient;
use crate::protocol::WireError;

/// A [`GhidraClient`] shared between the command loop and the engine's
/// providers.
///
/// This is the unlace analog of the C++ `glb` back-pointer every ghidra-mode
/// component holds to its `ArchitectureGhidra` (e.g. `LoadImageGhidra::glb`,
/// `loadimage_ghidra.hh`).  During a `decompileAt` the engine re-entrantly
/// calls a provider, which issues a query on the same `sin`/`sout` the
/// command response is mid-flight on — so the client must be *shared*, not
/// owned, by both the process loop and every provider.  `Rc<RefCell<…>>` is
/// the single-threaded shared-mutable analog of the raw C++ pointer (the
/// protocol is strictly synchronous — at most one borrow is ever live,
/// because a query fully completes before the engine regains control).
pub type SharedClient<R, W> = Rc<RefCell<GhidraClient<R, W>>>;

/// C++ `LoadImageGhidra` (`loadimage_ghidra.cc`): every engine read of
/// program bytes — constant-pointer dereference, read-only propagation,
/// string probing — becomes a `getBytes` query to the host.  There is no
/// local cache (the Java side caches; `loadimage_ghidra.cc` comment).
pub struct GhidraLoadImage<R: Read, W: Write> {
    client: SharedClient<R, W>,
}

impl<R: Read, W: Write> GhidraLoadImage<R, W> {
    /// Construct over the shared query client (C++ `new LoadImageGhidra(this)`,
    /// `ghidra_arch.cc:283-287`).
    pub fn new(client: SharedClient<R, W>) -> Self {
        GhidraLoadImage { client }
    }
}

impl<R: Read, W: Write> LoadImage for GhidraLoadImage<R, W> {
    /// C++ constructs it with the pseudo-filename `"ghidra_progam"` [sic]
    /// (`loadimage_ghidra.cc:20-25`).
    fn get_file_name(&self) -> &str {
        "ghidra_progam"
    }

    /// C++ `LoadImageGhidra::loadFill` → `glb->getBytes`
    /// (`loadimage_ghidra.cc:37-41`).  An unmapped range comes back as the
    /// empty-response `DataUnavailError` from `getBytes`.
    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        self.client
            .borrow_mut()
            .get_bytes(ptr, addr)
            .map_err(wire_to_unlace)
    }

    /// C++ `getArchType` → `"ghidra"` (`loadimage_ghidra.cc:43-47`).
    fn get_arch_type(&self) -> Vec<u8> {
        b"ghidra".to_vec()
    }

    /// C++ `adjustVma` throws `LowlevelError` (`loadimage_ghidra.cc:49-53`) —
    /// it is a raw-binary concern never reached in ghidra mode.  unlace's trait
    /// method cannot return an error, so this is a no-op.
    /// TODO(phase-2): if a caller ever reaches it, surface a fatal error
    /// through the process loop rather than silently doing nothing.
    fn adjust_vma(&mut self, _adjust: i64) {}
}

/// The Phase-3 wire-fetch adapter: `unlace-decomp`'s [`RemoteProviderFetch`] +
/// [`RemoteTypeFetch`] seams implemented over the [`SharedClient`] — the same
/// re-entrant pattern as [`GhidraLoadImage`].  The `RemoteScope` /
/// `TypeFactoryImpl` hold `Rc`s of one instance; every miss becomes a
/// getMappedSymbols / getNamespacePath / getComments / getDataType query
/// nested inside the still-open command response.
pub struct GhidraRemoteFetch<R: Read, W: Write> {
    client: SharedClient<R, W>,
}

impl<R: Read, W: Write> GhidraRemoteFetch<R, W> {
    /// Construct over the shared query client.
    pub fn new(client: SharedClient<R, W>) -> Self {
        GhidraRemoteFetch { client }
    }
}

impl<R: Read, W: Write> RemoteProviderFetch for GhidraRemoteFetch<R, W> {
    fn fetch_mapped_symbols(
        &self,
        addr: &Address,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .get_mapped_symbols_xml(addr, decoder)
            .map_err(wire_to_unlace)
    }

    fn fetch_namespace_path(&self, id: u64, decoder: &mut dyn Decoder) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .get_namespace_path(id, decoder)
            .map_err(wire_to_unlace)
    }

    fn fetch_is_name_used(&self, name: &str, start: u64, stop: u64) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .is_name_used(name, start, stop)
            .map_err(wire_to_unlace)
    }

    fn fetch_external_ref(&self, addr: &Address, decoder: &mut dyn Decoder) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .get_external_ref(addr, decoder)
            .map_err(wire_to_unlace)
    }

    fn fetch_tracked_registers(
        &self,
        addr: &Address,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .get_tracked_registers(addr, decoder)
            .map_err(wire_to_unlace)
    }

    fn fetch_comments(
        &self,
        fad: &Address,
        flags: u32,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .get_comments(fad, flags, decoder)
            .map_err(wire_to_unlace)
    }
}

impl<R: Read, W: Write> RemoteTypeFetch for GhidraRemoteFetch<R, W> {
    fn fetch_data_type(
        &self,
        name: &str,
        id: u64,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        self.client
            .borrow_mut()
            .get_data_type(name, id, decoder)
            .map_err(wire_to_unlace)
    }
}

/// Map a query [`WireError`] onto the [`UnlaceError`] a [`LoadImage`] method
/// must return.
///
/// A `DataUnavail` passes through unchanged (the `getBytes` empty-response
/// case — an unmapped address).  A pipe/IO failure means the host connection
/// died mid-query; upstream `exit(1)`s from inside `readToAnyBurst`
/// (`ghidra_arch.cc:95-96`), but the trait method can only return a
/// `UnlaceError`, so it is mapped to a `LowlevelError` here.
///
/// TODO(phase-2): the process loop needs a way for a provider to signal
/// "host pipe dead → terminate" so a mid-decompile pipe death still exits
/// the process with status 1 (the `SharedClient` should carry a fatal flag
/// the loop checks after each command).
pub(crate) fn wire_to_unlace(err: WireError) -> UnlaceError {
    match err {
        WireError::Unlace(e) => e,
        WireError::PipeClosed => UnlaceError::lowlevel("ghidra host pipe closed during query"),
        WireError::Io(e) => UnlaceError::lowlevel(format!("i/o error during query: {e}")),
    }
}

#[cfg(test)]
mod tests;
