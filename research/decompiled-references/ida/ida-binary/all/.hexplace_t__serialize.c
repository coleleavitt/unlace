// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B60
// Name:            .hexplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B60 jmp     cs:hexplace_t__serialize_ptr
//
// Resolved target: hexplace_t__serialize
// Target address:  0x8D8920
// GOT/IAT slot:    0x8A3A50
// Slot symbol:     hexplace_t__serialize_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__serialize(/* see target signature */)
{
    // Tail-call to hexplace_t__serialize via GOT/IAT indirection
    return hexplace_t__serialize(/* forwarded args */);
}

