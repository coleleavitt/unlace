// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E90
// Name:            .verify_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E90 jmp     cs:off_2C7A730
//
// Resolved target: verify_tinfo
// Target address:  0x54A300
// GOT/IAT slot:    0x2C7A730
// Slot symbol:     off_2C7A730
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .verify_tinfo(/* see target signature */)
{
    // Tail-call to verify_tinfo via GOT/IAT indirection
    return verify_tinfo(/* forwarded args */);
}

