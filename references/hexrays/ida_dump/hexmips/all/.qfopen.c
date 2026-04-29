// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA50
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA50 jmp     cs:off_4CDD10
//
// Resolved target: qfopen
// Target address:  0x4D0750
// GOT/IAT slot:    0x4CDD10
// Slot symbol:     off_4CDD10
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

