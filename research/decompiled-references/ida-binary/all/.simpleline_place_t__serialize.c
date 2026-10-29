// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1139D0
// Name:            .simpleline_place_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1139D0 jmp     cs:simpleline_place_t__serialize_ptr
//
// Resolved target: simpleline_place_t__serialize
// Target address:  0x8D4B78
// GOT/IAT slot:    0x8A0988
// Slot symbol:     simpleline_place_t__serialize_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__serialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__serialize via GOT/IAT indirection
    return simpleline_place_t__serialize(/* forwarded args */);
}

