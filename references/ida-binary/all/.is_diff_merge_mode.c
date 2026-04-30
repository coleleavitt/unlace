// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B990
// Name:            .is_diff_merge_mode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B990 jmp     cs:is_diff_merge_mode_ptr
//
// Resolved target: is_diff_merge_mode
// Target address:  0x8D9C30
// GOT/IAT slot:    0x8A4968
// Slot symbol:     is_diff_merge_mode_ptr
// Target type:     <no type info>
// ============================================================

void .is_diff_merge_mode(/* see target signature */)
{
    // Tail-call to is_diff_merge_mode via GOT/IAT indirection
    return is_diff_merge_mode(/* forwarded args */);
}

