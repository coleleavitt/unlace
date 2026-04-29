// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8B0
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8B0 jmp     cs:off_4ED440
//
// Resolved target: qstrupr
// Target address:  0x4F1738
// GOT/IAT slot:    0x4ED440
// Slot symbol:     off_4ED440
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

