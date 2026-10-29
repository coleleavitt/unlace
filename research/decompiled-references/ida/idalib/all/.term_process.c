// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8910
// Name:            .term_process
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8910 jmp     cs:off_2C79C70
//
// Resolved target: term_process
// Target address:  0x843550
// GOT/IAT slot:    0x2C79C70
// Slot symbol:     off_2C79C70
// Target type:     <no type info>
// ============================================================

void .term_process(/* see target signature */)
{
    // Tail-call to term_process via GOT/IAT indirection
    return term_process(/* forwarded args */);
}

