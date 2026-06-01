// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A71F0
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A71F0 jmp     cs:off_2C790E0
//
// Resolved target: qalloc
// Target address:  0x83FBE0
// GOT/IAT slot:    0x2C790E0
// Slot symbol:     off_2C790E0
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

