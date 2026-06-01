// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA2A0
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA2A0 jmp     cs:off_2C7A938
//
// Resolved target: get_fixup
// Target address:  0x41B880
// GOT/IAT slot:    0x2C7A938
// Slot symbol:     off_2C7A938
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

