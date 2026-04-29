// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9380
// Name:            .construct_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9380 jmp     cs:off_2E1A8
//
// Resolved target: construct_macro
// Target address:  0x2E818
// GOT/IAT slot:    0x2E1A8
// Slot symbol:     off_2E1A8
// Target type:     <no type info>
// ============================================================

void .construct_macro(/* see target signature */)
{
    // Tail-call to construct_macro via GOT/IAT indirection
    return construct_macro(/* forwarded args */);
}

