// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34D0
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34D0 jmp     cs:off_28250
//
// Resolved target: get_qword
// Target address:  0x28700
// GOT/IAT slot:    0x28250
// Slot symbol:     off_28250
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

