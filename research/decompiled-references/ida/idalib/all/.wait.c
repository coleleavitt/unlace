// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA930
// Name:            .wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA930 jmp     cs:off_2C7AC80
//
// Resolved target: wait
// Target address:  0x2D119C8
// GOT/IAT slot:    0x2C7AC80
// Slot symbol:     off_2C7AC80
// Target type:     __pid_t(__WAIT_STATUS stat_loc)
// ============================================================

/* see target sig */ .wait(/* see target signature */)
{
    // Tail-call to wait via GOT/IAT indirection
    return wait(/* forwarded args */);
}

