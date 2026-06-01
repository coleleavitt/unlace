// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA7E0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA7E0 jmp     cs:off_2C7ABD8
//
// Resolved target: op_offset
// Target address:  0x4E2980
// GOT/IAT slot:    0x2C7ABD8
// Slot symbol:     off_2C7ABD8
// Target type:     __int64 __fastcall(int, int, int, int, int, int)
// ============================================================

/* see target sig */ .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

