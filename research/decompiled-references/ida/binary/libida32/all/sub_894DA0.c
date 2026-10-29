__int64 __fastcall sub_894DA0(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  size_t v4; // rbx
  __int64 *v5; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = 4 * a4;
  if ( 4 * a4 )
  {
    v5 = *(__int64 **)(a1 + 8);
    v7 = v5[1];
    v8 = v7 + v4;
    if ( __CFADD__(v7, v4) )
    {
      if ( v7 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v7 != 0x7FFFFFFFFFFFFFFFLL )
          v5[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + *v5), a3, v4);
        return -1;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = *v5;
    v11 = v5[1];
    if ( v5[2] < v8 )
    {
      v12 = qvector_reserve(*(_QWORD *)(a1 + 8), v10, v8, 1);
      *v5 = v12;
      v10 = v12;
      v11 = v5[1];
    }
    memset((void *)(v10 + v11), 0, v8 - v11);
    v5[1] = v8;
    goto LABEL_6;
  }
  return -1;
}

