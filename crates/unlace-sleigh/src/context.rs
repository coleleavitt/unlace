//! Instruction tokens and resolved varnode handles, from
//! `decompiler/cpp/context.{hh,cc}`.
//!
//! [`Token`] stores a byte-string name and encoding layout. [`FixedHandle`]
//! describes a static location or a dynamic pointer with temporary storage;
//! nullable address spaces use `Option<Rc<AddrSpace>>`.
//!
//! Parser arenas and walkers live in [`crate::sleigh`]. The context database
//! and cache live in [`crate::globalcontext`].

use std::rc::Rc;

use unlace_base::space::AddrSpace;

/// \brief A multiple-byte sized chunk of pattern in the instruction byte
/// stream
#[derive(Debug, Clone)]
pub struct Token {
    /// Name of the token
    name: Vec<u8>,
    /// Number of bytes in token
    size: i32,
    /// Index of \b this token, for resolving offsets
    index: i32,
    /// Set to \b true if encodings within \b this token are big endian
    bigendian: bool,
}

impl Token {
    /// Constructor
    pub fn new(nm: &[u8], sz: i32, be: bool, ind: i32) -> Token {
        Token {
            name: nm.to_vec(),
            size: sz,
            bigendian: be,
            index: ind,
        }
    }

    /// Get the size in bytes
    pub fn get_size(&self) -> i32 {
        self.size
    }

    /// Return \b true if encodings within \b this are big endian
    pub fn is_big_endian(&self) -> bool {
        self.bigendian
    }

    /// Get the index associated with \b this token
    pub fn get_index(&self) -> i32 {
        self.index
    }

    /// Get the name of the token
    pub fn get_name(&self) -> &[u8] {
        &self.name
    }
}

/// \brief A resolved version of (or pointer to) a SLEIGH defined Varnode
///
/// For a static Varnode, this is the triple (address space, offset, size)
/// for the Varnode.  For a dynamic Varnode, this also encodes the pointer
/// Varnode containing the dynamic offset and a temporary storage location
/// for the dereferenced value.
///
/// (C++ leaves a default-constructed FixedHandle uninitialized; the Rust
/// `Default` zeroes every field, with the null space pointers as `None`.)
#[derive(Debug, Clone, Default)]
pub struct FixedHandle {
    /// The address space of the Varnode
    pub space: Option<Rc<AddrSpace>>,
    /// Number of bytes in the Varnode
    pub size: u32,
    /// Null \e or the space where the dynamic offset is stored
    pub offset_space: Option<Rc<AddrSpace>>,
    /// The offset for the static Varnode \e or the offset for the pointer
    pub offset_offset: u64,
    /// Size of pointer
    pub offset_size: u32,
    /// Address space for temporary location for value
    pub temp_space: Option<Rc<AddrSpace>>,
    /// Offset of the temporary location
    pub temp_offset: u64,
}

#[cfg(test)]
mod tests;
