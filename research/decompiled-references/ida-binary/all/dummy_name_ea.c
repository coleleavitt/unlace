// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8D5530
// Name:     dummy_name_ea
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to dummy_name_ea are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void dummy_name_ea(/* see import library declaration */);

