// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C880
// Name:            .get_group_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C880 jmp     cs:off_4EDC28
//
// Resolved target: get_group_selector
// Target address:  0x4F1F60
// GOT/IAT slot:    0x4EDC28
// Slot symbol:     off_4EDC28
// Target type:     <no type info>
// ============================================================

void .get_group_selector(/* see target signature */)
{
    // Tail-call to get_group_selector via GOT/IAT indirection
    return get_group_selector(/* forwarded args */);
}

