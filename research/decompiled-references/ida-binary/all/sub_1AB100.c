struct _Unwind_Exception *__fastcall sub_1AB100(_QWORD *a1, const char *a2)
{
  struct _Unwind_Exception *result; // rax
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi

  result = &stru_86F6A0;
  v3 = a1 + 7;
  v4 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      result = (struct _Unwind_Exception *)qfree(v5, a2);
    }
    v4 -= 3;
  }
  while ( v4 != v3 );
  return result;
}
