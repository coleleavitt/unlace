// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A82F0
// Name:            .extend_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A82F0 jmp     cs:off_2C79960
//
// Resolved target: extend_sign
// Target address:  0x8269F0
// GOT/IAT slot:    0x2C79960
// Slot symbol:     off_2C79960
// Target type:     <no type info>
// ============================================================

void .extend_sign(/* see target signature */)
{
    // Tail-call to extend_sign via GOT/IAT indirection
    return extend_sign(/* forwarded args */);
}

