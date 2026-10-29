// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111AB0
// Name:            .tag_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111AB0 jmp     cs:tag_on_ptr
//
// Resolved target: tag_on
// Target address:  0x8D3770
// GOT/IAT slot:    0x89F9F8
// Slot symbol:     tag_on_ptr
// Target type:     <no type info>
// ============================================================

void .tag_on(/* see target signature */)
{
    // Tail-call to tag_on via GOT/IAT indirection
    return tag_on(/* forwarded args */);
}

