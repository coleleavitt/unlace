__int64 __fastcall sub_631ED0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        double a6,
        double a7,
        __m128 a8)
{
  unsigned __int8 v12; // al
  __int64 v13; // rbp
  __m128i v14; // xmm1
  int v15; // r15d
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  __int64 result; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __m128i v34; // [rsp+10h] [rbp-68h] BYREF
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF

  v12 = sub_64AF30(a1[1]);
  v13 = *a1;
  v14 = (__m128i)(unsigned __int64)*a1;
  v15 = *(_DWORD *)(*a1 + 712);
  *(_DWORD *)(*a1 + 712) = v12;
  v16 = _mm_unpacklo_epi64((__m128i)a3, v14);
  v34 = v16;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v17 = a1[1];
  v36 = v13;
  sub_64B4C0(&v37, v17, a2, 1);
  v22 = v37;
  v37 = 0;
  v35 = v22;
  if ( a2 != v22 && v34.m128i_i64[0] )
  {
    v23 = sub_15DE060(*a1, v22, v18, v19, v20);
    v24 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    v25 = v34.m128i_i64[0];
    if ( v34.m128i_i64[0] )
    {
      v26 = v34.m128i_i64[1];
      v27 = (*(_DWORD *)(v34.m128i_i64[0] + 8))-- == 1;
      if ( v27 )
        sub_15D7BC0(v26, v25);
    }
    v34.m128i_i64[0] = v24;
  }
  sub_1440730((_DWORD)a1 + 408, (unsigned int)&v35, (unsigned int)&v34, v19, v20, v21);
  result = sub_631CC0(a1, v35, v34.m128i_i64[0], a4, a5, *(double *)v16.m128i_i64, *(double *)v14.m128i_i64, a8);
  v29 = v35;
  if ( v35 )
  {
    v30 = v36;
    v27 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v27 )
      result = sub_15D7BC0(v30, v29);
  }
  v31 = v34.m128i_i64[0];
  if ( v34.m128i_i64[0] )
  {
    v32 = v34.m128i_i64[1];
    v27 = (*(_DWORD *)(v34.m128i_i64[0] + 8))-- == 1;
    if ( v27 )
      result = sub_15D7BC0(v32, v31);
  }
  *(_DWORD *)(v13 + 712) = v15;
  return result;
}

