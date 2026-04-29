// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_8150
//
// Resolved target: qmakepath
// Target address:  0x8348
// GOT/IAT slot:    0x8150
// Slot symbol:     off_8150
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

