__int64 __fastcall undo_chooser_t__::vfunc_1(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdi

  v6 = a1[23];
  *a1 = undo_chooser_t___vtable;
  if ( v6 )
  {
    v7 = a1[24];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 32 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2, v6, a4, a5);
          v6 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v6, a2, v6, a4, a5);
  }
  v11 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v12 = *(v11 - 3);
    v11 -= 3;
    if ( v12 )
    {
      v11[1] = 0;
      qfree(v12, a2, v6, a4, a5);
    }
  }
  while ( a1 + 10 != v11 );
  return qfree(a1, a2, v6, a4, a5);
}
