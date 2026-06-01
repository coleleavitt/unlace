__int64 __fastcall `virtual thunk to'CoinWarmStartDualDiff::clone(CoinWarmStartDualDiff *this)
{
  char *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // rax
  unsigned __int64 v5; // r12
  const void *v6; // rsi
  void *v7; // rax
  __int64 v8; // rdx
  const void *v9; // rsi

  v1 = (char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL);
  v2 = operator new(0x28u);
  v3 = *((int *)v1 + 4);
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)v2 = off_4D2680;
  *(_DWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 8) = &off_4D2628;
  if ( (int)v3 > 0 )
  {
    v4 = (void *)operator new[](4 * v3);
    v5 = *(int *)(v2 + 16);
    v6 = *((const void **)v1 + 3);
    *(_QWORD *)(v2 + 24) = v4;
    memcpy(v4, v6, 4 * v5);
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v7 = (void *)operator new[](8 * v5);
    v8 = *(int *)(v2 + 16);
    v9 = *((const void **)v1 + 4);
    *(_QWORD *)(v2 + 32) = v7;
    memcpy(v7, v9, 8 * v8);
    v2 += *(_QWORD *)(*(_QWORD *)v2 - 40LL);
  }
  return v2;
}

