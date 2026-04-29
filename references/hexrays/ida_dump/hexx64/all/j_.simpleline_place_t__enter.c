// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x384310
// Name:            j_.simpleline_place_t__enter
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x384310 jmp     _simpleline_place_t__enter
//
// Resolved target: .simpleline_place_t__enter
// Target address:  0x2D290
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to .simpleline_place_t__enter via direct jump indirection
    return .simpleline_place_t__enter(/* forwarded args */);
}

