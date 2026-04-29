// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C560
// Name:            .verify_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C560 jmp     cs:off_4EDA98
//
// Resolved target: verify_tinfo
// Target address:  0x4F1DB8
// GOT/IAT slot:    0x4EDA98
// Slot symbol:     off_4EDA98
// Target type:     <no type info>
// ============================================================

void .verify_tinfo(/* see target signature */)
{
    // Tail-call to verify_tinfo via GOT/IAT indirection
    return verify_tinfo(/* forwarded args */);
}

