// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA0 jmp     cs:off_4CD638
//
// Resolved target: qexit
// Target address:  0x4D0050
// GOT/IAT slot:    0x4CD638
// Slot symbol:     off_4CD638
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

