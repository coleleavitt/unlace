// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113DD0
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113DD0 jmp     cs:op_offset_ex_ptr
//
// Resolved target: op_offset_ex
// Target address:  0x8D4E08
// GOT/IAT slot:    0x8A0B88
// Slot symbol:     op_offset_ex_ptr
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

