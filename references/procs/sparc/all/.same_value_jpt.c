// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7030
// Name:            .same_value_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7030 jmp     cs:off_19000
//
// Resolved target: same_value_jpt
// Target address:  0x19530
// GOT/IAT slot:    0x19000
// Slot symbol:     off_19000
// Target type:     <no type info>
// ============================================================

void .same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt via GOT/IAT indirection
    return same_value_jpt(/* forwarded args */);
}

