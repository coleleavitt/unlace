// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_4038
//
// Resolved target: lreadbytes
// Target address:  0x40D8
// GOT/IAT slot:    0x4038
// Slot symbol:     off_4038
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

