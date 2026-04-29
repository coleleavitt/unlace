// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41E0
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41E0 jmp     cs:off_280D8
//
// Resolved target: apply_tinfo
// Target address:  0x29A70
// GOT/IAT slot:    0x280D8
// Slot symbol:     off_280D8
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

