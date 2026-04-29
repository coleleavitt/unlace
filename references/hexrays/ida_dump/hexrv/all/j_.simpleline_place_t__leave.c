// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37F080
// Name:            j_.simpleline_place_t__leave
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37F080 jmp     _simpleline_place_t__leave
//
// Resolved target: .simpleline_place_t__leave
// Target address:  0x2B4F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.simpleline_place_t__leave(/* see target signature */)
{
    // Tail-call to .simpleline_place_t__leave via direct jump indirection
    return .simpleline_place_t__leave(/* forwarded args */);
}

