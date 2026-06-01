// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1124D0
// Name:            .prev_that
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1124D0 jmp     cs:prev_that_ptr
//
// Resolved target: prev_that
// Target address:  0x8D3DE8
// GOT/IAT slot:    0x89FF08
// Slot symbol:     prev_that_ptr
// Target type:     <no type info>
// ============================================================

void .prev_that(/* see target signature */)
{
    // Tail-call to prev_that via GOT/IAT indirection
    return prev_that(/* forwarded args */);
}

