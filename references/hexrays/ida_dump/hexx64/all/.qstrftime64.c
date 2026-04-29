// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C7B0
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C7B0 jmp     cs:off_4EDBC0
//
// Resolved target: qstrftime64
// Target address:  0x4F1EF0
// GOT/IAT slot:    0x4EDBC0
// Slot symbol:     off_4EDBC0
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

