// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A400
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A400 jmp     cs:off_4C01E8
//
// Resolved target: get_opinfo
// Target address:  0x4C31B0
// GOT/IAT slot:    0x4C01E8
// Slot symbol:     off_4C01E8
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

