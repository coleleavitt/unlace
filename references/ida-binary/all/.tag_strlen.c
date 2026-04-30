// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B140
// Name:            .tag_strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B140 jmp     cs:tag_strlen_ptr
//
// Resolved target: tag_strlen
// Target address:  0x8D96E0
// GOT/IAT slot:    0x8A4540
// Slot symbol:     tag_strlen_ptr
// Target type:     <no type info>
// ============================================================

void .tag_strlen(/* see target signature */)
{
    // Tail-call to tag_strlen via GOT/IAT indirection
    return tag_strlen(/* forwarded args */);
}

