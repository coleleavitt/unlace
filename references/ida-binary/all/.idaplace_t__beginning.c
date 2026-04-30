// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B1A0
// Name:            .idaplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B1A0 jmp     cs:idaplace_t__beginning_ptr
//
// Resolved target: idaplace_t__beginning
// Target address:  0x8D9710
// GOT/IAT slot:    0x8A4570
// Slot symbol:     idaplace_t__beginning_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to idaplace_t__beginning via GOT/IAT indirection
    return idaplace_t__beginning(/* forwarded args */);
}

