// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6150
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6150 jmp     cs:off_8D090
//
// Resolved target: qstrdup
// Target address:  0x8D610
// GOT/IAT slot:    0x8D090
// Slot symbol:     off_8D090
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

