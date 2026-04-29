// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_8170
//
// Resolved target: qfree
// Target address:  0x8378
// GOT/IAT slot:    0x8170
// Slot symbol:     off_8170
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

