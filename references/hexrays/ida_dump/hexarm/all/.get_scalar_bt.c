// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EBF0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EBF0 jmp     cs:off_4E9DE0
//
// Resolved target: get_scalar_bt
// Target address:  0x4EC820
// GOT/IAT slot:    0x4E9DE0
// Slot symbol:     off_4E9DE0
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

