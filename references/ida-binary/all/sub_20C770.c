void *__fastcall sub_20C770(__int64 *a1, const char *a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  size_t v6; // rbx
  void *result; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
    return (void *)sub_20C550(a1, 0);
  v6 = strlen(a2);
  if ( HIDWORD(v6) )
  {
    if ( !under_debugger )
      interr(4, a2, v4, v5, a3);
    BUG();
  }
  result = (void *)sub_20C550(a1, v6);
  if ( v6 )
  {
    v8 = a1[1];
    v9 = v8 + v6;
    if ( __CFADD__(v8, v6) )
    {
      if ( v8 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v8 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        return memcpy((void *)(v8 + *a1), a2, v6);
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = *a1;
    v11 = a1[1];
    if ( a1[2] < v9 )
    {
      v12 = qvector_reserve(a1, v10, v9, 1);
      *a1 = v12;
      v10 = v12;
      v11 = a1[1];
    }
    memset((void *)(v10 + v11), 0, v9 - v11);
    a1[1] = v9;
    return memcpy((void *)(v8 + *a1), a2, v6);
  }
  return result;
}
