// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA0 jmp     cs:off_4C0638
//
// Resolved target: qexit
// Target address:  0x4C3628
// GOT/IAT slot:    0x4C0638
// Slot symbol:     off_4C0638
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

