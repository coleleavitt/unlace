// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E450
// Name:            .idaplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E450 jmp     cs:off_4E9A10
//
// Resolved target: idaplace_t__serialize
// Target address:  0x4EC430
// GOT/IAT slot:    0x4E9A10
// Slot symbol:     off_4E9A10
// Target type:     <no type info>
// ============================================================

void .idaplace_t__serialize(/* see target signature */)
{
    // Tail-call to idaplace_t__serialize via GOT/IAT indirection
    return idaplace_t__serialize(/* forwarded args */);
}

