// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD540
// Name:            .tag_strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD540 jmp     cs:off_2C7C288
//
// Resolved target: tag_strlen
// Target address:  0x3DF9C0
// GOT/IAT slot:    0x2C7C288
// Slot symbol:     off_2C7C288
// Target type:     <no type info>
// ============================================================

void .tag_strlen(/* see target signature */)
{
    // Tail-call to tag_strlen via GOT/IAT indirection
    return tag_strlen(/* forwarded args */);
}

