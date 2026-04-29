// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29AE0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29AE0 jmp     cs:off_4B9558
//
// Resolved target: qstrlwr
// Target address:  0x4BBF40
// GOT/IAT slot:    0x4B9558
// Slot symbol:     off_4B9558
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

