// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1142A0
// Name:            .get_encoding_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1142A0 jmp     cs:get_encoding_qty_ptr
//
// Resolved target: get_encoding_qty
// Target address:  0x8D50F8
// GOT/IAT slot:    0x8A0DF0
// Slot symbol:     get_encoding_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_encoding_qty(/* see target signature */)
{
    // Tail-call to get_encoding_qty via GOT/IAT indirection
    return get_encoding_qty(/* forwarded args */);
}

