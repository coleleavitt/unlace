// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA50
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA50 jmp     cs:off_4C0D10
//
// Resolved target: qfopen
// Target address:  0x4C3D28
// GOT/IAT slot:    0x4C0D10
// Slot symbol:     off_4C0D10
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

