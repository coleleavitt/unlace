// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A770
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A770 jmp     cs:get_byte_ptr
//
// Resolved target: get_byte
// Target address:  0x8D90F8
// GOT/IAT slot:    0x8A4058
// Slot symbol:     get_byte_ptr
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

