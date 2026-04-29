// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7030
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7030 jmp     cs:off_1D000
//
// Resolved target: get_segm_base
// Target address:  0x1D330
// GOT/IAT slot:    0x1D000
// Slot symbol:     off_1D000
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

