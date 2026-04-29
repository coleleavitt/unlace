// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B000
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B000 jmp     cs:off_4BF7E8
//
// Resolved target: get_fixup
// Target address:  0x4C2CD8
// GOT/IAT slot:    0x4BF7E8
// Slot symbol:     off_4BF7E8
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

