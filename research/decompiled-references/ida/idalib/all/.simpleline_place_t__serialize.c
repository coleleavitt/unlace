// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B20
// Name:            .simpleline_place_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B20 jmp     cs:off_2C79D78
//
// Resolved target: simpleline_place_t__serialize
// Target address:  0x52AB60
// GOT/IAT slot:    0x2C79D78
// Slot symbol:     off_2C79D78
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__serialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__serialize via GOT/IAT indirection
    return simpleline_place_t__serialize(/* forwarded args */);
}

