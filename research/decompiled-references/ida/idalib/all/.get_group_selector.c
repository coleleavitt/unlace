// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9880
// Name:            .get_group_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9880 jmp     cs:off_2C7A428
//
// Resolved target: get_group_selector
// Target address:  0x4223E0
// GOT/IAT slot:    0x2C7A428
// Slot symbol:     off_2C7A428
// Target type:     <no type info>
// ============================================================

void .get_group_selector(/* see target signature */)
{
    // Tail-call to get_group_selector via GOT/IAT indirection
    return get_group_selector(/* forwarded args */);
}

