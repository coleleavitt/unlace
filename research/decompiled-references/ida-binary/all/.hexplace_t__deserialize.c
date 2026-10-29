// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112290
// Name:            .hexplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112290 jmp     cs:hexplace_t__deserialize_ptr
//
// Resolved target: hexplace_t__deserialize
// Target address:  0x8D3C58
// GOT/IAT slot:    0x89FDE8
// Slot symbol:     hexplace_t__deserialize_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__deserialize(/* see target signature */)
{
    // Tail-call to hexplace_t__deserialize via GOT/IAT indirection
    return hexplace_t__deserialize(/* forwarded args */);
}

