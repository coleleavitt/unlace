struct _Unwind_Exception *__fastcall addon_chooser_t__::vfunc_0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _Unwind_Exception *result; // rax
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdi

  result = &stru_86F6A0;
  v6 = a1 + 7;
  v7 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      v7[1] = 0;
      result = (struct _Unwind_Exception *)qfree(v8, a2, a3, a4, a5);
    }
    v7 -= 3;
  }
  while ( v7 != v6 );
  return result;
}
