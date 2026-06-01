__m128i *__fastcall sub_20860C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  const __m128i **v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  const __m128i **v12; // rdi
  __int64 v13; // rcx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rsi
  __m128i si128; // xmm0
  const __m128i **v17; // rbp
  const __m128i **v18; // r13
  const __m128i *v19; // rax
  int v20; // r12d
  unsigned __int8 v21; // dl
  const __m128i **v22; // r14
  __int64 v23; // rdi
  __int64 *v24; // rdx
  __m128i v25; // xmm1
  __int64 v26; // rdx
  __int32 v27; // eax
  int v28; // eax
  const __m128i *v29; // rsi
  unsigned int v30; // eax
  const __m128i **v31; // rcx
  const __m128i *v32; // rdi
  int v33; // r11d
  const __m128i **v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __m128i *v37; // rdx
  unsigned __int64 v38; // rsi
  __m128i v39; // xmm0
  __int64 v40; // [rsp+10h] [rbp-88h]
  const __m128i **v41; // [rsp+18h] [rbp-80h]
  __int32 v42; // [rsp+24h] [rbp-74h] BYREF
  __int64 v43; // [rsp+28h] [rbp-70h] BYREF
  __int64 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  __m128i v46; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+50h] [rbp-48h]
  __int64 v48[8]; // [rsp+58h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(const __m128i ***)a1;
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
    *(_QWORD *)(a1 + 8) = 0;
    v40 = 8 * v8;
    v12 = &v9[v8];
    v13 = 8LL * *(unsigned int *)(a1 + 16);
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
    v17 = v9;
    v18 = v12;
    if ( v12 != v9 )
    {
      v41 = v9;
      do
      {
        v19 = *v17;
        if ( *v17 != (const __m128i *)-8192LL && v19 != (const __m128i *)-4096LL )
        {
          v20 = *(_DWORD *)(a1 + 16);
          if ( !v20 )
          {
            *(_QWORD *)&dword_0 = *v17;
            BUG();
          }
          v21 = v19[-1].m128i_u8[0];
          v22 = *(const __m128i ***)a1;
          if ( (v21 & 2) != 0 )
          {
            v23 = *(_QWORD *)v19[-2].m128i_i64[0];
            v44 = v23;
            v24 = (__int64 *)v19[-2].m128i_i64[0];
          }
          else
          {
            v24 = (__int64 *)((char *)v19->m128i_i64 - 16 - 8LL * ((v21 >> 2) & 0xF));
            v23 = *v24;
            v44 = *v24;
          }
          v25 = _mm_loadu_si128(v19 + 1);
          v45 = v24[1];
          v46 = v25;
          v47 = v19[2].m128i_i64[0];
          v48[0] = v19[2].m128i_i64[1];
          if ( (_BYTE)v47 )
          {
            v26 = v46.m128i_i64[1];
            v27 = v46.m128i_i32[0];
          }
          else
          {
            v26 = 0;
            v27 = 0;
          }
          v42 = v27;
          v43 = v26;
          v28 = sub_2077090(v23, &v45, &v42, &v43, v48);
          v29 = *v17;
          v30 = (v20 - 1) & v28;
          v31 = &v22[v30];
          v32 = *v31;
          if ( *v17 != *v31 && v32 != (const __m128i *)-4096LL )
          {
            v33 = 1;
            v34 = nullptr;
            while ( 1 )
            {
              if ( v34 || v32 != (const __m128i *)-8192LL )
                v31 = v34;
              v30 = (v20 - 1) & (v33 + v30);
              v32 = v22[v30];
              if ( v32 == v29 )
              {
                v31 = &v22[v30];
                goto LABEL_28;
              }
              if ( v32 == (const __m128i *)-4096LL )
                break;
              ++v33;
              v34 = v31;
              v31 = &v22[v30];
            }
            if ( !v31 )
              v31 = &v22[v30];
          }
LABEL_28:
          *v31 = v29;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v17;
      }
      while ( v18 != v17 );
      v9 = v41;
    }
    return (__m128i *)operator delete(v9, v40, 8);
  }
  else
  {
    v35 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v36 = 8 * v35;
    if ( result != (__m128i *)&result->m128i_i8[v36] )
    {
      v37 = result;
      v38 = ((unsigned __int64)(v36 - 8) >> 3) + 1;
      if ( v36 == 8 )
        goto LABEL_40;
      v39 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v37++ = v39;
      while ( &result[v38 >> 1] != v37 );
      result = (__m128i *)((char *)result + 8 * (v38 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v38 & 0xFFFFFFFFFFFFFFFELL) != v38 )
LABEL_40:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
