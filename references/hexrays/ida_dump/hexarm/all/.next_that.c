// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB40
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB40 jmp     cs:off_4E9588
//
// Resolved target: next_that
// Target address:  0x4EBF98
// GOT/IAT slot:    0x4E9588
// Slot symbol:     off_4E9588
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

