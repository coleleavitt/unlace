// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8328
// Name:     set_default_dataseg
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_default_dataseg are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_default_dataseg(/* see import library declaration */);

