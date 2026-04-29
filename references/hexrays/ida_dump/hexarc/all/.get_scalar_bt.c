// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB90
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB90 jmp     cs:off_4B9DB0
//
// Resolved target: get_scalar_bt
// Target address:  0x4BC7D0
// GOT/IAT slot:    0x4B9DB0
// Slot symbol:     off_4B9DB0
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

