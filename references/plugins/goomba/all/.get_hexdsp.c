// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4510
// Name:            .get_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4510 jmp     cs:off_4E270
//
// Resolved target: get_hexdsp
// Target address:  0x4F880
// GOT/IAT slot:    0x4E270
// Slot symbol:     off_4E270
// Target type:     <no type info>
// ============================================================

void .get_hexdsp(/* see target signature */)
{
    // Tail-call to get_hexdsp via GOT/IAT indirection
    return get_hexdsp(/* forwarded args */);
}

