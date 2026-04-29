// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A880
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A880 jmp     cs:off_4CD428
//
// Resolved target: qstrupr
// Target address:  0x4CFE18
// GOT/IAT slot:    0x4CD428
// Slot symbol:     off_4CD428
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

