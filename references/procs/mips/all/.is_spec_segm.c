// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19300
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19300 jmp     cs:off_75168
//
// Resolved target: is_spec_segm
// Target address:  0x759B8
// GOT/IAT slot:    0x75168
// Slot symbol:     off_75168
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

