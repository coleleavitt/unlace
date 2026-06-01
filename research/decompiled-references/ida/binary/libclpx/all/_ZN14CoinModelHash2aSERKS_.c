__int64 __fastcall CoinModelHash2::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  int v4; // edx
  int v5; // eax
  const void *v7; // r12
  int v8; // eax
  unsigned __int64 v9; // rbp
  void *v10; // rax
  void *v11; // rcx

  if ( a1 == a2 )
    return a1;
  v3 = *(void **)a1;
  if ( v3 )
    operator delete[](v3);
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = v4;
  *(_DWORD *)(a1 + 12) = v5;
  if ( !v5 )
  {
    *(_QWORD *)a1 = 0;
    return a1;
  }
  v7 = *(const void **)a2;
  v8 = 4 * v5;
  if ( *(_QWORD *)a2 )
  {
    if ( (unsigned __int64)v8 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v9 = 8LL * v8;
    v10 = (void *)operator new[](v9);
    v11 = memcpy(v10, v7, v9);
  }
  else
  {
    v11 = nullptr;
  }
  *(_QWORD *)a1 = v11;
  return a1;
}

