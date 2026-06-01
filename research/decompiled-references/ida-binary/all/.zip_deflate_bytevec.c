// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113410
// Name:            .zip_deflate_bytevec
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113410 jmp     cs:zip_deflate_bytevec_ptr
//
// Resolved target: zip_deflate_bytevec
// Target address:  0x8D47D0
// GOT/IAT slot:    0x8A06A8
// Slot symbol:     zip_deflate_bytevec_ptr
// Target type:     <no type info>
// ============================================================

void .zip_deflate_bytevec(/* see target signature */)
{
    // Tail-call to zip_deflate_bytevec via GOT/IAT indirection
    return zip_deflate_bytevec(/* forwarded args */);
}

