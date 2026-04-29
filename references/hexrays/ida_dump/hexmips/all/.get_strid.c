// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD50
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD50 jmp     cs:off_4CD690
//
// Resolved target: get_strid
// Target address:  0x4D00A8
// GOT/IAT slot:    0x4CD690
// Slot symbol:     off_4CD690
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

