// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD640
// Name:            .apply_idasgn_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD640 jmp     cs:off_2C7C308
//
// Resolved target: apply_idasgn_to
// Target address:  0x68BD80
// GOT/IAT slot:    0x2C7C308
// Slot symbol:     off_2C7C308
// Target type:     __int64 __fastcall(void *src)
// ============================================================

/* see target sig */ .apply_idasgn_to(/* see target signature */)
{
    // Tail-call to apply_idasgn_to via GOT/IAT indirection
    return apply_idasgn_to(/* forwarded args */);
}

