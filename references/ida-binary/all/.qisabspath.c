// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1165C0
// Name:            .qisabspath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1165C0 jmp     cs:qisabspath_ptr
//
// Resolved target: qisabspath
// Target address:  0x8D6768
// GOT/IAT slot:    0x8A1F80
// Slot symbol:     qisabspath_ptr
// Target type:     <no type info>
// ============================================================

void .qisabspath(/* see target signature */)
{
    // Tail-call to qisabspath via GOT/IAT indirection
    return qisabspath(/* forwarded args */);
}

