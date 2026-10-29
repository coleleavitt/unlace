// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118220
// Name:            .op_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118220 jmp     cs:op_enum_ptr
//
// Resolved target: op_enum
// Target address:  0x8D7960
// GOT/IAT slot:    0x8A2DB0
// Slot symbol:     op_enum_ptr
// Target type:     <no type info>
// ============================================================

void .op_enum(/* see target signature */)
{
    // Tail-call to op_enum via GOT/IAT indirection
    return op_enum(/* forwarded args */);
}

