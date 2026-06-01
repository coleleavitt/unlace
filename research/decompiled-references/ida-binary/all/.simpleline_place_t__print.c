// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117BB0
// Name:            .simpleline_place_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117BB0 jmp     cs:simpleline_place_t__print_ptr
//
// Resolved target: simpleline_place_t__print
// Target address:  0x8D7540
// GOT/IAT slot:    0x8A2A78
// Slot symbol:     simpleline_place_t__print_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__print(/* see target signature */)
{
    // Tail-call to simpleline_place_t__print via GOT/IAT indirection
    return simpleline_place_t__print(/* forwarded args */);
}

