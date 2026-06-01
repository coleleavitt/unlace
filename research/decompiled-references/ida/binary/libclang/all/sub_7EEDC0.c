__int64 __fastcall sub_7EEDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i v7; // xmm0
  __int64 result; // rax
  __int64 v9; // rcx
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
  char *v24; // rbp
  __m128i v25; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v26; // [rsp+40h] [rbp-B8h] BYREF
  int v27; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v28; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-78h]
  __int128 v31; // [rsp+90h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp-48h] BYREF
  __m128i v34; // [rsp+B8h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v25.m128i_i64[1] = a3;
  v25.m128i_i64[0] = a2;
  v4 = sub_7214D0(v25.m128i_i64);
  v7 = _mm_load_si128(&v25);
  v27 = v4;
  result = 1;
  v28 = v7;
  v9 = v7.m128i_i64[0];
  si128 = (__int128)_mm_load_si128((const __m128i *)&v27);
  v26 = v7;
  v11 = (__int128)_mm_load_si128((const __m128i *)&v28.m128i_u64[1]);
  v32 = v29;
  v30 = si128;
  v31 = v11;
  if ( v9 )
  {
    sub_7DE380(a1, v3 + 24, v29, v9, v5, v6, si128, v11, v29);
    v12 = (const __m128i *)&v33;
    v13 = sub_7214D0(v26.m128i_i64);
    v16 = _mm_load_si128(&v26);
    v17 = *(unsigned int *)(a1 + 20);
    v33 = v13;
    v18 = *(unsigned int *)(a1 + 16);
    v19 = *(_QWORD *)(a1 + 8);
    v34 = v16;
    v20 = v18 + 1;
    if ( v17 < v18 + 1 )
    {
      if ( (unsigned __int64)&v33 < v19 || (unsigned __int64)&v33 >= v19 + 40 * v18 )
      {
        sub_25D6060(a1 + 8, a1 + 24, v20, 40);
        v19 = *(_QWORD *)(a1 + 8);
        v18 = *(unsigned int *)(a1 + 16);
      }
      else
      {
        v24 = (char *)&v33 - v19;
        sub_25D6060(a1 + 8, a1 + 24, v20, 40);
        v19 = *(_QWORD *)(a1 + 8);
        v18 = *(unsigned int *)(a1 + 16);
        v12 = (const __m128i *)&v24[v19];
      }
    }
    v21 = (__m128i *)(v19 + 40 * v18);
    *v21 = _mm_loadu_si128(v12);
    v22 = v25.m128i_i64[0];
    v21[1] = _mm_loadu_si128(v12 + 1);
    v21[2].m128i_i64[0] = v12[2].m128i_i64[0];
    v23 = v25.m128i_i64[1];
    ++*(_DWORD *)(a1 + 16);
    result = sub_7EE840((__int64 *)a1, v22, v23, v17, v14, v15);
    --*(_DWORD *)(a1 + 16);
  }
  return result;
}

