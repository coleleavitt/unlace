// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29A10
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29A10 jmp     cs:off_4B94F0
//
// Resolved target: prev_head
// Target address:  0x4BBED8
// GOT/IAT slot:    0x4B94F0
// Slot symbol:     off_4B94F0
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

