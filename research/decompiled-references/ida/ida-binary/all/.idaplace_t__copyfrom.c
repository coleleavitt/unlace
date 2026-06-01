// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115820
// Name:            .idaplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115820 jmp     cs:idaplace_t__copyfrom_ptr
//
// Resolved target: idaplace_t__copyfrom
// Target address:  0x8D5EC0
// GOT/IAT slot:    0x8A18B0
// Slot symbol:     idaplace_t__copyfrom_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to idaplace_t__copyfrom via GOT/IAT indirection
    return idaplace_t__copyfrom(/* forwarded args */);
}

