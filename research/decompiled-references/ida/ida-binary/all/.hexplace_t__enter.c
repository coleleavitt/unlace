// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116480
// Name:            .hexplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116480 jmp     cs:hexplace_t__enter_ptr
//
// Resolved target: hexplace_t__enter
// Target address:  0x8D6698
// GOT/IAT slot:    0x8A1EE0
// Slot symbol:     hexplace_t__enter_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__enter(/* see target signature */)
{
    // Tail-call to hexplace_t__enter via GOT/IAT indirection
    return hexplace_t__enter(/* forwarded args */);
}

