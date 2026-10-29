// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8770
// Name:            .zip_deflate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8770 jmp     cs:off_2C79BA0
//
// Resolved target: zip_deflate
// Target address:  0x835D00
// GOT/IAT slot:    0x2C79BA0
// Slot symbol:     off_2C79BA0
// Target type:     <no type info>
// ============================================================

void .zip_deflate(/* see target signature */)
{
    // Tail-call to zip_deflate via GOT/IAT indirection
    return zip_deflate(/* forwarded args */);
}

