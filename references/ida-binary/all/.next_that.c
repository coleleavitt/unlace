// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C70
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C70 jmp     cs:next_that_ptr
//
// Resolved target: next_that
// Target address:  0x8D6188
// GOT/IAT slot:    0x8A1AD8
// Slot symbol:     next_that_ptr
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

