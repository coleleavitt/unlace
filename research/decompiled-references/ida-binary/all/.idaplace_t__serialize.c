// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114360
// Name:            .idaplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114360 jmp     cs:idaplace_t__serialize_ptr
//
// Resolved target: idaplace_t__serialize
// Target address:  0x8D5180
// GOT/IAT slot:    0x8A0E50
// Slot symbol:     idaplace_t__serialize_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__serialize(/* see target signature */)
{
    // Tail-call to idaplace_t__serialize via GOT/IAT indirection
    return idaplace_t__serialize(/* forwarded args */);
}

