// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B630
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B630 jmp     cs:off_4DAB00
//
// Resolved target: qfilesize
// Target address:  0x4DD508
// GOT/IAT slot:    0x4DAB00
// Slot symbol:     off_4DAB00
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

