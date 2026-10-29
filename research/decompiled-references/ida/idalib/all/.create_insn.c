// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD480
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD480 jmp     cs:off_2C7C228
//
// Resolved target: create_insn
// Target address:  0x5783C0
// GOT/IAT slot:    0x2C7C228
// Slot symbol:     off_2C7C228
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

