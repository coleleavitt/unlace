// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA250
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA250 jmp     cs:off_CA110
//
// Resolved target: apply_tinfo
// Target address:  0xD0A40
// GOT/IAT slot:    0xCA110
// Slot symbol:     off_CA110
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

