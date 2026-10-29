// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A20
// Name:            .simpleline_place_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A20 jmp     cs:simpleline_place_t__id_ptr
//
// Resolved target: simpleline_place_t__id
// Target address:  0x8D4138
// GOT/IAT slot:    0x8A01B0
// Slot symbol:     simpleline_place_t__id_ptr
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .simpleline_place_t__id(/* see target signature */)
{
    // Tail-call to simpleline_place_t__id via GOT/IAT indirection
    return simpleline_place_t__id(/* forwarded args */);
}

