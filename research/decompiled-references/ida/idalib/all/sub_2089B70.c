__m128i *__fastcall sub_2089B70(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 *v13; // r13
  __int64 v14; // rcx
  __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  __m128i si128; // xmm0
  __int64 *i; // r15
  __int64 v19; // rax
  int v20; // r14d
  unsigned __int8 v21; // si
  __int64 *v22; // rbp
  __int64 *v23; // rax
  int v24; // eax
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 *v27; // rsi
  __int64 v28; // r9
  int v29; // r11d
  __int64 *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rcx
  __m128i *v33; // rdx
  unsigned __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h]
  __int64 v38[8]; // [rsp+18h] [rbp-40h] BYREF

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
    v13 = &v9[v8];
    v14 = 8 * v12;
    if ( result != (__m128i *)&result->m128i_i8[v14] )
    {
      v15 = result;
      v16 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
      if ( v14 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v15++ = si128;
      while ( v15 != &result[v16 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    for ( i = v9; v13 != i; ++i )
    {
      v19 = *i;
      if ( *i != -8192 && v19 != -4096 )
      {
        v20 = *(_DWORD *)(a1 + 16);
        if ( !v20 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v21 = *(_BYTE *)(v19 - 16);
        v22 = *(__int64 **)a1;
        if ( (v21 & 2) != 0 )
          v23 = *(__int64 **)(v19 - 32);
        else
          v23 = (__int64 *)(-16 - 8LL * ((v21 >> 2) & 0xF) + v19);
        v37 = *v23;
        v38[0] = v23[1];
        v24 = sub_2070640(v37, v38);
        v25 = *i;
        v26 = (v20 - 1) & v24;
        v27 = &v22[v26];
        v28 = *v27;
        if ( *v27 != *i && v28 != -4096 )
        {
          v29 = 1;
          v30 = nullptr;
          while ( 1 )
          {
            if ( v28 != -8192 || v30 )
              v27 = v30;
            v26 = (v20 - 1) & (v29 + v26);
            v28 = v22[v26];
            if ( v28 == v25 )
            {
              v27 = &v22[v26];
              goto LABEL_25;
            }
            if ( v28 == -4096 )
              break;
            ++v29;
            v30 = v27;
            v27 = &v22[v26];
          }
          if ( !v27 )
            v27 = &v22[v26];
        }
LABEL_25:
        *v27 = v25;
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (__m128i *)operator delete(v9, v36, 8);
  }
  else
  {
    v31 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v32 = 8 * v31;
    if ( result != (__m128i *)&result->m128i_i8[v32] )
    {
      v33 = result;
      v34 = ((unsigned __int64)(v32 - 8) >> 3) + 1;
      if ( v32 == 8 )
        goto LABEL_35;
      v35 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v33++ = v35;
      while ( &result[v34 >> 1] != v33 );
      result = (__m128i *)((char *)result + 8 * (v34 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v34 & 0xFFFFFFFFFFFFFFFELL) != v34 )
LABEL_35:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
