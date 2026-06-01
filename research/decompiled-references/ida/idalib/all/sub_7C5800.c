size_t __fastcall sub_7C5800(void *src, __int64 a2, __int64 a3, __int64 *a4)
{
  size_t v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a3 * a2;
  if ( a3 * a2 )
  {
    v5 = a4[1];
    v7 = v5 + v4;
    if ( __CFADD__(v5, v4) )
    {
      if ( v5 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
          a4[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v5 + *a4), src, v4);
        return v4;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = *a4;
    v10 = a4[1];
    if ( a4[2] < v7 )
    {
      v11 = qvector_reserve(a4, v9, v7, 1);
      *a4 = v11;
      v9 = v11;
      v10 = a4[1];
    }
    memset((void *)(v9 + v10), 0, v7 - v10);
    a4[1] = v7;
    goto LABEL_6;
  }
  return v4;
}
