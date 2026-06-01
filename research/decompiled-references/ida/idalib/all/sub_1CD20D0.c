__int64 __fastcall sub_1CD20D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int *v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rsi
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r15
  __m128i *v29; // rcx
  const __m128i *v30; // roff
  unsigned __int64 v31; // rdx
  __m128i *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // [rsp+8h] [rbp-220h]
  __int64 v37; // [rsp+10h] [rbp-218h]
  unsigned int v38; // [rsp+18h] [rbp-210h]
  __int64 v39; // [rsp+20h] [rbp-208h]
  unsigned int v40; // [rsp+30h] [rbp-1F8h]
  _BYTE *v41; // [rsp+30h] [rbp-1F8h]
  unsigned int v43; // [rsp+3Ch] [rbp-1ECh]
  __m128i v44; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-1B8h]
  __int64 v46[4]; // [rsp+80h] [rbp-1A8h] BYREF
  __m128i v47; // [rsp+A0h] [rbp-188h] BYREF
  void *v48[2]; // [rsp+B0h] [rbp-178h]
  __int128 v49; // [rsp+C0h] [rbp-168h]
  void *ptr; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-150h]
  _BYTE v52[256]; // [rsp+E0h] [rbp-148h] BYREF
  unsigned __int64 v53; // [rsp+1E0h] [rbp-48h]

  v12 = a1;
  ptr = *(void **)(a4 + 48);
  if ( a2 != sub_F5C3B0((__int64 *)&ptr) || (*(_BYTE *)(a2 + 18) & 0x18) != 0 )
  {
    v13 = (__int64 *)(*(_QWORD *)(a4 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a4 + 56) & 4) != 0 )
      v13 = (__int64 *)v13[4];
    v14 = *v13;
    v46[1] = (__int64)(v13 + 1);
    v46[0] = v14;
    v15 = sub_F6CCB0(v46, a7);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v15, 0x1503u, 0);
    v16 = (__int64 *)(*(_QWORD *)(a4 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a4 + 56) & 4) != 0 )
      v16 = (__int64 *)v16[4];
    v17 = *v16;
    v47.m128i_i64[1] = (__int64)(v16 + 1);
    v47.m128i_i64[0] = v17;
    v44.m128i_i32[1] = sub_F6CE20(v47.m128i_i64);
    v44.m128i_i32[0] = sub_F6CCB0(v47.m128i_i64, a7);
    sub_1587DB0((__int64)&ptr, v44.m128i_i64);
    sub_15F7200(&ptr);
    return 1;
  }
  v19 = sub_190BDA0(a1, a5, *(_QWORD *)(a5 + 48), 0, *(_DWORD *)(a5 + 24), 0, *(double *)a7.m128_u64, a8);
  if ( !v19 )
    return 1;
  v38 = *(_DWORD *)(a5 + 24);
  v20 = sub_1E5FBF0(a1, v19, 1);
  v21 = *(_QWORD *)(a3 + 8);
  if ( v21 )
  {
    v22 = *(unsigned int **)(v21 + 64);
    if ( v22 )
    {
      v40 = v22[1];
      v43 = *v22;
    }
    else
    {
      v40 = 0;
      v43 = 0;
    }
    v37 = *(_QWORD *)(v21 + 48);
    v36 = *(_QWORD *)(v21 + 56);
  }
  else
  {
    v37 = 0;
    v36 = 0;
    v43 = 0;
    v40 = 0;
  }
  v23 = _mm_loadu_si128((const __m128i *)(v21 + 24));
  v39 = *(_QWORD *)(v21 + 8);
  v24 = *(_QWORD *)v21;
  v45 = *(_QWORD *)(v21 + 40);
  ptr = v52;
  v51 = 0x800000000LL;
  v44 = v23;
  v53 = 0;
  sub_F1D250((__int64)v46, v20, 0, 0);
  sub_1D3AAD0(&v47, a1, v46, 0, v38, 0);
  sub_17429A0((__int64)&ptr, &v47);
  v25 = *(_DWORD *)(a2 + 20);
  v53 = __PAIR64__(v40, v43);
  if ( v25 )
  {
    v26 = (unsigned int)v51;
    v27 = 16;
    v28 = 32LL * (unsigned int)(v25 - 1) + 48;
    do
    {
      v29 = &v47;
      v30 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 64LL) + v27);
      a8 = (__m128)_mm_loadu_si128(v30);
      v47 = (__m128i)a8;
      v31 = v26 + 1;
      v32 = (__m128i *)((char *)ptr + 32 * v26);
      *(__m128i *)v48 = _mm_loadu_si128(v30 + 1);
      if ( v31 > HIDWORD(v51) )
      {
        if ( ptr > &v47 || v32 <= &v47 )
        {
          sub_2237220(&ptr, v52, v31, 32);
          v29 = &v47;
          v32 = (__m128i *)((char *)ptr + 32 * (unsigned int)v51);
        }
        else
        {
          v41 = ptr;
          sub_2237220(&ptr, v52, v31, 32);
          v29 = (__m128i *)((char *)ptr + (char *)&v47 - v41);
          v32 = (__m128i *)((char *)ptr + 32 * (unsigned int)v51);
        }
      }
      v27 += 32;
      *v32 = _mm_loadu_si128(v29);
      v32[1] = _mm_loadu_si128(v29 + 1);
      v26 = (unsigned int)(v51 + 1);
      LODWORD(v51) = v51 + 1;
    }
    while ( v27 != v28 );
    v12 = a1;
  }
  v47 = 0;
  *(_OWORD *)v48 = 0;
  v49 = 0;
  sub_15AB8B0((__int64)&v47, v24, v39);
  v33 = v37;
  if ( !v37 )
    v33 = v36;
  v34 = sub_1CD12A0(v12, (__int64)&v47, 0, (__int64)&v44, v33, v36, 0.0, a8, (__int64)&ptr);
  v35 = v34;
  if ( v34 != 1 && a6 )
    v35 = sub_1E4D400(v12, 0, 0, (unsigned int)v34 & 0xFFFFFFFE, 19, a6, 0, 0, 0);
  if ( HIDWORD(v48[1]) )
    free(v48[0]);
  if ( ptr != v52 )
    free(ptr);
  if ( v35 <= 1 )
    return 1;
  *(_QWORD *)(a4 + 16LL * *(unsigned int *)(a4 + 84) + 88) = v35 & 0xFFFFFFFFFFFFFFFELL;
  return 0;
}
