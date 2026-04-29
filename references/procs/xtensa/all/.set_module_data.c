// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71A0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71A0 jmp     cs:off_1D0B8
//
// Resolved target: set_module_data
// Target address:  0x1D3E8
// GOT/IAT slot:    0x1D0B8
// Slot symbol:     off_1D0B8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

