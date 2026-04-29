// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_29078
//
// Resolved target: apply_tinfo
// Target address:  0x29428
// GOT/IAT slot:    0x29078
// Slot symbol:     off_29078
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

