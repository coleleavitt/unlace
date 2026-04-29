// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3370
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3370 jmp     cs:off_281A0
//
// Resolved target: op_offset_ex
// Target address:  0x28650
// GOT/IAT slot:    0x281A0
// Slot symbol:     off_281A0
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

