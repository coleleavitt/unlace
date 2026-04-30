// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AFB0
// Name:            .qisdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AFB0 jmp     cs:qisdir_ptr
//
// Resolved target: qisdir
// Target address:  0x8D9600
// GOT/IAT slot:    0x8A4478
// Slot symbol:     qisdir_ptr
// Target type:     <no type info>
// ============================================================

void .qisdir(/* see target signature */)
{
    // Tail-call to qisdir via GOT/IAT indirection
    return qisdir(/* forwarded args */);
}

