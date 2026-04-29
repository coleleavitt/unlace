// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E6D0
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E6D0 jmp     cs:off_4E9B50
//
// Resolved target: qfindnext
// Target address:  0x4EC578
// GOT/IAT slot:    0x4E9B50
// Slot symbol:     off_4E9B50
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

