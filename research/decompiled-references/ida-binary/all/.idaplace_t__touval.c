// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B510
// Name:            .idaplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B510 jmp     cs:idaplace_t__touval_ptr
//
// Resolved target: idaplace_t__touval
// Target address:  0x8D9980
// GOT/IAT slot:    0x8A4728
// Slot symbol:     idaplace_t__touval_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__touval(/* see target signature */)
{
    // Tail-call to idaplace_t__touval via GOT/IAT indirection
    return idaplace_t__touval(/* forwarded args */);
}

