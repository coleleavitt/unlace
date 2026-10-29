void __fastcall edit_func_dialog_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &edit_func_dialog_t___vtable;
  v3 = a1[49];
  if ( v3 )
  {
    a1[50] = 0;
    qfree(v3, a2);
  }
  v4 = a1[46];
  if ( v4 )
  {
    a1[47] = 0;
    qfree(v4, a2);
  }
  v5 = a1[41];
  if ( v5 )
  {
    a1[42] = 0;
    qfree(v5, a2);
  }
  v6 = a1[38];
  if ( v6 )
  {
    a1[39] = 0;
    qfree(v6, a2);
  }
  clear_tinfo_t(a1 + 37);
  clear_tinfo_t(a1 + 36);
  v7 = a1[33];
  if ( v7 )
  {
    a1[34] = 0;
    qfree(v7, a2);
  }
  forms::dialog_desc_t__::vfunc_0(a1, a2);
  operator delete(a1, 0x1A8u);
}
