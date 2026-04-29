// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB80
// Name:            .tag_strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB80 jmp     cs:off_4ED5A8
//
// Resolved target: tag_strlen
// Target address:  0x4F18B0
// GOT/IAT slot:    0x4ED5A8
// Slot symbol:     off_4ED5A8
// Target type:     <no type info>
// ============================================================

void .tag_strlen(/* see target signature */)
{
    // Tail-call to tag_strlen via GOT/IAT indirection
    return tag_strlen(/* forwarded args */);
}

