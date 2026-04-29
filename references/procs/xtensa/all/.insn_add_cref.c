// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7180
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7180 jmp     cs:off_1D0A8
//
// Resolved target: insn_add_cref
// Target address:  0x1D3D8
// GOT/IAT slot:    0x1D0A8
// Slot symbol:     off_1D0A8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

