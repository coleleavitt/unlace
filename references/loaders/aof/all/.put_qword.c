// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .put_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_7010
//
// Resolved target: put_qword
// Target address:  0x71C8
// GOT/IAT slot:    0x7010
// Slot symbol:     off_7010
// Target type:     <no type info>
// ============================================================

void .put_qword(/* see target signature */)
{
    // Tail-call to put_qword via GOT/IAT indirection
    return put_qword(/* forwarded args */);
}

