// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA0C0
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA0C0 jmp     cs:off_2C7A848
//
// Resolved target: qstrupr
// Target address:  0x8419E0
// GOT/IAT slot:    0x2C7A848
// Slot symbol:     off_2C7A848
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

