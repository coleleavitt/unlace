// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4C3560
// Name:     set_dummy_name
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_dummy_name are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_dummy_name(/* see import library declaration */);

