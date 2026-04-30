// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118FB0
// Name:            .simpleline_place_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118FB0 jmp     cs:simpleline_place_t__rebase_ptr
//
// Resolved target: simpleline_place_t__rebase
// Target address:  0x8D81A0
// GOT/IAT slot:    0x8A3478
// Slot symbol:     simpleline_place_t__rebase_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__rebase(/* see target signature */)
{
    // Tail-call to simpleline_place_t__rebase via GOT/IAT indirection
    return simpleline_place_t__rebase(/* forwarded args */);
}

