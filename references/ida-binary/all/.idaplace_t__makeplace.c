// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B760
// Name:            .idaplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B760 jmp     cs:idaplace_t__makeplace_ptr
//
// Resolved target: idaplace_t__makeplace
// Target address:  0x8D9AE8
// GOT/IAT slot:    0x8A4850
// Slot symbol:     idaplace_t__makeplace_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__makeplace(/* see target signature */)
{
    // Tail-call to idaplace_t__makeplace via GOT/IAT indirection
    return idaplace_t__makeplace(/* forwarded args */);
}

