// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DAB0
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DAB0 jmp     cs:off_B3540
//
// Resolved target: qfileexist
// Target address:  0xB3D08
// GOT/IAT slot:    0xB3540
// Slot symbol:     off_B3540
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

