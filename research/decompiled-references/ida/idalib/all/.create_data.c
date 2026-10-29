// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9210
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9210 jmp     cs:off_2C7A0F0
//
// Resolved target: create_data
// Target address:  0x3D5480
// GOT/IAT slot:    0x2C7A0F0
// Slot symbol:     off_2C7A0F0
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

