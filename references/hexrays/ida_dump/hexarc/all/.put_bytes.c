// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29EA0
// Name:            .put_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29EA0 jmp     cs:off_4B9738
//
// Resolved target: put_bytes
// Target address:  0x4BC130
// GOT/IAT slot:    0x4B9738
// Slot symbol:     off_4B9738
// Target type:     <no type info>
// ============================================================

void .put_bytes(/* see target signature */)
{
    // Tail-call to put_bytes via GOT/IAT indirection
    return put_bytes(/* forwarded args */);
}

