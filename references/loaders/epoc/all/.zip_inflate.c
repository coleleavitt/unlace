// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32B0
// Name:            .zip_inflate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32B0 jmp     cs:off_13140
//
// Resolved target: zip_inflate
// Target address:  0x13830
// GOT/IAT slot:    0x13140
// Slot symbol:     off_13140
// Target type:     <no type info>
// ============================================================

void .zip_inflate(/* see target signature */)
{
    // Tail-call to zip_inflate via GOT/IAT indirection
    return zip_inflate(/* forwarded args */);
}

