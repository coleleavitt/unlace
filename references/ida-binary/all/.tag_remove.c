// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD30
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD30 jmp     cs:tag_remove_ptr
//
// Resolved target: tag_remove
// Target address:  0x8D9E70
// GOT/IAT slot:    0x8A4B38
// Slot symbol:     tag_remove_ptr
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

