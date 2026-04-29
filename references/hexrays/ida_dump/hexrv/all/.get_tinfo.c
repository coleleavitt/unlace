// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF30
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF30 jmp     cs:off_4BFF80
//
// Resolved target: get_tinfo
// Target address:  0x4C34A8
// GOT/IAT slot:    0x4BFF80
// Slot symbol:     off_4BFF80
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

