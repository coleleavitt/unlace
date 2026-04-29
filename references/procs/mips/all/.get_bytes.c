// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19650
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19650 jmp     cs:off_75310
//
// Resolved target: get_bytes
// Target address:  0x75B60
// GOT/IAT slot:    0x75310
// Slot symbol:     off_75310
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

