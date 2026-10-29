// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB580
// Name:            .getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB580 jmp     cs:off_2C7B2A8
//
// Resolved target: getcwd
// Target address:  0x2D11B90
// GOT/IAT slot:    0x2C7B2A8
// Slot symbol:     off_2C7B2A8
// Target type:     char *(char *buf, size_t size)
// ============================================================

/* see target sig */ .getcwd(/* see target signature */)
{
    // Tail-call to getcwd via GOT/IAT indirection
    return getcwd(/* forwarded args */);
}

