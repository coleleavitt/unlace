// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37CA10
// Name:            j_.simpleline_place_t__enter
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37CA10 jmp     _simpleline_place_t__enter
//
// Resolved target: .simpleline_place_t__enter
// Target address:  0x2B100
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to .simpleline_place_t__enter via direct jump indirection
    return .simpleline_place_t__enter(/* forwarded args */);
}

