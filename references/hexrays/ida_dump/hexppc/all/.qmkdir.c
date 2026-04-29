// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE30
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE30 jmp     cs:off_4DAF00
//
// Resolved target: qmkdir
// Target address:  0x4DD930
// GOT/IAT slot:    0x4DAF00
// Slot symbol:     off_4DAF00
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

