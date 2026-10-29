// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8380
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8380 jmp     cs:off_2C799A8
//
// Resolved target: create_align
// Target address:  0x3D68B0
// GOT/IAT slot:    0x2C799A8
// Slot symbol:     off_2C799A8
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

