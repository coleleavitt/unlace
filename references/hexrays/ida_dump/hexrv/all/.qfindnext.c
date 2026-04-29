// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B690
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B690 jmp     cs:off_4BFB30
//
// Resolved target: qfindnext
// Target address:  0x4C3030
// GOT/IAT slot:    0x4BFB30
// Slot symbol:     off_4BFB30
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

