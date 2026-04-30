// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A100
// Name:            .b2a_width
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A100 jmp     cs:b2a_width_ptr
//
// Resolved target: b2a_width
// Target address:  0x8D8CC8
// GOT/IAT slot:    0x8A3D20
// Slot symbol:     b2a_width_ptr
// Target type:     <no type info>
// ============================================================

void .b2a_width(/* see target signature */)
{
    // Tail-call to b2a_width via GOT/IAT indirection
    return b2a_width(/* forwarded args */);
}

