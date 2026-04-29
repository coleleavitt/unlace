// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194F0
// Name:            .construct_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194F0 jmp     cs:off_75260
//
// Resolved target: construct_macro
// Target address:  0x75AB0
// GOT/IAT slot:    0x75260
// Slot symbol:     off_75260
// Target type:     <no type info>
// ============================================================

void .construct_macro(/* see target signature */)
{
    // Tail-call to construct_macro via GOT/IAT indirection
    return construct_macro(/* forwarded args */);
}

