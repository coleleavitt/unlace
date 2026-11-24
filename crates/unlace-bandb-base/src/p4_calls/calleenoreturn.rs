//! The no-return contract shared by flow construction and callee write probes.

use crate::architecture::Architecture;
use unlace_base::address::Address;

#[doc(hidden)]
pub fn is_no_return(arch: &Architecture, entry: &Address) -> bool {
    if arch
        .remote_scope
        .as_ref()
        .and_then(|remote| remote.function_at(entry))
        .is_some_and(|facts| facts.no_return)
        || arch.symboltab.function_is_no_return_across_scopes(entry)
    {
        return true;
    }
    let name = arch.symboltab.function_display_name_across_scopes(entry);
    if let Some(name) = name.as_deref() {
        if arch
            .kuna_options
            .get::<crate::kuna_analysisgates::NoreturnKnown>()
            .0
            && crate::kuna_noreturn_externmatch::is_known_noreturn_name(name)
        {
            return true;
        }
        if arch.kuna_options.get::<crate::kuna_gobounds::GoBounds>().0
            && arch.source_lang().is_go()
            && crate::kuna_gobounds::is_go_check_name(name)
        {
            return true;
        }
        if arch
            .kuna_options
            .get::<crate::kuna_securitycheck::StripSecurityCheck>()
            .0
            && crate::kuna_securitycheck::is_security_check_name(name)
        {
            return true;
        }
    }
    if arch
        .kuna_options
        .get::<crate::kuna_analysisgates::NoreturnKnown>()
        .0
    {
        let name = arch
            .remote_scope
            .as_ref()
            .and_then(|remote| remote.function_at(entry))
            .map(|facts| facts.display_name)
            .or(name);
        return name
            .as_deref()
            .is_some_and(crate::kuna_noreturnextern::matches_noreturn_extern_name);
    }
    false
}

/// Under `noreturn_known`, a direct call at `call` (falling through to
/// `fallthrough`) to a `<prefix>__<entry>` proxy stub is no-return when it is the
/// last instruction of its sized function (`kuna_noreturn_externmatch.rs`).
#[doc(hidden)]
pub fn is_proxy_no_return_at(
    arch: &Architecture,
    entry: &Address,
    call: &Address,
    fallthrough: &Address,
) -> bool {
    use crate::kuna_noreturn_externmatch::{
        call_ends_function, is_proxy_noreturn_name, is_stub_body,
    };
    arch.kuna_options
        .get::<crate::kuna_analysisgates::NoreturnKnown>()
        .0
        && call_ends_function(arch, call, fallthrough)
        && arch
            .symboltab
            .function_display_name_across_scopes(entry)
            .is_some_and(|name| is_proxy_noreturn_name(&name))
        && is_stub_body(arch, entry)
}
