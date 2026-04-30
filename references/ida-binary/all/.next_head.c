// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C00
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C00 jmp     cs:next_head_ptr
//
// Resolved target: next_head
// Target address:  0x8D7568
// GOT/IAT slot:    0x8A2AA0
// Slot symbol:     next_head_ptr
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

