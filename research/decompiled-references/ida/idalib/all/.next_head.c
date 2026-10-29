// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB300
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB300 jmp     cs:off_2C7B168
//
// Resolved target: next_head
// Target address:  0x3C25E0
// GOT/IAT slot:    0x2C7B168
// Slot symbol:     off_2C7B168
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

