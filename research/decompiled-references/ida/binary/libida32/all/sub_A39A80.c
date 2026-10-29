__int64 __fastcall sub_A39A80(const void *a1, const void *a2)
{
  __int64 v2; // rbp
  const char *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned int *v8; // rsi
  size_t v9; // rdx
  const void *v10; // rsi
  int v11; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  if ( (v2 & 7) != 0 )
  {
    v4 = 0;
    v3 = &byte_22CD811;
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
    if ( (v6 & 7) == 0 )
      goto LABEL_5;
LABEL_15:
    v7 = 0;
    goto LABEL_10;
  }
  v3 = &byte_22CD811;
  v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v5 = *(unsigned int **)(v4 + 16);
    v4 = *v5;
    v3 = (const char *)(v5 + 4);
  }
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  if ( (v6 & 7) != 0 )
    goto LABEL_15;
LABEL_5:
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v7 )
  {
    v8 = *(unsigned int **)(v7 + 16);
    v9 = v4;
    v7 = *v8;
    v10 = v8 + 4;
    if ( v7 <= v4 )
      v9 = v7;
    if ( v9 )
    {
      v11 = memcmp(v3, v10, v9);
      if ( v11 )
        return (v11 >> 31) | 1u;
    }
  }
LABEL_10:
  result = 0;
  if ( v7 != v4 )
    return v4 < v7 ? -1 : 1;
  return result;
}

