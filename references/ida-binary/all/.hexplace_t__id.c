// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1146C0
// Name:            .hexplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1146C0 jmp     cs:hexplace_t__id_ptr
//
// Resolved target: hexplace_t__id
// Target address:  0x8D53A8
// GOT/IAT slot:    0x8A1000
// Slot symbol:     hexplace_t__id_ptr
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .hexplace_t__id(/* see target signature */)
{
    // Tail-call to hexplace_t__id via GOT/IAT indirection
    return hexplace_t__id(/* forwarded args */);
}

