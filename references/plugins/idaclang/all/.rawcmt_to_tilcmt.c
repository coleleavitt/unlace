// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .rawcmt_to_tilcmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_29188
//
// Resolved target: rawcmt_to_tilcmt
// Target address:  0x29538
// GOT/IAT slot:    0x29188
// Slot symbol:     off_29188
// Target type:     <no type info>
// ============================================================

void .rawcmt_to_tilcmt(/* see target signature */)
{
    // Tail-call to rawcmt_to_tilcmt via GOT/IAT indirection
    return rawcmt_to_tilcmt(/* forwarded args */);
}

