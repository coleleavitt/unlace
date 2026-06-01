__int64 __fastcall CoinWarmStartBasisDiff::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  int v4; // edx
  const void *v6; // r12
  int v7; // edx
  unsigned __int64 v8; // rbp
  void *v9; // rax
  char *v10; // rcx
  __int64 v11; // rsi
  int v12; // ecx
  const void *v13; // rsi
  int v14; // ebp
  unsigned __int64 v15; // rbp
  void *v16; // rax

  if ( a1 == a2 )
    return a1;
  if ( *(int *)(a1 + 8) > 0 )
  {
    v3 = *(void **)(a1 + 16);
    if ( !v3 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 8) )
  {
    v3 = (void *)(*(_QWORD *)(a1 + 16) - 4LL);
    if ( v3 )
LABEL_4:
      operator delete[](v3);
  }
LABEL_5:
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 > 0 )
  {
    v6 = *(const void **)(a2 + 16);
    v7 = 2 * v4;
    if ( v6 )
    {
      v8 = 4LL * v7;
      v9 = (void *)operator new[](v8);
      v10 = (char *)memcpy(v9, v6, v8);
    }
    else
    {
      v10 = nullptr;
    }
  }
  else
  {
    if ( !v4 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      return a1;
    }
    v11 = *(_QWORD *)(a2 + 16);
    v12 = (*(_DWORD *)(v11 - 4) + 15) >> 4;
    v13 = (const void *)(v11 - 4);
    v14 = v12 + ((15 - v4) >> 4) + 1;
    if ( v13 )
    {
      if ( (unsigned __int64)v14 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v15 = 4LL * v14;
      v16 = (void *)operator new[](v15);
      v10 = (char *)memcpy(v16, v13, v15) + 4;
    }
    else
    {
      v10 = &byte_4;
    }
  }
  *(_QWORD *)(a1 + 16) = v10;
  return a1;
}

