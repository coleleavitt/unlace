// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6C0
// Name:            .qisabspath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6C0 jmp     cs:off_CA348
//
// Resolved target: qisabspath
// Target address:  0xD0C80
// GOT/IAT slot:    0xCA348
// Slot symbol:     off_CA348
// Target type:     <no type info>
// ============================================================

void .qisabspath(/* see target signature */)
{
    // Tail-call to qisabspath via GOT/IAT indirection
    return qisabspath(/* forwarded args */);
}

