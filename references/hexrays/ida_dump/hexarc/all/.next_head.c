// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x290B0
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x290B0 jmp     cs:off_4B9040
//
// Resolved target: next_head
// Target address:  0x4BBA10
// GOT/IAT slot:    0x4B9040
// Slot symbol:     off_4B9040
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

