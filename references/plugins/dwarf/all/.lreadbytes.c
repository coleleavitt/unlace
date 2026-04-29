// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC50
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC50 jmp     cs:off_CA610
//
// Resolved target: lreadbytes
// Target address:  0xD0F70
// GOT/IAT slot:    0xCA610
// Slot symbol:     off_CA610
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

