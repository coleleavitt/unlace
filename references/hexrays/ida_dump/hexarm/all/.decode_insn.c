// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E600
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E600 jmp     cs:off_4E9AE8
//
// Resolved target: decode_insn
// Target address:  0x4EC510
// GOT/IAT slot:    0x4E9AE8
// Slot symbol:     off_4E9AE8
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

