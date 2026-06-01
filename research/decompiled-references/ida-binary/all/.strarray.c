// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115690
// Name:            .strarray
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115690 jmp     cs:strarray_ptr
//
// Resolved target: strarray
// Target address:  0x8D5DD0
// GOT/IAT slot:    0x8A17E8
// Slot symbol:     strarray_ptr
// Target type:     <no type info>
// ============================================================

void .strarray(/* see target signature */)
{
    // Tail-call to strarray via GOT/IAT indirection
    return strarray(/* forwarded args */);
}

