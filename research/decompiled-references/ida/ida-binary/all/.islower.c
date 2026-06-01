// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114230
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114230 jmp     cs:islower_ptr
//
// Resolved target: islower
// Target address:  0x8D50A8
// GOT/IAT slot:    0x8A0DB8
// Slot symbol:     islower_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

