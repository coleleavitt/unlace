// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4410
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4410 jmp     cs:off_4E1F0
//
// Resolved target: qexit
// Target address:  0x4F800
// GOT/IAT slot:    0x4E1F0
// Slot symbol:     off_4E1F0
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

