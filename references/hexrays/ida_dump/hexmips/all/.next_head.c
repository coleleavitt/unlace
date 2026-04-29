// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0B0
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0B0 jmp     cs:off_4CD040
//
// Resolved target: next_head
// Target address:  0x4CFA30
// GOT/IAT slot:    0x4CD040
// Slot symbol:     off_4CD040
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

