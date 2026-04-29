// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63B0
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63B0 jmp     cs:off_1D1C0
//
// Resolved target: get_bytes
// Target address:  0x1D6B0
// GOT/IAT slot:    0x1D1C0
// Slot symbol:     off_1D1C0
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

