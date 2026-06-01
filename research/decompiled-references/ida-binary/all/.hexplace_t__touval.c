// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116000
// Name:            .hexplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116000 jmp     cs:hexplace_t__touval_ptr
//
// Resolved target: hexplace_t__touval
// Target address:  0x8D63E0
// GOT/IAT slot:    0x8A1CA0
// Slot symbol:     hexplace_t__touval_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__touval(/* see target signature */)
{
    // Tail-call to hexplace_t__touval via GOT/IAT indirection
    return hexplace_t__touval(/* forwarded args */);
}

