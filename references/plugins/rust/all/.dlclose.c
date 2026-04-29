// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .dlclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_A090
//
// Resolved target: dlclose
// Target address:  0xB360
// GOT/IAT slot:    0xA090
// Slot symbol:     off_A090
// Target type:     int(void *handle)
// ============================================================

/* see target sig */ .dlclose(/* see target signature */)
{
    // Tail-call to dlclose via GOT/IAT indirection
    return dlclose(/* forwarded args */);
}

