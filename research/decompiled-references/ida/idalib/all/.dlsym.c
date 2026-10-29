// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7150
// Name:            .dlsym
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7150 jmp     cs:off_2C79090
//
// Resolved target: dlsym
// Target address:  0x2D11350
// GOT/IAT slot:    0x2C79090
// Slot symbol:     off_2C79090
// Target type:     void *(void *handle, const char *name)
// ============================================================

/* see target sig */ .dlsym(/* see target signature */)
{
    // Tail-call to dlsym via GOT/IAT indirection
    return dlsym(/* forwarded args */);
}

