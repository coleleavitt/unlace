// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1133A0
// Name:            .zip_deflate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1133A0 jmp     cs:zip_deflate_ptr
//
// Resolved target: zip_deflate
// Target address:  0x8D4790
// GOT/IAT slot:    0x8A0670
// Slot symbol:     zip_deflate_ptr
// Target type:     <no type info>
// ============================================================

void .zip_deflate(/* see target signature */)
{
    // Tail-call to zip_deflate via GOT/IAT indirection
    return zip_deflate(/* forwarded args */);
}

