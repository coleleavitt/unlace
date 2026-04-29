// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44D0
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44D0 jmp     cs:off_23250
//
// Resolved target: get_qword
// Target address:  0x23670
// GOT/IAT slot:    0x23250
// Slot symbol:     off_23250
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

