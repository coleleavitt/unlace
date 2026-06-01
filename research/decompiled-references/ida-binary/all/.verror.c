// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1184C0
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1184C0 jmp     cs:verror_ptr
//
// Resolved target: verror
// Target address:  0x8D7AF8
// GOT/IAT slot:    0x8A2F00
// Slot symbol:     verror_ptr
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

