// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A30
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A30 jmp     cs:off_4E500
//
// Resolved target: qftell
// Target address:  0x4FB38
// GOT/IAT slot:    0x4E500
// Slot symbol:     off_4E500
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

