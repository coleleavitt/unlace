// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73B0
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73B0 jmp     cs:off_191C0
//
// Resolved target: op_offset_ex
// Target address:  0x196F0
// GOT/IAT slot:    0x191C0
// Slot symbol:     off_191C0
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

