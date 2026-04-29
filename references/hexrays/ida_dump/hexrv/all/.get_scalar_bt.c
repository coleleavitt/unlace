// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBB0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBB0 jmp     cs:off_4BFDC0
//
// Resolved target: get_scalar_bt
// Target address:  0x4C32D8
// GOT/IAT slot:    0x4BFDC0
// Slot symbol:     off_4BFDC0
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

