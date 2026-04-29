// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA0 jmp     cs:off_4BF638
//
// Resolved target: qexit
// Target address:  0x4C2B28
// GOT/IAT slot:    0x4BF638
// Slot symbol:     off_4BF638
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

