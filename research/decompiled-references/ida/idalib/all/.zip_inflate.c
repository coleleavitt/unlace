// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA120
// Name:            .zip_inflate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA120 jmp     cs:off_2C7A878
//
// Resolved target: zip_inflate
// Target address:  0x835AE0
// GOT/IAT slot:    0x2C7A878
// Slot symbol:     off_2C7A878
// Target type:     <no type info>
// ============================================================

void .zip_inflate(/* see target signature */)
{
    // Tail-call to zip_inflate via GOT/IAT indirection
    return zip_inflate(/* forwarded args */);
}

