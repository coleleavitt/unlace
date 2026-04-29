// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D660
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D660 jmp     cs:off_4E9318
//
// Resolved target: apply_tinfo
// Target address:  0x4EBD08
// GOT/IAT slot:    0x4E9318
// Slot symbol:     off_4E9318
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

