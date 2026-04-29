// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191A0
// Name:            .toggle_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191A0 jmp     cs:off_750B8
//
// Resolved target: toggle_sign
// Target address:  0x75908
// GOT/IAT slot:    0x750B8
// Slot symbol:     off_750B8
// Target type:     <no type info>
// ============================================================

void .toggle_sign(/* see target signature */)
{
    // Tail-call to toggle_sign via GOT/IAT indirection
    return toggle_sign(/* forwarded args */);
}

