// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114350
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114350 jmp     cs:qexit_ptr
//
// Resolved target: qexit
// Target address:  0x8D5178
// GOT/IAT slot:    0x8A0E48
// Slot symbol:     qexit_ptr
// Target type:     <no type info>
// ============================================================

void .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

