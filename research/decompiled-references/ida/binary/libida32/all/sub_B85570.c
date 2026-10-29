__int64 __fastcall sub_B85570(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int *v5; // rsi
  void *v6; // rdi
  size_t v7; // rbp
  const void *v8; // rsi

  v3 = *(_QWORD *)(a2 + 40);
  if ( (v3 & 7) != 0 )
    return a1;
  v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v4 )
    return a1;
  v5 = *(unsigned int **)(v4 + 16);
  v6 = *(void **)(a1 + 32);
  v7 = *v5;
  v8 = v5 + 4;
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v6 < v7 )
  {
    sub_22581D0(a1, v8, v7);
    return a1;
  }
  if ( !v7 )
    return a1;
  memcpy(v6, v8, v7);
  *(_QWORD *)(a1 + 32) += v7;
  return a1;
}

