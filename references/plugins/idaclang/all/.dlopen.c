// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3400
// Name:            .dlopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3400 jmp     cs:off_291E8
//
// Resolved target: dlopen
// Target address:  0x295A8
// GOT/IAT slot:    0x291E8
// Slot symbol:     off_291E8
// Target type:     void *(const char *file, int mode)
// ============================================================

/* see target sig */ .dlopen(/* see target signature */)
{
    // Tail-call to dlopen via GOT/IAT indirection
    return dlopen(/* forwarded args */);
}

