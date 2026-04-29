// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29880
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29880 jmp     cs:off_4B9428
//
// Resolved target: qstrupr
// Target address:  0x4BBDF8
// GOT/IAT slot:    0x4B9428
// Slot symbol:     off_4B9428
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

