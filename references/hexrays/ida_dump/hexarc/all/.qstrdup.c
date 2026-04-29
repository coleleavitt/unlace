// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29520
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29520 jmp     cs:off_4B9278
//
// Resolved target: qstrdup
// Target address:  0x4BBC48
// GOT/IAT slot:    0x4B9278
// Slot symbol:     off_4B9278
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

