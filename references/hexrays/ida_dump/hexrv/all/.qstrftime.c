// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCB0
// Name:            .qstrftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCB0 jmp     cs:off_4BFE40
//
// Resolved target: qstrftime
// Target address:  0x4C3368
// GOT/IAT slot:    0x4BFE40
// Slot symbol:     off_4BFE40
// Target type:     <no type info>
// ============================================================

void .qstrftime(/* see target signature */)
{
    // Tail-call to qstrftime via GOT/IAT indirection
    return qstrftime(/* forwarded args */);
}

