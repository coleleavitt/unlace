// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_4088
//
// Resolved target: qfilesize
// Target address:  0x51C8
// GOT/IAT slot:    0x4088
// Slot symbol:     off_4088
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

