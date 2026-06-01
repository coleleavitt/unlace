__int64 __fastcall sub_5C6FF0(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  char *v2; // rsi
  const char *v3; // rbp
  size_t v4; // rax
  __int64 v5; // r12
  size_t v6; // r13
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v1 = a1[70];
  if ( v1 > 1 )
  {
    v10 = a1[69];
    if ( a1[71] < v1 + 2 )
    {
      v16 = qvector_reserve(a1 + 69, v10, v1 + 2, 1);
      a1[69] = v16;
      v10 = v16;
    }
    a1[70] = v1 + 2;
    *(_BYTE *)(v10 + v1 + 1) = 0;
    *(_WORD *)(a1[69] + v1 - 1) = 14906;
  }
  v2 = (char *)haystack;
  if ( a1[6] )
    v2 = (char *)a1[5];
  v3 = sub_5C5F70(a1[30], v2, 1);
  if ( (*(_BYTE *)(a1[13] + 44LL) & 1) != 0 && !strchr(v3, 126) )
  {
    v12 = a1[70];
    if ( v12 )
    {
      v14 = v12 + 1;
      v13 = a1[70];
      --v12;
    }
    else
    {
      v13 = 1;
      v14 = 2;
    }
    v15 = a1[69];
    if ( a1[71] < v14 )
    {
      v17 = qvector_reserve(a1 + 69, v15, v14, 1);
      a1[69] = v17;
      v15 = v17;
    }
    a1[70] = v14;
    *(_BYTE *)(v15 + v12) = 126;
    *(_BYTE *)(a1[69] + v13) = 0;
  }
  if ( v3 )
  {
    v4 = strlen(v3);
    v5 = a1[70];
    v6 = v4;
    v7 = v4;
    if ( v5 )
    {
      --v5;
      v7 = v4 + v5;
    }
    v8 = a1[69];
    if ( a1[71] < v7 + 1 )
    {
      v11 = qvector_reserve(a1 + 69, v8, v7 + 1, 1);
      a1[69] = v11;
      v8 = v11;
    }
    a1[70] = v7 + 1;
    *(_BYTE *)(v8 + v7) = 0;
    memmove((void *)(v5 + a1[69]), v3, v6);
  }
  return 0;
}

