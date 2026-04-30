// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1139E0
// Name:            .simpleline_place_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1139E0 jmp     cs:simpleline_place_t__leave_ptr
//
// Resolved target: simpleline_place_t__leave
// Target address:  0x8D4B80
// GOT/IAT slot:    0x8A0990
// Slot symbol:     simpleline_place_t__leave_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__leave(/* see target signature */)
{
    // Tail-call to simpleline_place_t__leave via GOT/IAT indirection
    return simpleline_place_t__leave(/* forwarded args */);
}

