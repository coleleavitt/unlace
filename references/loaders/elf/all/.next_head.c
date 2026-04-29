// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9040
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9040 jmp     cs:off_89008
//
// Resolved target: next_head
// Target address:  0x8C308
// GOT/IAT slot:    0x89008
// Slot symbol:     off_89008
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

