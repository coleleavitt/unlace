// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A880
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A880 jmp     cs:off_4DA428
//
// Resolved target: qstrupr
// Target address:  0x4DCDF8
// GOT/IAT slot:    0x4DA428
// Slot symbol:     off_4DA428
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

