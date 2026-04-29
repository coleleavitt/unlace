// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA80
// Name:            .dlopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA80 jmp     cs:off_CA528
//
// Resolved target: dlopen
// Target address:  0xD0E78
// GOT/IAT slot:    0xCA528
// Slot symbol:     off_CA528
// Target type:     void *(const char *file, int mode)
// ============================================================

/* see target sig */ .dlopen(/* see target signature */)
{
    // Tail-call to dlopen via GOT/IAT indirection
    return dlopen(/* forwarded args */);
}

