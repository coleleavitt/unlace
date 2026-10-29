__int64 __fastcall CoinWarmStartPrimalDualDiff::clone(CoinWarmStartPrimalDualDiff *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // rax
  unsigned __int64 v5; // r13
  const void *v6; // rsi
  void *v7; // rax
  __int64 v8; // rdx
  const void *v9; // rsi
  __int64 v10; // rdi
  void *v11; // rax
  unsigned __int64 v12; // r12
  const void *v13; // rsi
  void *v14; // rax
  __int64 v15; // rdx
  const void *v16; // rsi

  v2 = operator new(0x48u);
  v3 = *((int *)this + 4);
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)v2 = off_4D2798;
  *(_DWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 8) = &off_4D2628;
  if ( (int)v3 > 0 )
  {
    v4 = (void *)operator new[](4 * v3);
    v5 = *(int *)(v2 + 16);
    v6 = *((const void **)this + 3);
    *(_QWORD *)(v2 + 24) = v4;
    memcpy(v4, v6, 4 * v5);
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v7 = (void *)operator new[](8 * v5);
    v8 = *(int *)(v2 + 16);
    v9 = *((const void **)this + 4);
    *(_QWORD *)(v2 + 32) = v7;
    memcpy(v7, v9, 8 * v8);
  }
  v10 = *((int *)this + 12);
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 40) = &off_4D2628;
  *(_DWORD *)(v2 + 48) = v10;
  if ( (int)v10 > 0 )
  {
    v11 = (void *)operator new[](4 * v10);
    v12 = *(int *)(v2 + 48);
    v13 = *((const void **)this + 7);
    *(_QWORD *)(v2 + 56) = v11;
    memcpy(v11, v13, 4 * v12);
    if ( v12 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v14 = (void *)operator new[](8 * v12);
    v15 = *(int *)(v2 + 48);
    v16 = *((const void **)this + 8);
    *(_QWORD *)(v2 + 64) = v14;
    memcpy(v14, v16, 8 * v15);
  }
  return *(_QWORD *)(*(_QWORD *)v2 - 40LL) + v2;
}

