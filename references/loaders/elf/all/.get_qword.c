// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9680
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9680 jmp     cs:off_89328
//
// Resolved target: get_qword
// Target address:  0x8C630
// GOT/IAT slot:    0x89328
// Slot symbol:     off_89328
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

