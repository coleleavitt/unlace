// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCF0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCF0 jmp     cs:off_4ED660
//
// Resolved target: qexit
// Target address:  0x4F1970
// GOT/IAT slot:    0x4ED660
// Slot symbol:     off_4ED660
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

