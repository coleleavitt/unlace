// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118D90
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118D90 jmp     cs:get_strlit_contents_ptr
//
// Resolved target: get_strlit_contents
// Target address:  0x8D8030
// GOT/IAT slot:    0x8A3368
// Slot symbol:     get_strlit_contents_ptr
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

