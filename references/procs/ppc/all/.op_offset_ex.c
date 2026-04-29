// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20730
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20730 jmp     cs:off_95380
//
// Resolved target: op_offset_ex
// Target address:  0x95DB8
// GOT/IAT slot:    0x95380
// Slot symbol:     off_95380
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

