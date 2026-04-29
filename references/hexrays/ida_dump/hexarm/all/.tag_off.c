// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCD0
// Name:            .tag_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DCD0 jmp     cs:off_4E9650
//
// Resolved target: tag_off
// Target address:  0x4EC068
// GOT/IAT slot:    0x4E9650
// Slot symbol:     off_4E9650
// Target type:     <no type info>
// ============================================================

void .tag_off(/* see target signature */)
{
    // Tail-call to tag_off via GOT/IAT indirection
    return tag_off(/* forwarded args */);
}

