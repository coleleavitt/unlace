// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3580
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3580 jmp     cs:off_292A8
//
// Resolved target: qfree
// Target address:  0x29678
// GOT/IAT slot:    0x292A8
// Slot symbol:     off_292A8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

