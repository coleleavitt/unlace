// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112720
// Name:            .is_custfmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112720 jmp     cs:is_custfmt_ptr
//
// Resolved target: is_custfmt
// Target address:  0x8D3F78
// GOT/IAT slot:    0x8A0030
// Slot symbol:     is_custfmt_ptr
// Target type:     <no type info>
// ============================================================

void .is_custfmt(/* see target signature */)
{
    // Tail-call to is_custfmt via GOT/IAT indirection
    return is_custfmt(/* forwarded args */);
}

