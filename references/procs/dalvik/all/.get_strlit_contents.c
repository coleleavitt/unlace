// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50A0
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50A0 jmp     cs:off_1A038
//
// Resolved target: get_strlit_contents
// Target address:  0x1A3B8
// GOT/IAT slot:    0x1A038
// Slot symbol:     off_1A038
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

