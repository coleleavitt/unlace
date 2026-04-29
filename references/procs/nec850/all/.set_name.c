// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9560
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9560 jmp     cs:off_2E298
//
// Resolved target: set_name
// Target address:  0x2E908
// GOT/IAT slot:    0x2E298
// Slot symbol:     off_2E298
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

