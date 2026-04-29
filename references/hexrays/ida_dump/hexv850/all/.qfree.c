// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C180
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C180 jmp     cs:off_4C10A8
//
// Resolved target: qfree
// Target address:  0x4C40D8
// GOT/IAT slot:    0x4C10A8
// Slot symbol:     off_4C10A8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

