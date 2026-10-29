// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A960
// Name:            .simpleline_place_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A960 jmp     cs:simpleline_place_t__deserialize_ptr
//
// Resolved target: simpleline_place_t__deserialize
// Target address:  0x8D9238
// GOT/IAT slot:    0x8A4150
// Slot symbol:     simpleline_place_t__deserialize_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__deserialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__deserialize via GOT/IAT indirection
    return simpleline_place_t__deserialize(/* forwarded args */);
}

