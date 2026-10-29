void *__fastcall sub_481CC0(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rdx
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r8
  char *v11; // rax
  unsigned __int64 v12; // rdi
  _BYTE *v13; // r14
  __int64 v14; // rsi
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r13
  _QWORD *v17; // r12
  void *v18; // rdi
  void *v19; // rdi
  void *result; // rax

  v3 = *(_BYTE **)(a1 + 48);
  v4 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a2);
  v5 = *v4;
  v6 = 80LL * *(_QWORD *)(a1 + 56);
  v7 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 4);
  if ( v6 <= 0 )
  {
    v8 = *(char **)(a1 + 48);
    v13 = v8;
    v16 = 0;
  }
  else
  {
    v8 = *(char **)(a1 + 48);
    v9 = 0xCCCCCCCCCCCCCCCDLL * ((80LL * *(_QWORD *)(a1 + 56)) >> 4);
    do
    {
      while ( 1 )
      {
        v10 = v9 >> 1;
        v11 = &v8[80 * (v9 >> 1)];
        if ( v5 >= *(_QWORD *)v11 && (v5 != *(_QWORD *)v11 || *((_QWORD *)v11 + 1) < v5 + 1) )
          break;
        v9 >>= 1;
        if ( v10 <= 0 )
          goto LABEL_8;
      }
      v8 = v11 + 80;
      v9 = v9 - 1 - v10;
    }
    while ( v9 > 0 );
LABEL_8:
    v12 = v4[1];
    v13 = v3;
    do
    {
      while ( 1 )
      {
        v14 = v7 >> 1;
        v15 = (unsigned __int64 *)&v13[80 * (v7 >> 1)];
        if ( v12 >= *v15 && (v12 != *v15 || v15[1] < v12 + 1) )
          break;
        v7 >>= 1;
        if ( v14 <= 0 )
          goto LABEL_14;
      }
      v13 = v15 + 10;
      v7 = v7 - 1 - v14;
    }
    while ( v7 > 0 );
LABEL_14:
    v16 = 0xCCCCCCCCCCCCCCCDLL * ((v13 - v8) >> 4);
    if ( v13 != v8 )
    {
      v17 = v8;
      do
      {
        v18 = (void *)v17[5];
        if ( v18 )
        {
          v17[6] = 0;
          qfree(v18);
        }
        v19 = (void *)v17[2];
        if ( v19 )
        {
          v17[3] = 0;
          qfree(v19);
        }
        v17 += 10;
      }
      while ( v17 != (_QWORD *)v13 );
      v3 = *(_BYTE **)(a1 + 48);
      v6 = 80LL * *(_QWORD *)(a1 + 56);
    }
  }
  result = memmove(v8, v13, &v3[v6] - v13);
  *(_QWORD *)(a1 + 56) -= v16;
  return result;
}
