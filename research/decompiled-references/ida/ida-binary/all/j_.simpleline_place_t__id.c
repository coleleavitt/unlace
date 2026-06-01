// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1B2D40
// Name:            j_.simpleline_place_t__id
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1B2D40 jmp     _simpleline_place_t__id
//
// Resolved target: .simpleline_place_t__id
// Target address:  0x112A20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ j_.simpleline_place_t__id(/* see target signature */)
{
    // Tail-call to .simpleline_place_t__id via direct jump indirection
    return .simpleline_place_t__id(/* forwarded args */);
}

