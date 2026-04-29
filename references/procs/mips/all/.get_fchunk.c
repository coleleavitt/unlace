// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A40
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A40 jmp     cs:off_75508
//
// Resolved target: get_fchunk
// Target address:  0x75D60
// GOT/IAT slot:    0x75508
// Slot symbol:     off_75508
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

