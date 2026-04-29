// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6A0
// Name:            .simpleline_place_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6A0 jmp     cs:off_4DAB38
//
// Resolved target: simpleline_place_t__generate
// Target address:  0x4DD540
// GOT/IAT slot:    0x4DAB38
// Slot symbol:     off_4DAB38
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__generate(/* see target signature */)
{
    // Tail-call to simpleline_place_t__generate via GOT/IAT indirection
    return simpleline_place_t__generate(/* forwarded args */);
}

