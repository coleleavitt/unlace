// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19850
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19850 jmp     cs:off_75410
//
// Resolved target: get_qword
// Target address:  0x75C60
// GOT/IAT slot:    0x75410
// Slot symbol:     off_75410
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

