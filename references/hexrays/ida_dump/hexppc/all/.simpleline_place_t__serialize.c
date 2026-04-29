// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A290
// Name:            .simpleline_place_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A290 jmp     cs:off_4DA130
//
// Resolved target: simpleline_place_t__serialize
// Target address:  0x4DCB00
// GOT/IAT slot:    0x4DA130
// Slot symbol:     off_4DA130
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__serialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__serialize via GOT/IAT indirection
    return simpleline_place_t__serialize(/* forwarded args */);
}

