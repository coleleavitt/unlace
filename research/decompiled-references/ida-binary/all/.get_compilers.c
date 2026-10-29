// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1116C0
// Name:            .get_compilers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1116C0 jmp     cs:get_compilers_ptr
//
// Resolved target: get_compilers
// Target address:  0x8D34E8
// GOT/IAT slot:    0x89F800
// Slot symbol:     get_compilers_ptr
// Target type:     <no type info>
// ============================================================

void .get_compilers(/* see target signature */)
{
    // Tail-call to get_compilers via GOT/IAT indirection
    return get_compilers(/* forwarded args */);
}

