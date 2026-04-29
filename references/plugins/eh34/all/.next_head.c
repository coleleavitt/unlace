// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6030
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6030 jmp     cs:off_8D000
//
// Resolved target: next_head
// Target address:  0x8D580
// GOT/IAT slot:    0x8D000
// Slot symbol:     off_8D000
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

