// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113C60
// Name:            .get_nlist_demangled_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113C60 jmp     cs:get_nlist_demangled_name_ptr
//
// Resolved target: get_nlist_demangled_name
// Target address:  0x8D4D28
// GOT/IAT slot:    0x8A0AD0
// Slot symbol:     get_nlist_demangled_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_nlist_demangled_name(/* see target signature */)
{
    // Tail-call to get_nlist_demangled_name via GOT/IAT indirection
    return get_nlist_demangled_name(/* forwarded args */);
}

