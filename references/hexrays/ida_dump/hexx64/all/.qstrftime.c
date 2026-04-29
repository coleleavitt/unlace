// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CDD0
// Name:            .qstrftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CDD0 jmp     cs:off_4EDED0
//
// Resolved target: qstrftime
// Target address:  0x4F2220
// GOT/IAT slot:    0x4EDED0
// Slot symbol:     off_4EDED0
// Target type:     <no type info>
// ============================================================

void .qstrftime(/* see target signature */)
{
    // Tail-call to qstrftime via GOT/IAT indirection
    return qstrftime(/* forwarded args */);
}

