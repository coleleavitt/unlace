// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114760
// Name:            .qregcomp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114760 jmp     cs:qregcomp_ptr
//
// Resolved target: qregcomp
// Target address:  0x8D5408
// GOT/IAT slot:    0x8A1050
// Slot symbol:     qregcomp_ptr
// Target type:     <no type info>
// ============================================================

void .qregcomp(/* see target signature */)
{
    // Tail-call to qregcomp via GOT/IAT indirection
    return qregcomp(/* forwarded args */);
}

