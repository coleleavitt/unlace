// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20040
// Name:            .same_value_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20040 jmp     cs:off_95008
//
// Resolved target: same_value_jpt
// Target address:  0x95A38
// GOT/IAT slot:    0x95008
// Slot symbol:     off_95008
// Target type:     <no type info>
// ============================================================

void .same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt via GOT/IAT indirection
    return same_value_jpt(/* forwarded args */);
}

