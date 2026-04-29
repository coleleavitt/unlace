// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D50
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D50 jmp     cs:off_4B9690
//
// Resolved target: get_strid
// Target address:  0x4BC088
// GOT/IAT slot:    0x4B9690
// Slot symbol:     off_4B9690
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

