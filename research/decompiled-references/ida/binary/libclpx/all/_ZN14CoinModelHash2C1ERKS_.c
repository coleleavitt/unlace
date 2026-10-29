// Alternative name is '_ZN14CoinModelHash2C2ERKS_'
void __fastcall CoinModelHash2::CoinModelHash2(CoinModelHash2 *this, const CoinModelHash2 *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  const void *v5; // r12
  int v6; // ebx
  unsigned __int64 v7; // rbx
  void *v8; // rax
  void *v9; // rcx

  v2 = *((_DWORD *)a2 + 2);
  v3 = *((_DWORD *)a2 + 3);
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = v2;
  v4 = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 4) = v4;
  if ( v3 )
  {
    v5 = *(const void **)a2;
    v6 = 4 * v3;
    if ( *(_QWORD *)a2 )
    {
      if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v7 = 8LL * v6;
      v8 = (void *)operator new[](v7);
      v9 = memcpy(v8, v5, v7);
    }
    else
    {
      v9 = nullptr;
    }
    *(_QWORD *)this = v9;
  }
}

