__int64 __fastcall shortcutlist_chooser_t__::vfunc_1(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rdi

  *a1 = shortcutlist_chooser_t___vtable;
  v6 = a1[30];
  if ( v6 )
  {
    a1[31] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
  v7 = a1[27];
  if ( v7 )
  {
    a1[28] = 0;
    qfree(v7, a2, a3, a4, a5);
  }
  v8 = a1[24];
  if ( v8 )
  {
    a1[25] = 0;
    qfree(v8, a2, a3, a4, a5);
  }
  v9 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      v9[1] = 0;
      qfree(v10, a2, a3, a4, a5);
    }
    v9 -= 3;
  }
  while ( v9 != a1 + 7 );
  return qfree(a1, a2, a3, a4, a5);
}
