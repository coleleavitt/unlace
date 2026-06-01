// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB9B0
// Name:            .change_segment_status
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB9B0 jmp     cs:off_2C7B4C0
//
// Resolved target: change_segment_status
// Target address:  0x3D6F70
// GOT/IAT slot:    0x2C7B4C0
// Slot symbol:     off_2C7B4C0
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .change_segment_status(/* see target signature */)
{
    // Tail-call to change_segment_status via GOT/IAT indirection
    return change_segment_status(/* forwarded args */);
}

