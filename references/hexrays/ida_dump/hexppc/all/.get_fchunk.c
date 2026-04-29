// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B940
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B940 jmp     cs:off_4DAC88
//
// Resolved target: get_fchunk
// Target address:  0x4DD6A0
// GOT/IAT slot:    0x4DAC88
// Slot symbol:     off_4DAC88
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

