// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA640
// Name:            .qisabspath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA640 jmp     cs:off_2C7AB08
//
// Resolved target: qisabspath
// Target address:  0x83E0A0
// GOT/IAT slot:    0x2C7AB08
// Slot symbol:     off_2C7AB08
// Target type:     <no type info>
// ============================================================

void .qisabspath(/* see target signature */)
{
    // Tail-call to qisabspath via GOT/IAT indirection
    return qisabspath(/* forwarded args */);
}

