// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E000
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E000 jmp     cs:off_4E97E8
//
// Resolved target: get_bytes
// Target address:  0x4EC200
// GOT/IAT slot:    0x4E97E8
// Slot symbol:     off_4E97E8
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

