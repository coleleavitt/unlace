__int64 __fastcall sub_10BC6A0(__int64 a1, __int64 a2)
{
  void *v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm1
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 result; // rax
  unsigned int v18; // edx
  _DWORD *v19; // rax
  __int64 v20; // rdi
  const void *v21; // rdx
  const void *v22; // rsi
  int v23; // eax
  __m128i v24; // xmm0
  size_t v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  _DWORD *v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r13d
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rax
  __int64 v38; // rdx
  _DWORD *i; // rdx
  __m128i v40[3]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)a1 = &off_2C0BEF8;
  v4 = (void *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x1000000000LL;
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 )
  {
    v20 = a1 + 8;
    if ( a1 + 8 != a2 + 8 )
    {
      v21 = *(const void **)(a2 + 8);
      v22 = (const void *)(a2 + 24);
      if ( v21 == v22 )
      {
        v25 = 8LL * v5;
        if ( v5 <= 0x10uLL
          || (sub_22134E0(v20, v4, v5, 8),
              v4 = *(void **)(a1 + 8),
              v22 = *(const void **)(a2 + 8),
              (v25 = 8LL * *(unsigned int *)(a2 + 16)) != 0) )
        {
          memcpy(v4, v22, v25);
        }
        *(_DWORD *)(a1 + 16) = v5;
        *(_DWORD *)(a2 + 16) = 0;
      }
      else
      {
        v23 = *(_DWORD *)(a2 + 20);
        *(_QWORD *)(a1 + 8) = v21;
        *(_DWORD *)(a1 + 16) = v5;
        *(_DWORD *)(a1 + 20) = v23;
        *(_QWORD *)(a2 + 8) = v22;
        *(_QWORD *)(a2 + 16) = 0;
      }
    }
  }
  *(_QWORD *)(a1 + 152) = 0;
  v6 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 152) = v6;
  LODWORD(v6) = *(_DWORD *)(a2 + 160);
  *(_QWORD *)(a2 + 152) = 0;
  *(_DWORD *)(a1 + 160) = v6;
  v7 = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(a2 + 160) = 0;
  LODWORD(v6) = *(_DWORD *)(a1 + 164);
  *(_DWORD *)(a1 + 164) = v7;
  *(_DWORD *)(a2 + 164) = v6;
  v8 = *(unsigned int *)(a1 + 168);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
  v9 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 168) = v8;
  *(_DWORD *)(a2 + 16) = 0;
  if ( !v9 )
  {
    if ( !*(_DWORD *)(a2 + 164) )
      goto LABEL_6;
    v10 = 12LL * (unsigned int)v8;
    if ( (unsigned int)v8 > 0x40 )
    {
      operator delete();
      *(_QWORD *)(a2 + 152) = 0;
      *(_QWORD *)(a2 + 160) = 0;
      *(_DWORD *)(a2 + 168) = 0;
      goto LABEL_6;
    }
    goto LABEL_15;
  }
  v18 = 4 * v9;
  if ( (unsigned int)(4 * v9) < 0x40 )
    v18 = 64;
  if ( (unsigned int)v8 <= v18 )
  {
    v10 = 12 * v8;
LABEL_15:
    v19 = nullptr;
    if ( v10 )
    {
      do
      {
        *v19 = -1;
        v19 += 3;
      }
      while ( (_DWORD *)v10 != v19 );
    }
    *(_QWORD *)(a2 + 160) = 0;
    goto LABEL_6;
  }
  v26 = v9 - 1;
  if ( v26 )
  {
    _BitScanReverse(&v26, v26);
    v27 = 1 << (33 - (v26 ^ 0x1F));
    if ( v27 < 64 )
      v27 = 64;
    if ( (_DWORD)v8 == v27 )
    {
      *(_QWORD *)(a2 + 160) = 0;
      v28 = nullptr;
      do
      {
        *v28 = -1;
        v28 += 3;
      }
      while ( (_DWORD *)(12 * v8) != v28 );
      goto LABEL_6;
    }
    v29 = (4 * v27 / 3u + 1) | ((unsigned __int64)(4 * v27 / 3u + 1) >> 1);
    v30 = ((((v29 >> 2) | v29 | (((v29 >> 2) | v29) >> 4)) >> 8)
         | (v29 >> 2)
         | v29
         | (((v29 >> 2) | v29) >> 4)
         | (((((v29 >> 2) | v29 | (((v29 >> 2) | v29) >> 4)) >> 8) | (v29 >> 2) | v29 | (((v29 >> 2) | v29) >> 4)) >> 16))
        + 1;
    v31 = v30;
    v32 = 12 * v30;
  }
  else
  {
    v32 = 1536;
    v31 = 128;
  }
  operator delete();
  *(_DWORD *)(a2 + 168) = v31;
  v37 = (_DWORD *)sub_220C370(v32, 4, v33, v34, v35, v36);
  v38 = *(unsigned int *)(a2 + 168);
  *(_QWORD *)(a2 + 160) = 0;
  *(_QWORD *)(a2 + 152) = v37;
  for ( i = &v37[3 * v38]; i != v37; v37 += 3 )
    *v37 = -1;
LABEL_6:
  *(_QWORD *)a1 = off_2BBF960;
  *(_QWORD *)(a1 + 176) = a1 + 192;
  *(_QWORD *)(a1 + 184) = 0x1000000000LL;
  if ( *(_DWORD *)(a2 + 184) )
    sub_10BC580((char ***)(a1 + 176), (char ***)(a2 + 176));
  v11 = *(_QWORD *)(a2 + 320);
  v12 = a1 + 320;
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 320));
  v14 = *(_QWORD **)(a2 + 328);
  *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
  *(__m128i *)(a1 + 320) = v13;
  if ( v11 == a2 + 320 )
  {
    v40[0].m128i_i64[0] = a1 + 320;
    v24 = _mm_loadl_epi64(v40);
    *(__m128i *)(a1 + 320) = _mm_unpacklo_epi64(v24, v24);
  }
  else
  {
    *v14 = v12;
    v15 = *(_QWORD *)(a1 + 320);
    v40[0].m128i_i64[0] = a2 + 320;
    v16 = _mm_loadl_epi64(v40);
    *(_QWORD *)(v15 + 8) = v12;
    *(_QWORD *)(a2 + 336) = 0;
    *(__m128i *)(a2 + 320) = _mm_unpacklo_epi64(v16, v16);
  }
  result = *(unsigned int *)(a2 + 344);
  *(_DWORD *)(a1 + 344) = result;
  return result;
}

