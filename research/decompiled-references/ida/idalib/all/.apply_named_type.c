// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7520
// Name:            .apply_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7520 jmp     cs:off_2C79278
//
// Resolved target: apply_named_type
// Target address:  0x619A60
// GOT/IAT slot:    0x2C79278
// Slot symbol:     off_2C79278
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ .apply_named_type(/* see target signature */)
{
    // Tail-call to apply_named_type via GOT/IAT indirection
    return apply_named_type(/* forwarded args */);
}

