// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8420
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8420 jmp     cs:off_2A1F8
//
// Resolved target: op_offset_ex
// Target address:  0x2BC08
// GOT/IAT slot:    0x2A1F8
// Slot symbol:     off_2A1F8
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

