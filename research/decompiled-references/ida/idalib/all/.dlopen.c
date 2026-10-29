// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC9C0
// Name:            .dlopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC9C0 jmp     cs:off_2C7BCC8
//
// Resolved target: dlopen
// Target address:  0x2D11E58
// GOT/IAT slot:    0x2C7BCC8
// Slot symbol:     off_2C7BCC8
// Target type:     void *(const char *file, int mode)
// ============================================================

/* see target sig */ .dlopen(/* see target signature */)
{
    // Tail-call to dlopen via GOT/IAT indirection
    return dlopen(/* forwarded args */);
}

