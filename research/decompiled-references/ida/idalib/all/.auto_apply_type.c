// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B90
// Name:            .auto_apply_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B90 jmp     cs:off_2C79DB0
//
// Resolved target: auto_apply_type
// Target address:  0x3A6340
// GOT/IAT slot:    0x2C79DB0
// Slot symbol:     off_2C79DB0
// Target type:     <no type info>
// ============================================================

void .auto_apply_type(/* see target signature */)
{
    // Tail-call to auto_apply_type via GOT/IAT indirection
    return auto_apply_type(/* forwarded args */);
}

