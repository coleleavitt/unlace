// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43A0
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43A0 jmp     cs:off_281B8
//
// Resolved target: get_strid
// Target address:  0x29B50
// GOT/IAT slot:    0x281B8
// Slot symbol:     off_281B8
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

