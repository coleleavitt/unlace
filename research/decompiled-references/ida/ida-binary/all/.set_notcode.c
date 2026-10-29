// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1155E0
// Name:            .set_notcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1155E0 jmp     cs:set_notcode_ptr
//
// Resolved target: set_notcode
// Target address:  0x8D5D78
// GOT/IAT slot:    0x8A1790
// Slot symbol:     set_notcode_ptr
// Target type:     <no type info>
// ============================================================

void .set_notcode(/* see target signature */)
{
    // Tail-call to set_notcode via GOT/IAT indirection
    return set_notcode(/* forwarded args */);
}

