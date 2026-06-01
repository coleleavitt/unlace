void __fastcall CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(
        CoinWarmStartBasisDiff *this,
        const CoinWarmStartBasisDiff *a2)
{
  int v2; // edx
  const void *v3; // r12
  int v4; // edx
  unsigned __int64 v5; // rbx
  void *v6; // rax
  char *v7; // rcx
  __int64 v8; // rsi
  int v9; // ecx
  const void *v10; // rsi
  int v11; // ebx
  unsigned __int64 v12; // rbx
  void *v13; // rax

  v2 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_4D24C0;
  *((_DWORD *)this + 2) = v2;
  if ( v2 > 0 )
  {
    v3 = *((const void **)a2 + 2);
    v4 = 2 * v2;
    if ( v3 )
    {
      v5 = 4LL * v4;
      v6 = (void *)operator new[](v5);
      v7 = (char *)memcpy(v6, v3, v5);
    }
    else
    {
      v7 = nullptr;
    }
LABEL_6:
    *((_QWORD *)this + 2) = v7;
    return;
  }
  if ( v2 )
  {
    v8 = *((_QWORD *)a2 + 2);
    v9 = (*(_DWORD *)(v8 - 4) + 15) >> 4;
    v10 = (const void *)(v8 - 4);
    v11 = v9 + ((15 - v2) >> 4) + 1;
    if ( v10 )
    {
      if ( (unsigned __int64)v11 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v12 = 4LL * v11;
      v13 = (void *)operator new[](v12);
      v7 = (char *)memcpy(v13, v10, v12) + 4;
    }
    else
    {
      v7 = &byte_4;
    }
    goto LABEL_6;
  }
}

