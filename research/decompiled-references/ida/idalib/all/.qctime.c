// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8FA0
// Name:            .qctime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8FA0 jmp     cs:off_2C79FB8
//
// Resolved target: qctime
// Target address:  0x841120
// GOT/IAT slot:    0x2C79FB8
// Slot symbol:     off_2C79FB8
// Target type:     <no type info>
// ============================================================

void .qctime(/* see target signature */)
{
    // Tail-call to qctime via GOT/IAT indirection
    return qctime(/* forwarded args */);
}

