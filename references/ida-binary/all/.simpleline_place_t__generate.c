// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114DF0
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114DF0 jmp     cs:simpleline_place_t__generate_ptr
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x8D5898
// GOT/IAT slot:    0x8A1398
// Slot symbol:     simpleline_place_t__generate_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

