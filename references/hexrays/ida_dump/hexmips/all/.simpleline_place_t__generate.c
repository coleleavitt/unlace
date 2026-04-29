// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6B0
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6B0 jmp     cs:off_4CDB40
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x4D0568
// GOT/IAT slot:    0x4CDB40
// Slot symbol:     off_4CDB40
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

