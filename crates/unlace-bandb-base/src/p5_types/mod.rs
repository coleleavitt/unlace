//! S5 -- Value & type facts: the type system + type inference.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod constseq;
pub mod double;
pub mod funcdata_union;
pub mod kuna_borrowcompare; // (kuna) a branchless two-word borrow compare folds to one double-precision compare
pub mod kuna_codescalar;
pub mod kuna_fatstr; // (kuna) length-carried (ptr,len) string literals (docs/multilang.md W3/W4)
pub mod kuna_fieldtype; // (kuna) a synthesized field some access holds as a pointer is declared as that pointer
pub mod kuna_gonewtype; // (kuna) type a runtime.newobject result from its descriptor argument (docs/multilang.md, Go pack)
pub mod kuna_indexrescale;
pub mod kuna_inferfuncentry;
pub mod kuna_kalloctype; // (kuna) a typed allocation returns the struct its kalloc_type view describes
pub mod kuna_memsetsequence;
pub mod kuna_objcrettype; // (kuna) an Objective-C message send typed and resolved by its receiver
pub mod kuna_pebnames; // (kuna) type the Windows TEB segment base so PEB/TEB field reads are named
pub mod kuna_ptrdepth;
pub mod kuna_rodatastring;
pub mod kuna_roundingops; // (kuna) a rounding user op p-code has no operator for is float in, float out
pub mod kuna_storetype; // (kuna) a global typed from the values stored into it
pub mod kuna_swiftstr; // (kuna) Swift two-word string literals
pub mod kuna_thumbfuncptr;
pub mod kuna_tlsnames; // (kuna) static TLS variables at their thread-pointer offsets
pub mod kuna_typevote;
pub mod kuna_varargfloat; // (kuna) a variadic argument in a floating-point register is a double
pub mod kuna_vtabletypes; // (kuna) typed C++ vtables: a virtual call through a named slot of its class
pub mod unionresolve;
