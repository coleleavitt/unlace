// Alternative name is '_ZN7CoinSetC2ERKS_'
void __fastcall CoinSet::CoinSet(CoinSet *this, const CoinSet *a2)
{
  unsigned __int64 v2; // rdx
  const void *v3; // r13
  int v4; // eax
  size_t v5; // rbx
  void *v6; // rax
  void *v7; // rax
  void *v8; // rcx
  const void *v9; // r12
  size_t v10; // rbx
  void *v11; // rax
  void *v12; // rcx

  v2 = *((int *)a2 + 2);
  v3 = *((const void **)a2 + 2);
  *(_QWORD *)this = off_4D1908;
  v4 = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 2) = v2;
  *((_DWORD *)this + 3) = v4;
  if ( v3 )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_10;
    v5 = 4 * v2;
    v6 = (void *)operator new[](4 * v2);
    v7 = memcpy(v6, v3, v5);
    v2 = *((int *)this + 2);
    v8 = v7;
  }
  else
  {
    v8 = nullptr;
  }
  v9 = *((const void **)a2 + 3);
  *((_QWORD *)this + 2) = v8;
  if ( !v9 )
  {
    v12 = nullptr;
    goto LABEL_7;
  }
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
LABEL_10:
    __cxa_throw_bad_array_new_length();
  v10 = 8 * v2;
  v11 = (void *)operator new[](8 * v2);
  v12 = memcpy(v11, v9, v10);
LABEL_7:
  *((_QWORD *)this + 3) = v12;
}

