// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5040
// Name:            .same_value_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5040 jmp     cs:off_15008
//
// Resolved target: same_value_jpt
// Target address:  0x16098
// GOT/IAT slot:    0x15008
// Slot symbol:     off_15008
// Target type:     <no type info>
// ============================================================

void .same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt via GOT/IAT indirection
    return same_value_jpt(/* forwarded args */);
}

