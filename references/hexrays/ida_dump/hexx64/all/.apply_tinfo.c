// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B670
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B670 jmp     cs:off_4ED320
//
// Resolved target: apply_tinfo
// Target address:  0x4F1618
// GOT/IAT slot:    0x4ED320
// Slot symbol:     off_4ED320
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

