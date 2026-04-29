// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DEC0
// Name:            .put_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DEC0 jmp     cs:off_4E9748
//
// Resolved target: put_bytes
// Target address:  0x4EC160
// GOT/IAT slot:    0x4E9748
// Slot symbol:     off_4E9748
// Target type:     <no type info>
// ============================================================

void .put_bytes(/* see target signature */)
{
    // Tail-call to put_bytes via GOT/IAT indirection
    return put_bytes(/* forwarded args */);
}

