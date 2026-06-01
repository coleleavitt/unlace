// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113EE0
// Name:            .simpleline_place_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113EE0 jmp     cs:simpleline_place_t__copyfrom_ptr
//
// Resolved target: simpleline_place_t__copyfrom
// Target address:  0x8D4EC8
// GOT/IAT slot:    0x8A0C10
// Slot symbol:     simpleline_place_t__copyfrom_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__copyfrom(/* see target signature */)
{
    // Tail-call to simpleline_place_t__copyfrom via GOT/IAT indirection
    return simpleline_place_t__copyfrom(/* forwarded args */);
}

