// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6A0
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6A0 jmp     cs:off_4CDB38
//
// Resolved target: qfindnext
// Target address:  0x4D0560
// GOT/IAT slot:    0x4CDB38
// Slot symbol:     off_4CDB38
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

