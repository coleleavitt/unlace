// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9710
// Name:            .sigemptyset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9710 jmp     cs:off_2C7A370
//
// Resolved target: sigemptyset
// Target address:  0x2D117C0
// GOT/IAT slot:    0x2C7A370
// Slot symbol:     off_2C7A370
// Target type:     int(sigset_t *set)
// ============================================================

/* see target sig */ .sigemptyset(/* see target signature */)
{
    // Tail-call to sigemptyset via GOT/IAT indirection
    return sigemptyset(/* forwarded args */);
}

