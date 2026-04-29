// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29FD0
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29FD0 jmp     cs:off_4B97D0
//
// Resolved target: get_bytes
// Target address:  0x4BC1C8
// GOT/IAT slot:    0x4B97D0
// Slot symbol:     off_4B97D0
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

