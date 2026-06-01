__int64 __fastcall sub_7FBFA0(__int64 a1, __int64 a2)
{
  const __m128i *v3; // rax
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int128 si128; // xmm1
  __int128 v12; // xmm0
  const __m128i *v13; // rbp
  int v14; // eax
  _BOOL8 v15; // r8
  __int64 v16; // r9
  __m128i v17; // xmm0
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __m128i *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // al
  unsigned int v26; // r12d
  __int64 v28; // rsi
  __int64 *v29; // rbp
  _QWORD *v30; // rax
  __int64 v31; // r13
  __int64 v32; // r9
  char *v33; // rbp
  __m128i v34; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int128 v39; // [rsp+80h] [rbp-88h]
  __int128 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v43; // [rsp+B8h] [rbp-50h]

  v3 = (const __m128i *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v3 = (const __m128i *)v3->m128i_i64[0];
  v4 = *(_QWORD *)a1;
  v34 = _mm_unpacklo_epi64(_mm_loadl_epi64(v3), (__m128i)(unsigned __int64)&v3->m128i_u64[1]);
  v5 = sub_7214D0(v34.m128i_i64);
  v9 = _mm_load_si128(&v34);
  v36 = v5;
  v37 = v9;
  v10 = v9.m128i_i64[0];
  si128 = (__int128)_mm_load_si128((const __m128i *)&v36);
  v35 = v9;
  v12 = (__int128)_mm_load_si128((const __m128i *)&v37.m128i_u64[1]);
  v41 = v38;
  v39 = si128;
  v40 = v12;
  if ( v10 )
  {
    sub_7DE380(a1, v4 + 24, v10, v6, v7, v8, si128, v12, v38);
    v13 = (const __m128i *)&v42;
    v14 = sub_7214D0(v35.m128i_i64);
    v17 = _mm_load_si128(&v35);
    v18 = *(unsigned int *)(a1 + 20);
    LODWORD(v42) = v14;
    v19 = *(unsigned int *)(a1 + 16);
    v20 = *(_QWORD *)(a1 + 8);
    v43 = v17;
    v21 = v19 + 1;
    if ( v18 < v19 + 1 )
    {
      if ( (unsigned __int64)&v42 < v20 || (unsigned __int64)&v42 >= v20 + 40 * v19 )
      {
        sub_25D6060(a1 + 8, a1 + 24, v21, 40);
        v20 = *(_QWORD *)(a1 + 8);
        v19 = *(unsigned int *)(a1 + 16);
      }
      else
      {
        v33 = (char *)&v42 - v20;
        sub_25D6060(a1 + 8, a1 + 24, v21, 40);
        v20 = *(_QWORD *)(a1 + 8);
        v19 = *(unsigned int *)(a1 + 16);
        v13 = (const __m128i *)&v33[v20];
      }
    }
    v22 = (__m128i *)(v20 + 40 * v19);
    *v22 = _mm_loadu_si128(v13);
    v23 = v34.m128i_i64[0];
    v22[1] = _mm_loadu_si128(v13 + 1);
    v22[2].m128i_i64[0] = v13[2].m128i_i64[0];
    v24 = v34.m128i_i64[1];
    ++*(_DWORD *)(a1 + 16);
    v25 = sub_7EE840((__int64 *)a1, v23, v24, v18, v15, v16);
    --*(_DWORD *)(a1 + 16);
    if ( !v25 )
      return 0;
  }
  v28 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v28 = sub_79AC10(a2);
  v26 = sub_7E1600((__int64 *)a1, v28);
  if ( !(_BYTE)v26 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v29 = nullptr;
    v30 = sub_79A2B0(a2);
    v31 = *v30 + 8LL * *((unsigned int *)v30 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v29 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v31 != v29 )
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)a1;
        v42 = *v29;
        if ( !(unsigned __int8)sub_7F2380(a1, v42, v42, &v42, (__int64 *)a1, v32) )
          break;
        if ( (__int64 *)v31 == ++v29 )
          return v26;
      }
      return 0;
    }
  }
  return v26;
}

