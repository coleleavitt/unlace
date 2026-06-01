// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB20
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB20 jmp     cs:off_2C7BD78
//
// Resolved target: dstr_tinfo
// Target address:  0x66BFD0
// GOT/IAT slot:    0x2C7BD78
// Slot symbol:     off_2C7BD78
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

