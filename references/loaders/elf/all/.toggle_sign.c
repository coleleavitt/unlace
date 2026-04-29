// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9190
// Name:            .toggle_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9190 jmp     cs:off_890B0
//
// Resolved target: toggle_sign
// Target address:  0x8C3B0
// GOT/IAT slot:    0x890B0
// Slot symbol:     off_890B0
// Target type:     <no type info>
// ============================================================

void .toggle_sign(/* see target signature */)
{
    // Tail-call to toggle_sign via GOT/IAT indirection
    return toggle_sign(/* forwarded args */);
}

