// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB170
// Name:            .put_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB170 jmp     cs:off_2C7B0A0
//
// Resolved target: put_qword
// Target address:  0x59A370
// GOT/IAT slot:    0x2C7B0A0
// Slot symbol:     off_2C7B0A0
// Target type:     <no type info>
// ============================================================

void .put_qword(/* see target signature */)
{
    // Tail-call to put_qword via GOT/IAT indirection
    return put_qword(/* forwarded args */);
}

