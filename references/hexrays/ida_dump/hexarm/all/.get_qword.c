// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E3F0
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E3F0 jmp     cs:off_4E99E0
//
// Resolved target: get_qword
// Target address:  0x4EC400
// GOT/IAT slot:    0x4E99E0
// Slot symbol:     off_4E99E0
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

