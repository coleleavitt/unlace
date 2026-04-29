// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C00
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C00 jmp     cs:off_755E8
//
// Resolved target: prev_not_tail
// Target address:  0x75E50
// GOT/IAT slot:    0x755E8
// Slot symbol:     off_755E8
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

