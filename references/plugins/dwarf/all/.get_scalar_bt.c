// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB00
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB00 jmp     cs:off_CA568
//
// Resolved target: get_scalar_bt
// Target address:  0xD0EB8
// GOT/IAT slot:    0xCA568
// Slot symbol:     off_CA568
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

