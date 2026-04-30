// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115240
// Name:            .hexplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115240 jmp     cs:hexplace_t__copyfrom_ptr
//
// Resolved target: hexplace_t__copyfrom
// Target address:  0x8D5B60
// GOT/IAT slot:    0x8A15C0
// Slot symbol:     hexplace_t__copyfrom_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to hexplace_t__copyfrom via GOT/IAT indirection
    return hexplace_t__copyfrom(/* forwarded args */);
}

