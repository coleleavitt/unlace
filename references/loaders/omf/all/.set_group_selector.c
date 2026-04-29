// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3550
// Name:            .set_group_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3550 jmp     cs:off_14290
//
// Resolved target: set_group_selector
// Target address:  0x14898
// GOT/IAT slot:    0x14290
// Slot symbol:     off_14290
// Target type:     <no type info>
// ============================================================

void .set_group_selector(/* see target signature */)
{
    // Tail-call to set_group_selector via GOT/IAT indirection
    return set_group_selector(/* forwarded args */);
}

