// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B30
// Name:            .idaplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B30 jmp     cs:idaplace_t__adjust_ptr
//
// Resolved target: idaplace_t__adjust
// Target address:  0x8D56E0
// GOT/IAT slot:    0x8A1238
// Slot symbol:     idaplace_t__adjust_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to idaplace_t__adjust via GOT/IAT indirection
    return idaplace_t__adjust(/* forwarded args */);
}

