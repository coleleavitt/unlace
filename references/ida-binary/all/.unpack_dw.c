// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112590
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112590 jmp     cs:unpack_dw_ptr
//
// Resolved target: unpack_dw
// Target address:  0x8D3E68
// GOT/IAT slot:    0x89FF68
// Slot symbol:     unpack_dw_ptr
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

