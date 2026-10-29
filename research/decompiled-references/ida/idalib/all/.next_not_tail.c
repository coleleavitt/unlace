// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACCF0
// Name:            .next_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACCF0 jmp     cs:off_2C7BE60
//
// Resolved target: next_not_tail
// Target address:  0x3C25C0
// GOT/IAT slot:    0x2C7BE60
// Slot symbol:     off_2C7BE60
// Target type:     <no type info>
// ============================================================

void .next_not_tail(/* see target signature */)
{
    // Tail-call to next_not_tail via GOT/IAT indirection
    return next_not_tail(/* forwarded args */);
}

