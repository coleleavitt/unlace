// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116110
// Name:            .hexplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116110 jmp     cs:hexplace_t__makeplace_ptr
//
// Resolved target: hexplace_t__makeplace
// Target address:  0x8D6480
// GOT/IAT slot:    0x8A1D28
// Slot symbol:     hexplace_t__makeplace_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__makeplace(/* see target signature */)
{
    // Tail-call to hexplace_t__makeplace via GOT/IAT indirection
    return hexplace_t__makeplace(/* forwarded args */);
}

