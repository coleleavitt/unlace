__int64 __fastcall sub_7FBD60(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int128 si128; // xmm1
  __int128 v11; // xmm0
  const __m128i *v12; // rbp
  int v13; // eax
  _BOOL8 v14; // r8
  __int64 v15; // r9
  __m128i v16; // xmm0
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __m128i *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  char v24; // al
  unsigned int v25; // r12d
  __int64 v27; // rsi
  __int64 *v28; // rbp
  _QWORD *v29; // rax
  __int64 v30; // r13
  __int64 v31; // r9
  char *v32; // rbp
  __m128i v33; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v34; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int128 v38; // [rsp+80h] [rbp-88h]
  __int128 v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v42; // [rsp+B8h] [rbp-50h]

  v3 = *(_QWORD *)a1;
  v33 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)*(_QWORD *)(a2 + 64)),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 64) + 8LL));
  v4 = sub_7214D0(v33.m128i_i64);
  v8 = _mm_load_si128(&v33);
  v35 = v4;
  v36 = v8;
  v9 = v8.m128i_i64[0];
  si128 = (__int128)_mm_load_si128((const __m128i *)&v35);
  v34 = v8;
  v11 = (__int128)_mm_load_si128((const __m128i *)&v36.m128i_u64[1]);
  v40 = v37;
  v38 = si128;
  v39 = v11;
  if ( v9 )
  {
    sub_7DE380(a1, v3 + 24, v9, v5, v6, v7, si128, v11, v37);
    v12 = (const __m128i *)&v41;
    v13 = sub_7214D0(v34.m128i_i64);
    v16 = _mm_load_si128(&v34);
    v17 = *(unsigned int *)(a1 + 20);
    LODWORD(v41) = v13;
    v18 = *(unsigned int *)(a1 + 16);
    v19 = *(_QWORD *)(a1 + 8);
    v42 = v16;
    v20 = v18 + 1;
    if ( v17 < v18 + 1 )
    {
      if ( (unsigned __int64)&v41 < v19 || (unsigned __int64)&v41 >= v19 + 40 * v18 )
      {
        sub_25D6060(a1 + 8, a1 + 24, v20, 40);
        v19 = *(_QWORD *)(a1 + 8);
        v18 = *(unsigned int *)(a1 + 16);
      }
      else
      {
        v32 = (char *)&v41 - v19;
        sub_25D6060(a1 + 8, a1 + 24, v20, 40);
        v19 = *(_QWORD *)(a1 + 8);
        v18 = *(unsigned int *)(a1 + 16);
        v12 = (const __m128i *)&v32[v19];
      }
    }
    v21 = (__m128i *)(v19 + 40 * v18);
    *v21 = _mm_loadu_si128(v12);
    v22 = v33.m128i_i64[0];
    v21[1] = _mm_loadu_si128(v12 + 1);
    v21[2].m128i_i64[0] = v12[2].m128i_i64[0];
    v23 = v33.m128i_i64[1];
    ++*(_DWORD *)(a1 + 16);
    v24 = sub_7EE840((__int64 *)a1, v22, v23, v17, v14, v15);
    --*(_DWORD *)(a1 + 16);
    if ( !v24 )
      return 0;
  }
  v27 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v27 = sub_79AC10(a2);
  v25 = sub_7E1600((__int64 *)a1, v27);
  if ( !(_BYTE)v25 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v28 = nullptr;
    v29 = sub_79A2B0(a2);
    v30 = *v29 + 8LL * *((unsigned int *)v29 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v28 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v30 != v28 )
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)a1;
        v41 = *v28;
        if ( !(unsigned __int8)sub_7F2380(a1, v41, v41, &v41, (__int64 *)a1, v31) )
          break;
        if ( (__int64 *)v30 == ++v28 )
          return v25;
      }
      return 0;
    }
  }
  return v25;
}

