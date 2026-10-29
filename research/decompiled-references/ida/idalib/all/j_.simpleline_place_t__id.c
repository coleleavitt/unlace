// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52AE10
// Name:            j_.simpleline_place_t__id
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x52AE10 jmp     _simpleline_place_t__id
//
// Resolved target: .simpleline_place_t__id
// Target address:  0x2A8090
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ j_.simpleline_place_t__id(/* see target signature */)
{
    // Tail-call to .simpleline_place_t__id via direct jump indirection
    return .simpleline_place_t__id(/* forwarded args */);
}

