// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_8198
//
// Resolved target: qfree
// Target address:  0x8888
// GOT/IAT slot:    0x8198
// Slot symbol:     off_8198
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

