// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29CA0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29CA0 jmp     cs:off_4B9638
//
// Resolved target: qexit
// Target address:  0x4BC030
// GOT/IAT slot:    0x4B9638
// Slot symbol:     off_4B9638
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

