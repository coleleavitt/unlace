// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF00
// Name:            .put_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF00 jmp     cs:off_4ED768
//
// Resolved target: put_bytes
// Target address:  0x4F1A78
// GOT/IAT slot:    0x4ED768
// Slot symbol:     off_4ED768
// Target type:     <no type info>
// ============================================================

void .put_bytes(/* see target signature */)
{
    // Tail-call to put_bytes via GOT/IAT indirection
    return put_bytes(/* forwarded args */);
}

