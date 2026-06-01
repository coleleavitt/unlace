// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9FB0
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9FB0 jmp     cs:off_2C7A7C0
//
// Resolved target: prev_head
// Target address:  0x3C27D0
// GOT/IAT slot:    0x2C7A7C0
// Slot symbol:     off_2C7A7C0
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

