// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115A90
// Name:            .del_qatexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115A90 jmp     cs:del_qatexit_ptr
//
// Resolved target: del_qatexit
// Target address:  0x8D6058
// GOT/IAT slot:    0x8A19E8
// Slot symbol:     del_qatexit_ptr
// Target type:     <no type info>
// ============================================================

void .del_qatexit(/* see target signature */)
{
    // Tail-call to del_qatexit via GOT/IAT indirection
    return del_qatexit(/* forwarded args */);
}

