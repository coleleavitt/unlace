// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD970
// Name:            .is_diff_merge_mode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD970 jmp     cs:off_2C7C4A0
//
// Resolved target: is_diff_merge_mode
// Target address:  0x4577F0
// GOT/IAT slot:    0x2C7C4A0
// Slot symbol:     off_2C7C4A0
// Target type:     <no type info>
// ============================================================

void .is_diff_merge_mode(/* see target signature */)
{
    // Tail-call to is_diff_merge_mode via GOT/IAT indirection
    return is_diff_merge_mode(/* forwarded args */);
}

