struct _Unwind_Exception *__fastcall shortcutlist_chooser_t__::vfunc_0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  struct _Unwind_Exception *result; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // rdi

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
  result = &stru_86F6A0;
  v10 = a1 + 19;
  v11 = a1 + 7;
  *(v11 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v12 = *v10;
    if ( *v10 )
    {
      v10[1] = 0;
      result = (struct _Unwind_Exception *)qfree(v12, a2, a3, a4, a5);
    }
    v10 -= 3;
  }
  while ( v10 != v11 );
  return result;
}
