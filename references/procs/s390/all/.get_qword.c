// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10220
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10220 jmp     cs:off_2E0F8
//
// Resolved target: get_qword
// Target address:  0x36D70
// GOT/IAT slot:    0x2E0F8
// Slot symbol:     off_2E0F8
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

