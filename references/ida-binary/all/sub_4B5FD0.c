size_t __fastcall sub_4B5FD0(_QWORD *a1, const void *a2, size_t a3)
{
  unsigned __int64 v4; // rbp
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v12; // rax

  if ( a3 )
  {
    v4 = a1[2];
    v7 = a1 + 1;
    v8 = v4 + a3;
    if ( __CFADD__(v4, a3) )
    {
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v4 != 0x7FFFFFFFFFFFFFFFLL )
          a1[2] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
      v7 = a1 + 1;
    }
    v9 = a1[1];
    v10 = v4;
    if ( a1[3] < v8 )
    {
      v12 = qvector_reserve(v7, v9, v8, 1);
      a1[1] = v12;
      v9 = v12;
      v10 = a1[2];
    }
    memset((void *)(v9 + v10), 0, v8 - v10);
    a1[2] = v8;
LABEL_9:
    memcpy((void *)(v4 + a1[1]), a2, a3);
  }
  return a3;
}
