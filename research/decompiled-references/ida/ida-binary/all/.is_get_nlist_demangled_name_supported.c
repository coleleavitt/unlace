// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118BE0
// Name:            .is_get_nlist_demangled_name_supported
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118BE0 jmp     cs:is_get_nlist_demangled_name_supported_ptr
//
// Resolved target: is_get_nlist_demangled_name_supported
// Target address:  0x8D7F38
// GOT/IAT slot:    0x8A3290
// Slot symbol:     is_get_nlist_demangled_name_supported_ptr
// Target type:     <no type info>
// ============================================================

void .is_get_nlist_demangled_name_supported(/* see target signature */)
{
    // Tail-call to is_get_nlist_demangled_name_supported via GOT/IAT indirection
    return is_get_nlist_demangled_name_supported(/* forwarded args */);
}

