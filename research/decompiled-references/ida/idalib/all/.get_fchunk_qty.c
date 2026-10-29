// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD2B0
// Name:            .get_fchunk_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD2B0 jmp     cs:off_2C7C140
//
// Resolved target: get_fchunk_qty
// Target address:  0x5C70C0
// GOT/IAT slot:    0x2C7C140
// Slot symbol:     off_2C7C140
// Target type:     <no type info>
// ============================================================

void .get_fchunk_qty(/* see target signature */)
{
    // Tail-call to get_fchunk_qty via GOT/IAT indirection
    return get_fchunk_qty(/* forwarded args */);
}

