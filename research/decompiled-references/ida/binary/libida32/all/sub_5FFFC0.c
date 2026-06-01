size_t __fastcall sub_5FFFC0(__int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a3 )
  {
    v4 = a1[1];
    v6 = v4 + a3;
    if ( __CFADD__(v4, a3) )
    {
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v4 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v4 + *a1), a2, a3);
        return a3;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *a1;
    v9 = a1[1];
    if ( a1[2] < v6 )
    {
      v10 = qvector_reserve(a1, v8, v6, 1);
      *a1 = v10;
      v8 = v10;
      v9 = a1[1];
    }
    memset((void *)(v8 + v9), 0, v6 - v9);
    a1[1] = v6;
    goto LABEL_6;
  }
  return a3;
}

