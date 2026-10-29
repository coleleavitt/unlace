// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A60
// Name:            .idaplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A60 jmp     cs:idaplace_t__deserialize_ptr
//
// Resolved target: idaplace_t__deserialize
// Target address:  0x8D4BC8
// GOT/IAT slot:    0x8A09D0
// Slot symbol:     idaplace_t__deserialize_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to idaplace_t__deserialize via GOT/IAT indirection
    return idaplace_t__deserialize(/* forwarded args */);
}

