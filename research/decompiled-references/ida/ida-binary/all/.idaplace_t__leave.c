// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115210
// Name:            .idaplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115210 jmp     cs:idaplace_t__leave_ptr
//
// Resolved target: idaplace_t__leave
// Target address:  0x8D5B40
// GOT/IAT slot:    0x8A15A8
// Slot symbol:     idaplace_t__leave_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__leave(/* see target signature */)
{
    // Tail-call to idaplace_t__leave via GOT/IAT indirection
    return idaplace_t__leave(/* forwarded args */);
}

