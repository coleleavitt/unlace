// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1135F0
// Name:            .must_journal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1135F0 jmp     cs:must_journal_ptr
//
// Resolved target: must_journal
// Target address:  0x8D48F8
// GOT/IAT slot:    0x8A0798
// Slot symbol:     must_journal_ptr
// Target type:     <no type info>
// ============================================================

void .must_journal(/* see target signature */)
{
    // Tail-call to must_journal via GOT/IAT indirection
    return must_journal(/* forwarded args */);
}

