// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70A0
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70A0 jmp     cs:off_1D038
//
// Resolved target: add_frame
// Target address:  0x1D368
// GOT/IAT slot:    0x1D038
// Slot symbol:     off_1D038
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}

