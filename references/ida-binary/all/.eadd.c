// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1141C0
// Name:            .eadd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1141C0 jmp     cs:eadd_ptr
//
// Resolved target: eadd
// Target address:  0x8D5070
// GOT/IAT slot:    0x8A0D80
// Slot symbol:     eadd_ptr
// Target type:     <no type info>
// ============================================================

void .eadd(/* see target signature */)
{
    // Tail-call to eadd via GOT/IAT indirection
    return eadd(/* forwarded args */);
}

