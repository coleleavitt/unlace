// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8900
// Name:            .must_journal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8900 jmp     cs:off_2C79C68
//
// Resolved target: must_journal
// Target address:  0x57FDB0
// GOT/IAT slot:    0x2C79C68
// Slot symbol:     off_2C79C68
// Target type:     <no type info>
// ============================================================

void .must_journal(/* see target signature */)
{
    // Tail-call to must_journal via GOT/IAT indirection
    return must_journal(/* forwarded args */);
}

