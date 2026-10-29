void *__fastcall sub_7CAE00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  size_t v4; // r12
  void *result; // rax
  size_t v6; // r12
  void *v7; // rax
  void *v8; // rax
  const void *v9; // rsi

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_7B9AC0((_QWORD *)a1, a2);
  v3 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 24) = v3;
  v4 = *(_QWORD *)(a2 + 40);
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 40), (const char *)a2);
    *(_QWORD *)(a1 + 32) = v7;
    a2 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 48) = v4;
    memcpy(v7, (const void *)a2, v4);
    *(_QWORD *)(a1 + 40) = v4;
  }
  result = (void *)*(unsigned int *)(v2 + 56);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 56) = (_DWORD)result;
  v6 = *(_QWORD *)(v2 + 72);
  if ( v6 )
  {
    v8 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 72), (const char *)a2);
    *(_QWORD *)(a1 + 80) = v6;
    v9 = *(const void **)(v2 + 64);
    *(_QWORD *)(a1 + 64) = v8;
    result = memcpy(v8, v9, v6);
    *(_QWORD *)(a1 + 72) = v6;
  }
  return result;
}

