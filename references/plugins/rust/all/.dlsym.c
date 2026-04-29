// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .dlsym
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_A1C8
//
// Resolved target: dlsym
// Target address:  0xB4B0
// GOT/IAT slot:    0xA1C8
// Slot symbol:     off_A1C8
// Target type:     void *(void *handle, const char *name)
// ============================================================

/* see target sig */ .dlsym(/* see target signature */)
{
    // Tail-call to dlsym via GOT/IAT indirection
    return dlsym(/* forwarded args */);
}

