__m128i *__fastcall sub_2084680(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __m128i *v14; // rcx
  unsigned __int64 v15; // rdi
  __m128i si128; // xmm0
  __int64 *i; // rbx
  __int64 v18; // rax
  int v19; // r13d
  __int64 *v20; // r14
  unsigned __int8 v21; // si
  __int64 *v22; // rsi
  int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 *v26; // rdi
  __int64 v27; // r9
  int v28; // r11d
  __int64 *v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rcx
  __m128i *v32; // rdx
  unsigned __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 *v35; // [rsp+8h] [rbp-70h]
  __int64 v36; // [rsp+10h] [rbp-68h]
  int v37; // [rsp+18h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-60h]
  void *v39; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h] BYREF
  bool v42; // [rsp+38h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (__m128i *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v36 = 8 * v8;
    v13 = 8 * v12;
    v35 = &v9[v8];
    if ( result != (__m128i *)&result->m128i_i8[v13] )
    {
      v14 = result;
      v15 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
      if ( v13 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v14++ = si128;
      while ( v14 != &result[v15 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v15 & 0xFFFFFFFFFFFFFFFELL));
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    for ( i = v9; v35 != i; ++i )
    {
      v18 = *i;
      if ( *i != -8192 && v18 != -4096 )
      {
        v19 = *(_DWORD *)(a1 + 16);
        if ( !v19 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v20 = *(__int64 **)a1;
        v40 = *(_DWORD *)(v18 + 24);
        if ( v40 > 0x40 )
        {
          v38 = v18;
          sub_2205510(&v39);
          v18 = v38;
        }
        else
        {
          v39 = *(void **)(v18 + 16);
        }
        v21 = *(_BYTE *)(v18 - 16);
        if ( (v21 & 2) != 0 )
          v22 = *(__int64 **)(v18 - 32);
        else
          v22 = (__int64 *)(v18 + -16 - 8LL * ((v21 >> 2) & 0xF));
        v41 = *v22;
        v42 = *(_DWORD *)(v18 + 4) != 0;
        v23 = sub_2078D30((__int64)&v39, &v41);
        if ( v40 > 0x40 && v39 )
        {
          v37 = v23;
          operator delete[](v39);
          v23 = v37;
        }
        v24 = *i;
        v25 = (v19 - 1) & v23;
        v26 = &v20[v25];
        v27 = *v26;
        if ( *v26 != *i && v27 != -4096 )
        {
          v28 = 1;
          v29 = nullptr;
          while ( 1 )
          {
            if ( v29 || v27 != -8192 )
              v26 = v29;
            v25 = (v19 - 1) & (v28 + v25);
            v27 = v20[v25];
            if ( v27 == v24 )
            {
              v26 = &v20[v25];
              goto LABEL_30;
            }
            if ( v27 == -4096 )
              break;
            ++v28;
            v29 = v26;
            v26 = &v20[v25];
          }
          if ( !v26 )
            v26 = &v20[v25];
        }
LABEL_30:
        *v26 = v24;
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (__m128i *)operator delete(v9, v36, 8);
  }
  else
  {
    v30 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v31 = 8 * v30;
    if ( result != (__m128i *)&result->m128i_i8[v31] )
    {
      v32 = result;
      v33 = ((unsigned __int64)(v31 - 8) >> 3) + 1;
      if ( v31 == 8 )
        goto LABEL_41;
      v34 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v32++ = v34;
      while ( &result[v33 >> 1] != v32 );
      result = (__m128i *)((char *)result + 8 * (v33 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v33 & 0xFFFFFFFFFFFFFFFELL) != v33 )
LABEL_41:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
