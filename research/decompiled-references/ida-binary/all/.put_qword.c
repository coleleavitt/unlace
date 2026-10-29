// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1179F0
// Name:            .put_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1179F0 jmp     cs:put_qword_ptr
//
// Resolved target: put_qword
// Target address:  0x8D7430
// GOT/IAT slot:    0x8A2998
// Slot symbol:     put_qword_ptr
// Target type:     <no type info>
// ============================================================

void .put_qword(/* see target signature */)
{
    // Tail-call to put_qword via GOT/IAT indirection
    return put_qword(/* forwarded args */);
}

