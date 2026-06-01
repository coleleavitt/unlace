// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114AB0
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114AB0 jmp     cs:asctoreal_ptr
//
// Resolved target: asctoreal
// Target address:  0x8D5688
// GOT/IAT slot:    0x8A11F8
// Slot symbol:     asctoreal_ptr
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

