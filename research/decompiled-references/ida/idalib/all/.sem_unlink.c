// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C90
// Name:            .sem_unlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C90 jmp     cs:off_2C7A630
//
// Resolved target: sem_unlink
// Target address:  0x2D11890
// GOT/IAT slot:    0x2C7A630
// Slot symbol:     off_2C7A630
// Target type:     int(const char *name)
// ============================================================

/* see target sig */ .sem_unlink(/* see target signature */)
{
    // Tail-call to sem_unlink via GOT/IAT indirection
    return sem_unlink(/* forwarded args */);
}

