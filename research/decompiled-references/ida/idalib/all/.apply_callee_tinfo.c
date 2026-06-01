// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC8E0
// Name:            .apply_callee_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC8E0 jmp     cs:off_2C7BC58
//
// Resolved target: apply_callee_tinfo
// Target address:  0x611260
// GOT/IAT slot:    0x2C7BC58
// Slot symbol:     off_2C7BC58
// Target type:     <no type info>
// ============================================================

void .apply_callee_tinfo(/* see target signature */)
{
    // Tail-call to apply_callee_tinfo via GOT/IAT indirection
    return apply_callee_tinfo(/* forwarded args */);
}

