// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B20
// Name:            .prev_visea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B20 jmp     cs:prev_visea_ptr
//
// Resolved target: prev_visea
// Target address:  0x8D74E0
// GOT/IAT slot:    0x8A2A30
// Slot symbol:     prev_visea_ptr
// Target type:     <no type info>
// ============================================================

void .prev_visea(/* see target signature */)
{
    // Tail-call to prev_visea via GOT/IAT indirection
    return prev_visea(/* forwarded args */);
}

