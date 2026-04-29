// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B150
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B150 jmp     cs:off_4BA090
//
// Resolved target: qfree
// Target address:  0x4BCAC8
// GOT/IAT slot:    0x4BA090
// Slot symbol:     off_4BA090
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

