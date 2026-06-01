__int64 __fastcall sub_5C8AD0(_QWORD *a1, const char *a2)
{
  const char *v4; // rdi
  int v5; // eax
  const char *v6; // r12
  unsigned int v7; // r13d
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  size_t v14; // rax
  __int64 v15; // r12
  size_t v16; // r13
  size_t v17; // r15
  __int64 v18; // rsi
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  v4 = haystack;
  if ( a1[76] )
    v4 = (const char *)a1[75];
  v5 = strcmp(v4, a2);
  v6 = (const char *)a1[69];
  if ( !v5 )
  {
    v11 = a1[70];
    if ( v11 )
    {
      v13 = v11 + 1;
      v12 = v11 + 2;
      --v11;
    }
    else
    {
      v12 = 3;
      v13 = 2;
    }
    if ( a1[71] < v12 )
    {
      v22 = v13;
      v20 = qvector_reserve(a1 + 69, a1[69], v12, 1);
      v13 = v22;
      a1[69] = v20;
      v6 = (const char *)v20;
    }
    a1[70] = v12;
    v6[v13] = 0;
    *(_WORD *)(a1[69] + v11) = 14906;
    if ( a2 )
    {
      v14 = strlen(a2);
      v15 = a1[70];
      v16 = v14;
      v17 = v14;
      if ( v15 )
      {
        --v15;
        v17 = v14 + v15;
      }
      v18 = a1[69];
      v19 = v17 + 1;
      if ( a1[71] < v17 + 1 )
      {
        v21 = qvector_reserve(a1 + 69, v18, v19, 1);
        v19 = v17 + 1;
        a1[69] = v21;
        v18 = v21;
      }
      a1[70] = v19;
      *(_BYTE *)(v18 + v17) = 0;
      memmove((void *)(v15 + a1[69]), a2, v16);
    }
    goto LABEL_21;
  }
  v7 = 0;
  if ( a2 != v6 && (!a2 || (v8 = strlen(a2)) == 0 || (v9 = a1[70]) != 0 && v9 - 1 >= v8 && !strncmp(v6, a2, v8)) )
  {
LABEL_21:
    v7 = 1;
    *(_QWORD *)(a1[13] + 40LL) |= 0x80000000uLL;
  }
  return v7;
}

