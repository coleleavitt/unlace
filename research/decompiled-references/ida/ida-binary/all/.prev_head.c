// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B00
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B00 jmp     cs:prev_head_ptr
//
// Resolved target: prev_head
// Target address:  0x8D60A8
// GOT/IAT slot:    0x8A1A20
// Slot symbol:     prev_head_ptr
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

