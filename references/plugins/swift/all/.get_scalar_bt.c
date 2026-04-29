// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46C0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46C0 jmp     cs:off_28348
//
// Resolved target: get_scalar_bt
// Target address:  0x29CF0
// GOT/IAT slot:    0x28348
// Slot symbol:     off_28348
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

