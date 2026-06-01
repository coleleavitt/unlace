__int64 __fastcall CoinStructuredModel::operator=(__int64 a1, __int64 a2)
{
  int v3; // edx
  _QWORD *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  void *v7; // rdi
  _QWORD *v8; // rax
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // edx
  const void *v15; // r13
  size_t v16; // rbp
  void *v17; // rax
  char *v18; // rax
  char *v19; // rcx
  __int64 v20; // r13
  int v21; // r14d
  __int64 *v22; // rbp
  __int64 (__fastcall ***v23)(_QWORD); // rdi
  __int64 v24; // rax
  bool v25; // cc
  const void *v26; // r13
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  void *v29; // r8
  __int64 v30; // rcx
  void *v31; // r8
  const void *v32; // r13
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbp
  void *v35; // rax
  __int64 i; // rbp
  CoinModel *v37; // r13

  if ( a1 != a2 )
  {
    CoinBaseModel::operator=();
    v3 = *(_DWORD *)(a1 + 108);
    v4 = *(_QWORD **)(a1 + 168);
    if ( v3 <= 0 )
    {
LABEL_6:
      if ( !v4 )
        goto LABEL_8;
    }
    else
    {
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = v4[v5];
          if ( !v6 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          v3 = *(_DWORD *)(a1 + 108);
          ++v5;
          v4 = *(_QWORD **)(a1 + 168);
          if ( (int)v5 >= v3 )
            goto LABEL_6;
        }
        ++v5;
      }
      while ( (int)v5 < v3 );
      if ( !v4 )
      {
LABEL_8:
        v7 = *(void **)(a1 + 184);
        if ( v7 )
          operator delete[](v7);
        v8 = *(_QWORD **)(a1 + 176);
        if ( v8 )
        {
          v9 = *(_DWORD *)(a1 + 108);
          if ( v9 > 0 )
          {
            v10 = 0;
            do
            {
              while ( 1 )
              {
                v11 = v8[v10];
                if ( !v11 )
                  break;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
                v9 = *(_DWORD *)(a1 + 108);
                ++v10;
                v8 = *(_QWORD **)(a1 + 176);
                if ( (int)v10 >= v9 )
                {
                  if ( v8 )
                    goto LABEL_21;
                  goto LABEL_16;
                }
              }
              ++v10;
            }
            while ( (int)v10 < v9 );
            if ( !v8 )
              goto LABEL_16;
          }
LABEL_21:
          operator delete[](v8);
        }
LABEL_16:
        v12 = *(int *)(a2 + 112);
        v13 = *(_DWORD *)(a2 + 108);
        *(__m128i *)(a1 + 100) = _mm_loadu_si128((const __m128i *)(a2 + 100));
        if ( !(_DWORD)v12 )
        {
          *(_QWORD *)(a1 + 168) = 0;
          *(_QWORD *)(a1 + 184) = 0;
LABEL_18:
          *(_QWORD *)(a1 + 176) = 0;
LABEL_19:
          std::vector<std::string>::operator=(a1 + 120, a2 + 120);
          std::vector<std::string>::operator=(a1 + 144, a2 + 144);
          return a1;
        }
        v15 = *(const void **)(a2 + 168);
        if ( v15 )
        {
          if ( v12 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_48;
          v16 = 8 * v12;
          v17 = (void *)operator new[](8 * v12);
          v18 = (char *)memcpy(v17, v15, v16);
          v13 = *(_DWORD *)(a1 + 108);
          v19 = v18;
        }
        else
        {
          v19 = nullptr;
        }
        *(_QWORD *)(a1 + 168) = v19;
        if ( v13 > 0 )
        {
          v20 = 0;
          v21 = 0;
          while ( 1 )
          {
            v22 = (__int64 *)&v19[v20];
            ++v21;
            v23 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(a2 + 168) + v20);
            v20 += 8;
            v24 = (**v23)(v23);
            v25 = *(_DWORD *)(a1 + 108) <= v21;
            *v22 = v24;
            if ( v25 )
              break;
            v19 = *(char **)(a1 + 168);
          }
        }
        v26 = *(const void **)(a2 + 184);
        v27 = *(int *)(a1 + 112);
        if ( v26 )
        {
          if ( v27 > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_48;
          v28 = operator new[](16 * v27);
          v29 = (void *)v28;
          if ( v27 )
          {
            v30 = 0;
            do
            {
              ++v30;
              *(_DWORD *)v28 = 0;
              *(_DWORD *)(v28 + 4) = 0;
              *(_BYTE *)(v28 + 8) = 0;
              *(_BYTE *)(v28 + 9) = 0;
              v28 += 16;
              *(_BYTE *)(v28 - 6) = 0;
              *(_BYTE *)(v28 - 5) = 0;
              *(_BYTE *)(v28 - 4) = 0;
              *(_BYTE *)(v28 - 3) = 0;
            }
            while ( v27 != v30 );
          }
          v31 = memcpy(v29, v26, 16 * v27);
        }
        else
        {
          v31 = nullptr;
        }
        v32 = *(const void **)(a2 + 176);
        *(_QWORD *)(a1 + 184) = v31;
        if ( !v32 )
          goto LABEL_18;
        v33 = *(int *)(a1 + 112);
        if ( v33 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v34 = 8 * v33;
          v35 = (void *)operator new[](v34);
          *(_QWORD *)(a1 + 176) = memcpy(v35, v32, v34);
          for ( i = 0; *(_DWORD *)(a1 + 108) > (int)i; ++i )
          {
            v37 = (CoinModel *)operator new(0x2D0u);
            CoinModel::CoinModel(v37, *(const CoinModel **)(*(_QWORD *)(a2 + 176) + 8 * i));
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * i) = v37;
          }
          goto LABEL_19;
        }
LABEL_48:
        __cxa_throw_bad_array_new_length();
      }
    }
    operator delete[](v4);
    goto LABEL_8;
  }
  return a1;
}

