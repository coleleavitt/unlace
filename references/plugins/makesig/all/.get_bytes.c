// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3310
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3310 jmp     cs:off_20170
//
// Resolved target: get_bytes
// Target address:  0x21A80
// GOT/IAT slot:    0x20170
// Slot symbol:     off_20170
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

