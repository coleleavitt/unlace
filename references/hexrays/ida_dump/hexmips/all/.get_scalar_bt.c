// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBC0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBC0 jmp     cs:off_4CDDC8
//
// Resolved target: get_scalar_bt
// Target address:  0x4D0808
// GOT/IAT slot:    0x4CDDC8
// Slot symbol:     off_4CDDC8
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

