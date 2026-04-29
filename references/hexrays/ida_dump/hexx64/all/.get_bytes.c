// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C050
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C050 jmp     cs:off_4ED810
//
// Resolved target: get_bytes
// Target address:  0x4F1B20
// GOT/IAT slot:    0x4ED810
// Slot symbol:     off_4ED810
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

