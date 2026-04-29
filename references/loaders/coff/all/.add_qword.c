// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40E0
// Name:            .add_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40E0 jmp     cs:off_23058
//
// Resolved target: add_qword
// Target address:  0x23478
// GOT/IAT slot:    0x23058
// Slot symbol:     off_23058
// Target type:     <no type info>
// ============================================================

void .add_qword(/* see target signature */)
{
    // Tail-call to add_qword via GOT/IAT indirection
    return add_qword(/* forwarded args */);
}

