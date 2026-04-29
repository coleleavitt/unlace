// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6450
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6450 jmp     cs:off_1D210
//
// Resolved target: get_default_reftype
// Target address:  0x1D700
// GOT/IAT slot:    0x1D210
// Slot symbol:     off_1D210
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

