// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9080
// Name:            .put_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9080 jmp     cs:off_89028
//
// Resolved target: put_qword
// Target address:  0x8C328
// GOT/IAT slot:    0x89028
// Slot symbol:     off_89028
// Target type:     <no type info>
// ============================================================

void .put_qword(/* see target signature */)
{
    // Tail-call to put_qword via GOT/IAT indirection
    return put_qword(/* forwarded args */);
}

