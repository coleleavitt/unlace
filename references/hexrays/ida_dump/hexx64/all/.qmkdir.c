// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF60
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF60 jmp     cs:off_4EDF98
//
// Resolved target: qmkdir
// Target address:  0x4F22E8
// GOT/IAT slot:    0x4EDF98
// Slot symbol:     off_4EDF98
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

