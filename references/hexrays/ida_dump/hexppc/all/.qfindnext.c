// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B690
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B690 jmp     cs:off_4DAB30
//
// Resolved target: qfindnext
// Target address:  0x4DD538
// GOT/IAT slot:    0x4DAB30
// Slot symbol:     off_4DAB30
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

