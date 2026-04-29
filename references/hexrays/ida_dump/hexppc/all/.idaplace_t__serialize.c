// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B410
// Name:            .idaplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B410 jmp     cs:off_4DA9F0
//
// Resolved target: idaplace_t__serialize
// Target address:  0x4DD3F0
// GOT/IAT slot:    0x4DA9F0
// Slot symbol:     off_4DA9F0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__serialize(/* see target signature */)
{
    // Tail-call to idaplace_t__serialize via GOT/IAT indirection
    return idaplace_t__serialize(/* forwarded args */);
}

