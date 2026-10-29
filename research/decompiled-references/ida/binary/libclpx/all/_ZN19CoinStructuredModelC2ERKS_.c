// Alternative name is '_ZN19CoinStructuredModelC1ERKS_'
void __fastcall CoinStructuredModel::CoinStructuredModel(CoinStructuredModel *this, const CoinStructuredModel *a2)
{
  char *v3; // r15
  unsigned __int64 v4; // r13
  __m128i v5; // xmm0
  int v6; // eax
  char *v7; // rdi
  const void *v8; // r14
  unsigned __int64 v9; // r13
  char *v10; // r12
  __int64 v11; // r13
  int v12; // r14d
  __int64 *v13; // r12
  __int64 v14; // rax
  bool v15; // cc
  const void *v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  void *v21; // rcx
  const void *v22; // r12
  unsigned __int64 v23; // rdx
  size_t v24; // r13
  void *v25; // rax
  __int64 i; // r12
  CoinModel *v27; // r13

  v3 = (char *)this + 144;
  CoinBaseModel::CoinBaseModel(this, a2);
  *(_QWORD *)this = &off_4D2340;
  v4 = *((int *)a2 + 28);
  v5 = _mm_loadu_si128((const __m128i *)((char *)a2 + 100));
  v6 = *((_DWORD *)a2 + 27);
  *((_QWORD *)this + 15) = 0;
  *(__m128i *)((char *)this + 100) = v5;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  if ( (_DWORD)v4 )
  {
    v8 = *((const void **)a2 + 21);
    if ( v8 )
    {
      if ( v4 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v9 = 8 * v4;
      v10 = (char *)operator new[](v9);
      memcpy(v10, v8, v9);
      v6 = *((_DWORD *)this + 27);
    }
    else
    {
      v10 = nullptr;
    }
    *((_QWORD *)this + 21) = v10;
    if ( v6 > 0 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = (__int64 *)&v10[v11];
        v14 = (***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)a2 + 21) + v11))(*(_QWORD *)(*((_QWORD *)a2 + 21) + v11));
        ++v12;
        v11 += 8;
        v15 = *((_DWORD *)this + 27) <= v12;
        *v13 = v14;
        if ( v15 )
          break;
        v10 = *((char **)this + 21);
      }
    }
    v16 = *((const void **)a2 + 23);
    v17 = *((int *)this + 28);
    if ( v16 )
    {
      if ( v17 > 0x7FFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v18 = operator new[](16 * v17);
      v19 = 0;
      v20 = (void *)v18;
      if ( v17 )
      {
        do
        {
          ++v19;
          *(_DWORD *)v18 = 0;
          *(_DWORD *)(v18 + 4) = 0;
          *(_BYTE *)(v18 + 8) = 0;
          *(_BYTE *)(v18 + 9) = 0;
          v18 += 16;
          *(_BYTE *)(v18 - 6) = 0;
          *(_BYTE *)(v18 - 5) = 0;
          *(_BYTE *)(v18 - 4) = 0;
          *(_BYTE *)(v18 - 3) = 0;
        }
        while ( v17 != v19 );
      }
      v21 = memcpy(v20, v16, 16 * v17);
    }
    else
    {
      v21 = nullptr;
    }
    v22 = *((const void **)a2 + 22);
    *((_QWORD *)this + 23) = v21;
    if ( v22 )
    {
      v23 = *((int *)this + 28);
      if ( v23 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v24 = 8 * v23;
      v25 = (void *)operator new[](8 * v23);
      *((_QWORD *)this + 22) = memcpy(v25, v22, v24);
      for ( i = 0; *((_DWORD *)this + 27) > (int)i; ++i )
      {
        v27 = (CoinModel *)operator new(0x2D0u);
        CoinModel::CoinModel(v27, *(const CoinModel **)(*((_QWORD *)a2 + 22) + 8 * i));
        *(_QWORD *)(*((_QWORD *)this + 22) + 8 * i) = v27;
      }
    }
    else
    {
      *((_QWORD *)this + 22) = 0;
    }
    v7 = (char *)this + 120;
  }
  else
  {
    *((_QWORD *)this + 21) = 0;
    *((_QWORD *)this + 23) = 0;
    v7 = (char *)this + 120;
    *((_QWORD *)this + 22) = 0;
  }
  std::vector<std::string>::operator=(v7, (char *)a2 + 120);
  std::vector<std::string>::operator=(v3, (char *)a2 + 144);
}

