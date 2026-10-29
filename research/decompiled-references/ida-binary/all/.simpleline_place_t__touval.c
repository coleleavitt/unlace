// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1117C0
// Name:            .simpleline_place_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1117C0 jmp     cs:simpleline_place_t__touval_ptr
//
// Resolved target: simpleline_place_t__touval
// Target address:  0x8D35A8
// GOT/IAT slot:    0x89F880
// Slot symbol:     simpleline_place_t__touval_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__touval(/* see target signature */)
{
    // Tail-call to simpleline_place_t__touval via GOT/IAT indirection
    return simpleline_place_t__touval(/* forwarded args */);
}

