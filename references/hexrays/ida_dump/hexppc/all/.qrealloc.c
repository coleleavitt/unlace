// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B670
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B670 jmp     cs:off_4DAB20
//
// Resolved target: qrealloc
// Target address:  0x4DD528
// GOT/IAT slot:    0x4DAB20
// Slot symbol:     off_4DAB20
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

