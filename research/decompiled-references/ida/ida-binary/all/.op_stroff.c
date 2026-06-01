// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119370
// Name:            .op_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119370 jmp     cs:op_stroff_ptr
//
// Resolved target: op_stroff
// Target address:  0x8D8400
// GOT/IAT slot:    0x8A3658
// Slot symbol:     op_stroff_ptr
// Target type:     <no type info>
// ============================================================

void .op_stroff(/* see target signature */)
{
    // Tail-call to op_stroff via GOT/IAT indirection
    return op_stroff(/* forwarded args */);
}

