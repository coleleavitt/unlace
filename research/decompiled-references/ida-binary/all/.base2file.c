// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1145C0
// Name:            .base2file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1145C0 jmp     cs:base2file_ptr
//
// Resolved target: base2file
// Target address:  0x8D5320
// GOT/IAT slot:    0x8A0F80
// Slot symbol:     base2file_ptr
// Target type:     <no type info>
// ============================================================

void .base2file(/* see target signature */)
{
    // Tail-call to base2file via GOT/IAT indirection
    return base2file(/* forwarded args */);
}

