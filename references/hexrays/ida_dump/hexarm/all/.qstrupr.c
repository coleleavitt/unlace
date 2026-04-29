// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D890
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D890 jmp     cs:off_4E9430
//
// Resolved target: qstrupr
// Target address:  0x4EBE20
// GOT/IAT slot:    0x4E9430
// Slot symbol:     off_4E9430
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

