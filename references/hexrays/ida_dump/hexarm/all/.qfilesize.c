// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E670
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E670 jmp     cs:off_4E9B20
//
// Resolved target: qfilesize
// Target address:  0x4EC548
// GOT/IAT slot:    0x4E9B20
// Slot symbol:     off_4E9B20
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

