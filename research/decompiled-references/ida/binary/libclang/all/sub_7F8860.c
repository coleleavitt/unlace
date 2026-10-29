__int64 __fastcall sub_7F8860(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __m128i v6; // xmm0
  _BOOL8 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int128 si128; // xmm1
  __int128 v18; // xmm0
  const __m128i *v19; // rbx
  int v20; // eax
  _BOOL8 v21; // r8
  __int64 v22; // r9
  __m128i v23; // xmm0
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __m128i *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  char v31; // al
  char *v33; // rbx
  __m128i v34; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int128 v39; // [rsp+80h] [rbp-88h]
  __int128 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  int v42; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v43; // [rsp+B8h] [rbp-50h]

  v4 = a3 + 16;
  v5 = sub_B1AFD0(a2[2].m128i_i64[0]);
  v6 = _mm_loadl_epi64(a2 + 2);
  v7 = v4 != 0;
  v8 = v5;
  v9 = v4 - v7;
  v10 = *(_QWORD *)a1;
  v34 = _mm_unpacklo_epi64(v6, (__m128i)(v8 * (v7 + v9 / v8)));
  v11 = sub_7214D0(v34.m128i_i64);
  v15 = _mm_load_si128(&v34);
  v36 = v11;
  v37 = v15;
  v16 = v15.m128i_i64[0];
  si128 = (__int128)_mm_load_si128((const __m128i *)&v36);
  v35 = v15;
  v18 = (__int128)_mm_load_si128((const __m128i *)&v37.m128i_u64[1]);
  v41 = v38;
  v39 = si128;
  v40 = v18;
  if ( !v16 )
    return sub_7EBA80((__int64 *)a1, *(_QWORD *)(a3 + 8));
  sub_7DE380(a1, v10 + 24, v16, v12, v13, v14, si128, v18, v38);
  v19 = (const __m128i *)&v42;
  v20 = sub_7214D0(v35.m128i_i64);
  v23 = _mm_load_si128(&v35);
  v24 = *(unsigned int *)(a1 + 20);
  v42 = v20;
  v25 = *(unsigned int *)(a1 + 16);
  v26 = *(_QWORD *)(a1 + 8);
  v43 = v23;
  v27 = v25 + 1;
  if ( v24 < v25 + 1 )
  {
    if ( (unsigned __int64)&v42 < v26 || (unsigned __int64)&v42 >= v26 + 40 * v25 )
    {
      sub_25D6060(a1 + 8, a1 + 24, v27, 40);
      v26 = *(_QWORD *)(a1 + 8);
      v25 = *(unsigned int *)(a1 + 16);
    }
    else
    {
      v33 = (char *)&v42 - v26;
      sub_25D6060(a1 + 8, a1 + 24, v27, 40);
      v26 = *(_QWORD *)(a1 + 8);
      v25 = *(unsigned int *)(a1 + 16);
      v19 = (const __m128i *)&v33[v26];
    }
  }
  v28 = (__m128i *)(v26 + 40 * v25);
  *v28 = _mm_loadu_si128(v19);
  v29 = v34.m128i_i64[0];
  v28[1] = _mm_loadu_si128(v19 + 1);
  v28[2].m128i_i64[0] = v19[2].m128i_i64[0];
  v30 = v34.m128i_i64[1];
  ++*(_DWORD *)(a1 + 16);
  v31 = sub_7EE840((__int64 *)a1, v29, v30, v24, v21, v22);
  --*(_DWORD *)(a1 + 16);
  if ( v31 )
    return sub_7EBA80((__int64 *)a1, *(_QWORD *)(a3 + 8));
  else
    return 0;
}

