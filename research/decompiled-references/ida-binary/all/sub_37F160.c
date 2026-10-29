void __fastcall signatures_dialog_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &tos_dialog_t___vtable;
  v3 = a1[32];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[42];
  if ( v4 )
  {
    a1[43] = 0;
    qfree(v4, a2);
  }
  v5 = a1[39];
  if ( v5 )
  {
    a1[40] = 0;
    qfree(v5, a2);
  }
  v6 = a1[36];
  if ( v6 )
  {
    a1[37] = 0;
    qfree(v6, a2);
  }
  v7 = a1[33];
  if ( v7 )
  {
    a1[34] = 0;
    qfree(v7, a2);
  }
  forms::dialog_desc_t__::vfunc_0(a1, a2);
  operator delete(a1, 0x168u);
}
