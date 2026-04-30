// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D50
// Name:            .extend_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D50 jmp     cs:extend_sign_ptr
//
// Resolved target: extend_sign
// Target address:  0x8D4360
// GOT/IAT slot:    0x8A0348
// Slot symbol:     extend_sign_ptr
// Target type:     <no type info>
// ============================================================

void .extend_sign(/* see target signature */)
{
    // Tail-call to extend_sign via GOT/IAT indirection
    return extend_sign(/* forwarded args */);
}

