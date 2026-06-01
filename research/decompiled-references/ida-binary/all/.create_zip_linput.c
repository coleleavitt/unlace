// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1172E0
// Name:            .create_zip_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1172E0 jmp     cs:create_zip_linput_ptr
//
// Resolved target: create_zip_linput
// Target address:  0x8D6FB8
// GOT/IAT slot:    0x8A2610
// Slot symbol:     create_zip_linput_ptr
// Target type:     <no type info>
// ============================================================

void .create_zip_linput(/* see target signature */)
{
    // Tail-call to create_zip_linput via GOT/IAT indirection
    return create_zip_linput(/* forwarded args */);
}

