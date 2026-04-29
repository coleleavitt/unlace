// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B30
// Name:            .tag_strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B30 jmp     cs:off_4B9580
//
// Resolved target: tag_strlen
// Target address:  0x4BBF70
// GOT/IAT slot:    0x4B9580
// Slot symbol:     off_4B9580
// Target type:     <no type info>
// ============================================================

void .tag_strlen(/* see target signature */)
{
    // Tail-call to tag_strlen via GOT/IAT indirection
    return tag_strlen(/* forwarded args */);
}

