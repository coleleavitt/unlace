// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEA0
// Name:            .put_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEA0 jmp     cs:off_4BF738
//
// Resolved target: put_bytes
// Target address:  0x4C2C28
// GOT/IAT slot:    0x4BF738
// Slot symbol:     off_4BF738
// Target type:     <no type info>
// ============================================================

void .put_bytes(/* see target signature */)
{
    // Tail-call to put_bytes via GOT/IAT indirection
    return put_bytes(/* forwarded args */);
}

