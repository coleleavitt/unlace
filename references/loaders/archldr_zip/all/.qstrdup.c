// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B0
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B0 jmp     cs:off_8040
//
// Resolved target: qstrdup
// Target address:  0x8200
// GOT/IAT slot:    0x8040
// Slot symbol:     off_8040
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

