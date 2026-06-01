__int64 __fastcall CoinSet::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  unsigned __int64 v5; // rdx
  const void *v6; // r13
  int v7; // eax
  size_t v8; // rbx
  void *v9; // rax
  void *v10; // rax
  void *v11; // rcx
  const void *v12; // r12
  size_t v13; // rbx
  void *v14; // rax
  void *v15; // rcx

  if ( a1 != a2 )
  {
    v3 = *(void **)(a1 + 16);
    if ( v3 )
      operator delete[](v3);
    v4 = *(void **)(a1 + 24);
    if ( v4 )
      operator delete[](v4);
    v5 = *(int *)(a2 + 8);
    v6 = *(const void **)(a2 + 16);
    v7 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 12) = v7;
    if ( v6 )
    {
      if ( v5 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_16;
      v8 = 4 * v5;
      v9 = (void *)operator new[](4 * v5);
      v10 = memcpy(v9, v6, v8);
      v5 = *(int *)(a1 + 8);
      v11 = v10;
    }
    else
    {
      v11 = nullptr;
    }
    v12 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 16) = v11;
    if ( !v12 )
    {
      v15 = nullptr;
      goto LABEL_12;
    }
    if ( v5 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v13 = 8 * v5;
      v14 = (void *)operator new[](8 * v5);
      v15 = memcpy(v14, v12, v13);
LABEL_12:
      *(_QWORD *)(a1 + 24) = v15;
      return a1;
    }
LABEL_16:
    __cxa_throw_bad_array_new_length();
  }
  return a1;
}

