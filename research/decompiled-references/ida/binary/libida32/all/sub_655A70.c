void *__fastcall sub_655A70(__int64 *a1, const char *a2)
{
  size_t v3; // rbx
  void *result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
    return (void *)sub_407AD0(a1, 0);
  v3 = strlen(a2);
  if ( HIDWORD(v3) )
  {
    if ( !under_debugger )
      interr(4);
    BUG();
  }
  result = (void *)sub_407AD0(a1, v3);
  if ( v3 )
  {
    v5 = a1[1];
    v6 = v5 + v3;
    if ( __CFADD__(v5, v3) )
    {
      if ( v5 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        return memcpy((void *)(v5 + *a1), a2, v3);
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v7 = *a1;
    v8 = a1[1];
    if ( a1[2] < v6 )
    {
      v9 = qvector_reserve(a1, v7, v6, 1);
      *a1 = v9;
      v7 = v9;
      v8 = a1[1];
    }
    memset((void *)(v7 + v8), 0, v6 - v8);
    a1[1] = v6;
    return memcpy((void *)(v5 + *a1), a2, v3);
  }
  return result;
}

