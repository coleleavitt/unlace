// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A520
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A520 jmp     cs:off_4C0278
//
// Resolved target: qstrdup
// Target address:  0x4C3240
// GOT/IAT slot:    0x4C0278
// Slot symbol:     off_4C0278
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

