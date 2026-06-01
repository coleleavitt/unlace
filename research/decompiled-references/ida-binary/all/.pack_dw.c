// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B50
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B50 jmp     cs:pack_dw_ptr
//
// Resolved target: pack_dw
// Target address:  0x8D37D0
// GOT/IAT slot:    0x89FA48
// Slot symbol:     pack_dw_ptr
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

