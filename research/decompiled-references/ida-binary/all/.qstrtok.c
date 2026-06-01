// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118890
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118890 jmp     cs:qstrtok_ptr
//
// Resolved target: qstrtok
// Target address:  0x8D7D40
// GOT/IAT slot:    0x8A30E8
// Slot symbol:     qstrtok_ptr
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

