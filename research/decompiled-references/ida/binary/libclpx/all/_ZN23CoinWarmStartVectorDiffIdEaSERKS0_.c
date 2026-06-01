__int64 __fastcall CoinWarmStartVectorDiff<double>::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  void *v7; // rax
  unsigned __int64 v8; // r12
  void *v9; // rax
  __int64 v10; // rdx

  if ( a1 == a2 )
    return a1;
  if ( *(int *)(a1 + 8) > 0 )
  {
    v3 = *(void **)(a1 + 16);
    if ( v3 )
      operator delete[](v3);
    v4 = *(void **)(a1 + 24);
    if ( v4 )
      operator delete[](v4);
  }
  v5 = *(int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v5;
  if ( (int)v5 <= 0 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    return a1;
  }
  v7 = (void *)operator new[](4 * v5);
  v8 = *(int *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v7;
  memcpy(v7, *(const void **)(a2 + 16), 4 * v8);
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v9 = (void *)operator new[](8 * v8);
  v10 = *(int *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = v9;
  memcpy(v9, *(const void **)(a2 + 24), 8 * v10);
  return a1;
}

