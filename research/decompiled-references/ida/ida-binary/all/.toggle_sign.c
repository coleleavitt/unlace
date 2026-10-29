// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C20
// Name:            .toggle_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C20 jmp     cs:toggle_sign_ptr
//
// Resolved target: toggle_sign
// Target address:  0x8D4280
// GOT/IAT slot:    0x8A02B0
// Slot symbol:     toggle_sign_ptr
// Target type:     <no type info>
// ============================================================

void .toggle_sign(/* see target signature */)
{
    // Tail-call to toggle_sign via GOT/IAT indirection
    return toggle_sign(/* forwarded args */);
}

