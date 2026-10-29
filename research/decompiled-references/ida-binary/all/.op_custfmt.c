// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112800
// Name:            .op_custfmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112800 jmp     cs:op_custfmt_ptr
//
// Resolved target: op_custfmt
// Target address:  0x8D4000
// GOT/IAT slot:    0x8A00A0
// Slot symbol:     op_custfmt_ptr
// Target type:     <no type info>
// ============================================================

void .op_custfmt(/* see target signature */)
{
    // Tail-call to op_custfmt via GOT/IAT indirection
    return op_custfmt(/* forwarded args */);
}

