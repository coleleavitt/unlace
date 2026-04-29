// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E200
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E200 jmp     cs:off_4E98E8
//
// Resolved target: tag_remove
// Target address:  0x4EC308
// GOT/IAT slot:    0x4E98E8
// Slot symbol:     off_4E98E8
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

