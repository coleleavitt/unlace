// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B20
// Name:            .next_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B20 jmp     cs:off_4B9578
//
// Resolved target: next_that
// Target address:  0x4BBF68
// GOT/IAT slot:    0x4B9578
// Slot symbol:     off_4B9578
// Target type:     <no type info>
// ============================================================

void .next_that(/* see target signature */)
{
    // Tail-call to next_that via GOT/IAT indirection
    return next_that(/* forwarded args */);
}

