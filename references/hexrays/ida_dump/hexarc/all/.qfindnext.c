// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A670
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A670 jmp     cs:off_4B9B20
//
// Resolved target: qfindnext
// Target address:  0x4BC528
// GOT/IAT slot:    0x4B9B20
// Slot symbol:     off_4B9B20
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

