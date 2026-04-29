// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C480
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C480 jmp     cs:off_4EDA28
//
// Resolved target: get_qword
// Target address:  0x4F1D48
// GOT/IAT slot:    0x4EDA28
// Slot symbol:     off_4EDA28
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

