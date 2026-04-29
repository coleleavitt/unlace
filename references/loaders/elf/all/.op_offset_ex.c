// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9500
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9500 jmp     cs:off_89268
//
// Resolved target: op_offset_ex
// Target address:  0x8C570
// GOT/IAT slot:    0x89268
// Slot symbol:     off_89268
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

