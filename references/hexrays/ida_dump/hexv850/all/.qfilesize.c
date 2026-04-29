// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B640
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B640 jmp     cs:off_4C0B08
//
// Resolved target: qfilesize
// Target address:  0x4C3B08
// GOT/IAT slot:    0x4C0B08
// Slot symbol:     off_4C0B08
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

