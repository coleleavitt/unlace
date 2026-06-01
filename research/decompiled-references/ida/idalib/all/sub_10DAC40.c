__int64 __fastcall sub_10DAC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  char v25; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v26; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v27; // [rsp+18h] [rbp-90h] BYREF
  __m128i v28; // [rsp+28h] [rbp-80h] BYREF
  char v29; // [rsp+40h] [rbp-68h] BYREF
  __m128i v30; // [rsp+48h] [rbp-60h] BYREF
  __m128i v31; // [rsp+58h] [rbp-50h] BYREF
  __m128i v32; // [rsp+68h] [rbp-40h] BYREF

  v27.m128i_i64[0] = a2;
  v27.m128i_i64[1] = a3;
  v28.m128i_i64[0] = a4;
  v26 = 0u;
  v28.m128i_i64[1] = a5;
  v8 = sub_2246AB0(&v27, a4, a5, 0);
  if ( v8 == -1 )
  {
    v8 = v27.m128i_u64[1];
    v11 = v27.m128i_i64[0];
    v10 = 0;
    v12 = 0;
  }
  else
  {
    v9 = v8 + a5;
    if ( v8 + a5 > v27.m128i_i64[1] )
    {
      v9 = v27.m128i_i64[1];
      v10 = 0;
    }
    else
    {
      v10 = v27.m128i_i64[1] - v9;
    }
    v11 = v27.m128i_i64[0];
    v12 = v27.m128i_i64[0] + v9;
    if ( v8 > v27.m128i_i64[1] )
      v8 = v27.m128i_u64[1];
  }
  v26.m128i_i64[0] = v11;
  v27.m128i_i64[0] = v12;
  v27.m128i_i64[1] = v10;
  v26.m128i_i64[1] = v8;
  v30 = 0u;
  v31 = 0u;
  v32.m128i_i64[0] = a4;
  v32.m128i_i64[1] = a5;
  v13 = sub_2246AB0(&v31, a4, a5, 0);
  if ( v13 == -1 )
  {
    v13 = v31.m128i_u64[1];
    v16 = v31.m128i_i64[0];
    v15 = 0;
    v17 = 0;
  }
  else
  {
    v14 = v13 + a5;
    if ( v14 > v31.m128i_i64[1] )
    {
      v14 = v31.m128i_u64[1];
      v15 = 0;
    }
    else
    {
      v15 = v31.m128i_i64[1] - v14;
    }
    v16 = v31.m128i_i64[0];
    v17 = v31.m128i_i64[0] + v14;
    if ( v13 > v31.m128i_i64[1] )
      v13 = v31.m128i_u64[1];
  }
  v30.m128i_i64[1] = v13;
  v18 = _mm_loadu_si128(&v26);
  v19 = _mm_loadu_si128(&v27);
  v30.m128i_i64[0] = v16;
  v20 = _mm_loadu_si128(&v28);
  v31.m128i_i64[0] = v17;
  v31.m128i_i64[1] = v15;
  *(_BYTE *)a1 = v25;
  *(__m128i *)(a1 + 8) = v18;
  *(__m128i *)(a1 + 24) = v19;
  *(__m128i *)(a1 + 40) = v20;
  if ( (char *)v28.m128i_i64[0] == &v25 )
  {
    *(_QWORD *)(a1 + 40) = a1;
    *(_QWORD *)(a1 + 48) = 1;
  }
  v21 = _mm_loadu_si128(&v30);
  v22 = _mm_loadu_si128(&v31);
  v23 = _mm_loadu_si128(&v32);
  *(_BYTE *)(a1 + 56) = v29;
  *(__m128i *)(a1 + 64) = v21;
  *(__m128i *)(a1 + 80) = v22;
  *(__m128i *)(a1 + 96) = v23;
  if ( (char *)v32.m128i_i64[0] == &v29 )
  {
    *(_QWORD *)(a1 + 104) = 1;
    *(_QWORD *)(a1 + 96) = a1 + 56;
  }
  return a1;
}
