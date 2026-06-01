// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC050
// Name:            .simpleline_place_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC050 jmp     cs:off_2C7B810
//
// Resolved target: simpleline_place_t__rebase
// Target address:  0x52AEA0
// GOT/IAT slot:    0x2C7B810
// Slot symbol:     off_2C7B810
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__rebase(/* see target signature */)
{
    // Tail-call to simpleline_place_t__rebase via GOT/IAT indirection
    return simpleline_place_t__rebase(/* forwarded args */);
}

