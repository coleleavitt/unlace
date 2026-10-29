void *__fastcall sub_717C30(__int64 *a1, const void *a2, size_t a3)
{
  void *result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  if ( HIDWORD(a3) )
  {
    if ( !under_debugger )
      interr(5);
    BUG();
  }
  result = (void *)sub_407AD0(a1, a3);
  if ( a3 )
  {
    v6 = a1[1];
    v7 = v6 + a3;
    if ( __CFADD__(v6, a3) )
    {
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        return memcpy((void *)(v6 + *a1), a2, a3);
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *a1;
    v9 = a1[1];
    if ( a1[2] < v7 )
    {
      v10 = qvector_reserve(a1, v8, v7, 1);
      *a1 = v10;
      v8 = v10;
      v9 = a1[1];
    }
    memset((void *)(v8 + v9), 0, v7 - v9);
    a1[1] = v7;
    return memcpy((void *)(v6 + *a1), a2, a3);
  }
  return result;
}

