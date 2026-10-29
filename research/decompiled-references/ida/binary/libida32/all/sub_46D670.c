void *__fastcall sub_46D670(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // r8
  unsigned int *v5; // r11
  unsigned int v6; // r9d
  __int64 v7; // rax
  char *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdi
  char *v11; // rsi
  unsigned int v12; // edi
  _BYTE *v13; // r13
  __int64 v14; // rsi
  unsigned int *v15; // rcx
  __int64 v16; // r14
  _QWORD *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void *result; // rax

  v3 = *(_BYTE **)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 56) << 6;
  v5 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a2);
  v6 = *v5;
  v7 = v4 >> 6;
  if ( v4 <= 0 )
  {
    v8 = *(char **)(a1 + 48);
    v13 = v8;
    v16 = 0;
  }
  else
  {
    v8 = *(char **)(a1 + 48);
    v9 = (__int64)(*(_QWORD *)(a1 + 56) << 6) >> 6;
    do
    {
      while ( 1 )
      {
        v10 = v9 >> 1;
        v11 = &v8[64 * (v9 >> 1)];
        if ( v6 >= *(_DWORD *)v11 && (v6 != *(_DWORD *)v11 || *((_DWORD *)v11 + 1) < v6 + 1) )
          break;
        v9 >>= 1;
        if ( v10 <= 0 )
          goto LABEL_8;
      }
      v8 = v11 + 64;
      v9 = v9 - 1 - v10;
    }
    while ( v9 > 0 );
LABEL_8:
    v12 = v5[1];
    v13 = v3;
    do
    {
      while ( 1 )
      {
        v14 = v7 >> 1;
        v15 = (unsigned int *)&v13[64 * (v7 >> 1)];
        if ( v12 >= *v15 && (v12 != *v15 || v15[1] < v12 + 1) )
          break;
        v7 >>= 1;
        if ( v14 <= 0 )
          goto LABEL_14;
      }
      v13 = v15 + 16;
      v7 = v7 - 1 - v14;
    }
    while ( v7 > 0 );
LABEL_14:
    v16 = (v13 - v8) >> 6;
    if ( v13 != v8 )
    {
      v17 = v8;
      do
      {
        v18 = (void *)v17[4];
        if ( v18 )
        {
          v17[5] = 0;
          qfree(v18);
        }
        v19 = (void *)v17[1];
        if ( v19 )
        {
          v17[2] = 0;
          qfree(v19);
        }
        v17 += 8;
      }
      while ( v17 != (_QWORD *)v13 );
      v3 = *(_BYTE **)(a1 + 48);
      v4 = *(_QWORD *)(a1 + 56) << 6;
    }
  }
  result = memmove(v8, v13, &v3[v4] - v13);
  *(_QWORD *)(a1 + 56) -= v16;
  return result;
}

