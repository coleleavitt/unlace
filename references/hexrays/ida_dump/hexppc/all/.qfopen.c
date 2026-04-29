// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA40
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA40 jmp     cs:off_4DAD08
//
// Resolved target: qfopen
// Target address:  0x4DD728
// GOT/IAT slot:    0x4DAD08
// Slot symbol:     off_4DAD08
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

