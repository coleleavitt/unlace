__int64 __fastcall `virtual thunk to'CoinWarmStartVectorDiff<double>::clone(_QWORD *a1)
{
  char *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rax
  unsigned __int64 v6; // r12
  const void *v7; // rsi
  void *v8; // rax
  __int64 v9; // rdx
  const void *v10; // rsi

  v1 = (char *)a1 + *(_QWORD *)(*a1 - 32LL);
  v2 = operator new(0x20u);
  v3 = *((int *)v1 + 2);
  v4 = v2;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)v2 = &off_4D2628;
  *(_DWORD *)(v2 + 8) = v3;
  if ( (int)v3 > 0 )
  {
    v5 = (void *)operator new[](4 * v3);
    v6 = *(int *)(v4 + 8);
    v7 = *((const void **)v1 + 2);
    *(_QWORD *)(v4 + 16) = v5;
    memcpy(v5, v7, 4 * v6);
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v8 = (void *)operator new[](8 * v6);
    v9 = *(int *)(v4 + 8);
    v10 = *((const void **)v1 + 3);
    *(_QWORD *)(v4 + 24) = v8;
    memcpy(v8, v10, 8 * v9);
    v4 += *(_QWORD *)(*(_QWORD *)v4 - 40LL);
  }
  return v4;
}

