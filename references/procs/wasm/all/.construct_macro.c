// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9190
// Name:            .construct_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9190 jmp     cs:off_260B0
//
// Resolved target: construct_macro
// Target address:  0x263C0
// GOT/IAT slot:    0x260B0
// Slot symbol:     off_260B0
// Target type:     <no type info>
// ============================================================

void .construct_macro(/* see target signature */)
{
    // Tail-call to construct_macro via GOT/IAT indirection
    return construct_macro(/* forwarded args */);
}

