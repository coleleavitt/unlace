void __fastcall CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(
        CoinWarmStartBasisDiff *this,
        const CoinWarmStartBasisDiff *a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  const void *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rbx
  void *v8; // rax
  char *v9; // rcx
  __int64 v10; // rsi
  int v11; // ecx
  const void *v12; // rsi
  int v13; // ebx
  unsigned __int64 v14; // rbx
  void *v15; // rax

  v3 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v3 - 40)) = *((_QWORD *)a2 + 1);
  v4 = *(_DWORD *)(a3 + 8);
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 2) = v4;
  if ( v4 > 0 )
  {
    v5 = *(const void **)(a3 + 16);
    v6 = 2 * v4;
    if ( v5 )
    {
      v7 = 4LL * v6;
      v8 = (void *)operator new[](v7);
      v9 = (char *)memcpy(v8, v5, v7);
    }
    else
    {
      v9 = nullptr;
    }
LABEL_6:
    *((_QWORD *)this + 2) = v9;
    return;
  }
  if ( v4 )
  {
    v10 = *(_QWORD *)(a3 + 16);
    v11 = (*(_DWORD *)(v10 - 4) + 15) >> 4;
    v12 = (const void *)(v10 - 4);
    v13 = v11 + ((15 - v4) >> 4) + 1;
    if ( v12 )
    {
      if ( (unsigned __int64)v13 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v14 = 4LL * v13;
      v15 = (void *)operator new[](v14);
      v9 = (char *)memcpy(v15, v12, v14) + 4;
    }
    else
    {
      v9 = &byte_4;
    }
    goto LABEL_6;
  }
}

