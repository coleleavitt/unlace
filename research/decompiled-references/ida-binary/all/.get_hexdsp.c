// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113610
// Name:            .get_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113610 jmp     cs:get_hexdsp_ptr
//
// Resolved target: get_hexdsp
// Target address:  0x8D4908
// GOT/IAT slot:    0x8A07A8
// Slot symbol:     get_hexdsp_ptr
// Target type:     <no type info>
// ============================================================

void .get_hexdsp(/* see target signature */)
{
    // Tail-call to get_hexdsp via GOT/IAT indirection
    return get_hexdsp(/* forwarded args */);
}

