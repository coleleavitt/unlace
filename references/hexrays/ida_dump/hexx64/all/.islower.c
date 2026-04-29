// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C710
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C710 jmp     cs:off_4EDB70
//
// Resolved target: islower
// Target address:  0x4F1EA0
// GOT/IAT slot:    0x4EDB70
// Slot symbol:     off_4EDB70
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

