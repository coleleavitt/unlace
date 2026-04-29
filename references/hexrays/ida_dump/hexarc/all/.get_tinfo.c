// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF10
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF10 jmp     cs:off_4B9F70
//
// Resolved target: get_tinfo
// Target address:  0x4BC9A0
// GOT/IAT slot:    0x4B9F70
// Slot symbol:     off_4B9F70
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

