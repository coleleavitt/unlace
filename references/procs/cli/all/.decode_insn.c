// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3270
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3270 jmp     cs:off_1A120
//
// Resolved target: decode_insn
// Target address:  0x1A3D8
// GOT/IAT slot:    0x1A120
// Slot symbol:     off_1A120
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

