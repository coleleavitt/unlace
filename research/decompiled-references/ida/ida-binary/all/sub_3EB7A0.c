void __fastcall xref_editor_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi

  *a1 = xref_editor_t___vtable;
  a1[23] = &xref_editor_t___vtable_at__184;
  v3 = a1[32];
  if ( v3 )
  {
    a1[33] = 0;
    qfree(v3, a2);
  }
  v4 = a1[29];
  if ( v4 )
  {
    a1[30] = 0;
    qfree(v4, a2);
  }
  v5 = a1 + 19;
  v6 = a1 + 7;
  v6[16] = (__int64)&xref_chooser_t___vtable_at__184;
  *(v6 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      qfree(v7, a2);
    }
    v5 -= 3;
  }
  while ( v5 != v6 );
}
