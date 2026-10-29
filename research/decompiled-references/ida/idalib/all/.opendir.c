// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8950
// Name:            .opendir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8950 jmp     cs:off_2C79C90
//
// Resolved target: opendir
// Target address:  0x2D11630
// GOT/IAT slot:    0x2C79C90
// Slot symbol:     off_2C79C90
// Target type:     DIR *(const char *name)
// ============================================================

/* see target sig */ .opendir(/* see target signature */)
{
    // Tail-call to opendir via GOT/IAT indirection
    return opendir(/* forwarded args */);
}

