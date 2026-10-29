// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A10
// Name:            .for_all_srclang_parsers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A10 jmp     cs:for_all_srclang_parsers_ptr
//
// Resolved target: for_all_srclang_parsers
// Target address:  0x8D6A30
// GOT/IAT slot:    0x8A21A8
// Slot symbol:     for_all_srclang_parsers_ptr
// Target type:     <no type info>
// ============================================================

void .for_all_srclang_parsers(/* see target signature */)
{
    // Tail-call to for_all_srclang_parsers via GOT/IAT indirection
    return for_all_srclang_parsers(/* forwarded args */);
}

