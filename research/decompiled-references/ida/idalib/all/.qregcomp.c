// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9450
// Name:            .qregcomp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9450 jmp     cs:off_2C7A210
//
// Resolved target: qregcomp
// Target address:  0x89FAF0
// GOT/IAT slot:    0x2C7A210
// Slot symbol:     off_2C7A210
// Target type:     <no type info>
// ============================================================

void .qregcomp(/* see target signature */)
{
    // Tail-call to qregcomp via GOT/IAT indirection
    return qregcomp(/* forwarded args */);
}

