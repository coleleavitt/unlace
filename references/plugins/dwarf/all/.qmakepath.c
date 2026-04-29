// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD60
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD60 jmp     cs:off_CA698
//
// Resolved target: qmakepath
// Target address:  0xD1000
// GOT/IAT slot:    0xCA698
// Slot symbol:     off_CA698
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

