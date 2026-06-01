// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D70
// Name:            .zip_inflate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D70 jmp     cs:zip_inflate_ptr
//
// Resolved target: zip_inflate
// Target address:  0x8D6220
// GOT/IAT slot:    0x8A1B58
// Slot symbol:     zip_inflate_ptr
// Target type:     <no type info>
// ============================================================

void .zip_inflate(/* see target signature */)
{
    // Tail-call to zip_inflate via GOT/IAT indirection
    return zip_inflate(/* forwarded args */);
}

