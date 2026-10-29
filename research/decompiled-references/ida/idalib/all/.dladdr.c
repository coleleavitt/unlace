// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB950
// Name:            .dladdr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB950 jmp     cs:off_2C7B490
//
// Resolved target: dladdr
// Target address:  0x2D11C10
// GOT/IAT slot:    0x2C7B490
// Slot symbol:     off_2C7B490
// Target type:     int(const void *address, Dl_info *info)
// ============================================================

/* see target sig */ .dladdr(/* see target signature */)
{
    // Tail-call to dladdr via GOT/IAT indirection
    return dladdr(/* forwarded args */);
}

