struct _Unwind_Exception *__fastcall undo_chooser_t__::vfunc_0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  struct _Unwind_Exception *result; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  __int64 v14; // rdi

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
  result = &stru_86F6A0;
  v12 = a1 + 22;
  v13 = a1 + 10;
  *(v13 - 10) = &stru_86F6A0;
  do
  {
    v14 = *(v12 - 3);
    v12 -= 3;
    if ( v14 )
    {
      v12[1] = 0;
      result = (struct _Unwind_Exception *)qfree(v14, a2, v6, a4, a5);
    }
  }
  while ( v13 != v12 );
  return result;
}
