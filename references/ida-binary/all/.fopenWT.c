// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1157B0
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1157B0 jmp     cs:fopenWT_ptr
//
// Resolved target: fopenWT
// Target address:  0x8D5E80
// GOT/IAT slot:    0x8A1878
// Slot symbol:     fopenWT_ptr
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

