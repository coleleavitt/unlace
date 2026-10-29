// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB1A0
// Name:            .get_first_free_extra_cmtidx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB1A0 jmp     cs:off_2C7B0B8
//
// Resolved target: get_first_free_extra_cmtidx
// Target address:  0x63D650
// GOT/IAT slot:    0x2C7B0B8
// Slot symbol:     off_2C7B0B8
// Target type:     <no type info>
// ============================================================

void .get_first_free_extra_cmtidx(/* see target signature */)
{
    // Tail-call to get_first_free_extra_cmtidx via GOT/IAT indirection
    return get_first_free_extra_cmtidx(/* forwarded args */);
}

