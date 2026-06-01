// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB740
// Name:            .op_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB740 jmp     cs:off_2C7B388
//
// Resolved target: op_enum
// Target address:  0x413E00
// GOT/IAT slot:    0x2C7B388
// Slot symbol:     off_2C7B388
// Target type:     <no type info>
// ============================================================

void .op_enum(/* see target signature */)
{
    // Tail-call to op_enum via GOT/IAT indirection
    return op_enum(/* forwarded args */);
}

