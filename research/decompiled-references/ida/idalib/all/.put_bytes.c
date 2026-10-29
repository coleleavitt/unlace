// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB90
// Name:            .put_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB90 jmp     cs:off_2C7B5B0
//
// Resolved target: put_bytes
// Target address:  0x3D43A0
// GOT/IAT slot:    0x2C7B5B0
// Slot symbol:     off_2C7B5B0
// Target type:     <no type info>
// ============================================================

void .put_bytes(/* see target signature */)
{
    // Tail-call to put_bytes via GOT/IAT indirection
    return put_bytes(/* forwarded args */);
}

