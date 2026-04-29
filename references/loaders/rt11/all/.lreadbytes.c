// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1240
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1240 jmp     cs:off_5108
//
// Resolved target: lreadbytes
// Target address:  0x5298
// GOT/IAT slot:    0x5108
// Slot symbol:     off_5108
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

