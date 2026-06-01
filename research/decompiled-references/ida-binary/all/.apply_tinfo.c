// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F90
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F90 jmp     cs:apply_tinfo_ptr
//
// Resolved target: apply_tinfo
// Target address:  0x8D44D8
// GOT/IAT slot:    0x8A0468
// Slot symbol:     apply_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

