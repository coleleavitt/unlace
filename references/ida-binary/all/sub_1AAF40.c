struct _Unwind_Exception *__fastcall enum_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  struct _Unwind_Exception *result; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi

  *a1 = enum_chooser_t___vtable;
  v3 = a1[23];
  if ( v3 )
  {
    a1[24] = 0;
    qfree(v3, a2);
  }
  result = &stru_86F6A0;
  v5 = a1 + 19;
  v6 = a1 + 7;
  *(v6 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      result = (struct _Unwind_Exception *)qfree(v7, a2);
    }
    v5 -= 3;
  }
  while ( v5 != v6 );
  return result;
}
