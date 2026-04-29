// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE00
// Name:            .idaplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE00 jmp     cs:off_4B9EE8
//
// Resolved target: idaplace_t__deserialize
// Target address:  0x4BC918
// GOT/IAT slot:    0x4B9EE8
// Slot symbol:     off_4B9EE8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to idaplace_t__deserialize via GOT/IAT indirection
    return idaplace_t__deserialize(/* forwarded args */);
}

