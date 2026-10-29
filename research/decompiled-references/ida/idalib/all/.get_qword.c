// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC710
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC710 jmp     cs:off_2C7BB70
//
// Resolved target: get_qword
// Target address:  0x3BEFD0
// GOT/IAT slot:    0x2C7BB70
// Slot symbol:     off_2C7BB70
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

