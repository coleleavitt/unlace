// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118080
// Name:            .qregerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118080 jmp     cs:qregerror_ptr
//
// Resolved target: qregerror
// Target address:  0x8D7870
// GOT/IAT slot:    0x8A2CE0
// Slot symbol:     qregerror_ptr
// Target type:     <no type info>
// ============================================================

void .qregerror(/* see target signature */)
{
    // Tail-call to qregerror via GOT/IAT indirection
    return qregerror(/* forwarded args */);
}

