__int64 __fastcall sub_14A1670(__int64 a1, __int64 a2, char a3, char a4)
{
  char v4; // r13
  char v5; // r12
  char *v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  char *v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  const void *v23; // rsi
  __int64 v24; // r15
  __int64 *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // r12
  size_t v31; // rdx
  __m128i v32[4]; // [rsp+8h] [rbp-40h] BYREF

  v4 = a3 & 1;
  v5 = 2 * (a4 & 1);
  v6 = (char *)operator new(0x30u);
  v7 = *v6;
  v8 = *(_QWORD *)(a1 + 1936) - 8LL;
  *((_QWORD *)v6 + 1) = a2;
  *v6 = v5 | v4 | v7 & 0xFC;
  *((_QWORD *)v6 + 2) = v6 + 32;
  *((_QWORD *)v6 + 3) = 0x200000000LL;
  v9 = *(_QWORD **)(a1 + 1920);
  if ( v9 == (_QWORD *)v8 )
  {
    v12 = *(char **)(a1 + 1944);
    v13 = *(_QWORD *)(a1 + 1872);
    v14 = *(_QWORD *)(a1 + 1880);
    if ( v14 - ((__int64)&v12[-v13] >> 3) <= 1 )
    {
      v17 = *(char **)(a1 + 1912);
      v18 = (v12 - v17) >> 3;
      v19 = v18 + 2;
      v20 = v18 + 1;
      if ( v14 > 2 * (v18 + 2) )
      {
        v30 = v12 + 8;
        v27 = v20;
        v25 = (__int64 *)(v13 + 8 * ((v14 - v19) >> 1));
        v31 = v30 - v17;
        if ( v17 <= (char *)v25 )
        {
          if ( v30 != v17 )
            memmove((char *)v25 + v27 * 8 - v31, v17, v31);
        }
        else if ( v30 != v17 )
        {
          memmove(v25, v17, v31);
        }
      }
      else
      {
        if ( v14 )
        {
          v21 = 2 * v14 + 2;
          if ( v21 > 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
        }
        else
        {
          v21 = 3;
        }
        v22 = operator new(8 * v21);
        v23 = *(const void **)(a1 + 1912);
        v24 = v22;
        v25 = (__int64 *)(v22 + 8 * ((v21 - v19) >> 1));
        v26 = *(_QWORD *)(a1 + 1944) + 8LL;
        if ( (const void *)v26 != v23 )
          memmove(v25, v23, v26 - (_QWORD)v23);
        v27 = v20;
        operator delete(*(void **)(a1 + 1872));
        *(_QWORD *)(a1 + 1872) = v24;
        *(_QWORD *)(a1 + 1880) = v21;
      }
      v28 = *v25;
      v12 = (char *)&v25[v27 - 1];
      *(_QWORD *)(a1 + 1912) = v25;
      *(_QWORD *)(a1 + 1944) = v12;
      v32[0].m128i_i64[0] = v28 + 512;
      *(__m128 *)(a1 + 1896) = _mm_loadh_ps((const double *)v32[0].m128i_i64);
      v29 = *(_QWORD *)v12;
      *(_QWORD *)(a1 + 1928) = *(_QWORD *)v12;
      *(_QWORD *)(a1 + 1936) = v29 + 512;
    }
    *((_QWORD *)v12 + 1) = operator new(0x200u);
    **(_QWORD **)(a1 + 1920) = v6;
    v15 = *(_QWORD *)(a1 + 1944);
    v32[0].m128i_i64[0] = *(_QWORD *)(v15 + 8);
    v16 = _mm_loadl_epi64(v32);
    *(__m128i *)(a1 + 1920) = _mm_unpacklo_epi64(v16, v16);
    v32[0].m128i_i64[0] = v15 + 8;
    *(__m128 *)(a1 + 1936) = _mm_loadh_ps((const double *)v32[0].m128i_i64);
  }
  else
  {
    *v9 = v6;
    *(_QWORD *)(a1 + 1920) = v9 + 1;
  }
  v10 = *(_QWORD *)(a1 + 96);
  ++*(_DWORD *)(v10 + 15680);
  result = *(_QWORD *)(v10 + 512);
  *(_QWORD *)(v10 + 512) = 0;
  return result;
}
