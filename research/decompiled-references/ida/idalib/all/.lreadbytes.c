// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD0E0
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD0E0 jmp     cs:off_2C7C058
//
// Resolved target: lreadbytes
// Target address:  0x837AB0
// GOT/IAT slot:    0x2C7C058
// Slot symbol:     off_2C7C058
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

