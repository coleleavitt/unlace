// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6040
// Name:            .same_value_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6040 jmp     cs:off_1D008
//
// Resolved target: same_value_jpt
// Target address:  0x1D4F8
// GOT/IAT slot:    0x1D008
// Slot symbol:     off_1D008
// Target type:     <no type info>
// ============================================================

void .same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt via GOT/IAT indirection
    return same_value_jpt(/* forwarded args */);
}

