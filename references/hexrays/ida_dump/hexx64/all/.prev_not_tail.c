// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CED0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CED0 jmp     cs:off_4EDF50
//
// Resolved target: prev_not_tail
// Target address:  0x4F22A0
// GOT/IAT slot:    0x4EDF50
// Slot symbol:     off_4EDF50
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

