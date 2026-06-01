size_t __fastcall sub_812640(__int64 **a1, const void *a2, size_t a3)
{
  __int64 *v4; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  if ( a3 )
  {
    v4 = *a1;
    v6 = (*a1)[1];
    v7 = v6 + a3;
    if ( __CFADD__(v6, a3) )
    {
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
          v4[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v6 + *v4), a2, a3);
        return a3;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = *v4;
    v10 = (*a1)[1];
    if ( v4[2] < v7 )
    {
      v11 = qvector_reserve(*a1, v9, v7, 1);
      *v4 = v11;
      v9 = v11;
      v10 = v4[1];
    }
    memset((void *)(v9 + v10), 0, v7 - v10);
    v4[1] = v7;
    goto LABEL_6;
  }
  return a3;
}

