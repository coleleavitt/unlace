__int64 __fastcall sub_7EF1F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __m128i v8; // xmm3
  __int64 v9; // rsi
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __m128i v12; // xmm3
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // xmm0_8
  const __m128i *v18; // r13
  __m128i *v19; // rax
  int v20; // edx
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  char *v24; // r13
  __m128i v25; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __m128i v27; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int128 v30; // [rsp+80h] [rbp-88h]
  __int128 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v34; // [rsp+B8h] [rbp-50h]

  result = 1;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a3);
  v9 = *(_QWORD *)a1;
  v28.m128i_i64[0] = a3;
  v10 = (__int128)_mm_load_si128(&v28);
  v27.m128i_i64[1] = a2;
  v26 = a3;
  v27.m128i_i32[0] = 5;
  v11 = (__int128)_mm_load_si128(&v27);
  v32 = v29;
  v25 = v8;
  v30 = v11;
  v31 = v10;
  if ( a2 )
  {
    sub_7DE380(a1, v9 + 24, v29, a4, a5, a6, v11, v10, v29);
    v12 = _mm_load_si128(&v25);
    v13 = *(unsigned int *)(a1 + 16);
    LODWORD(v33) = 5;
    v14 = *(unsigned int *)(a1 + 20);
    v15 = *(_QWORD *)(a1 + 8);
    v34 = v12;
    v16 = v13 + 1;
    v17 = v26;
    v18 = (const __m128i *)&v33;
    if ( v14 >= v13 + 1 )
      goto LABEL_3;
    if ( (unsigned __int64)&v33 < v15 )
    {
      v25.m128i_i64[0] = v26;
    }
    else
    {
      v25.m128i_i64[0] = v26;
      if ( (unsigned __int64)&v33 < v15 + 40 * v13 )
      {
        v24 = (char *)&v33 - v15;
        sub_25D6060(a1 + 8, a1 + 24, v16, 40);
        v15 = *(_QWORD *)(a1 + 8);
        v13 = *(unsigned int *)(a1 + 16);
        v17 = v25.m128i_i64[0];
        v18 = (const __m128i *)&v24[v15];
        goto LABEL_3;
      }
    }
    sub_25D6060(a1 + 8, a1 + 24, v16, 40);
    v15 = *(_QWORD *)(a1 + 8);
    v13 = *(unsigned int *)(a1 + 16);
    v17 = v25.m128i_i64[0];
LABEL_3:
    v19 = (__m128i *)(v15 + 40 * v13);
    *v19 = _mm_loadu_si128(v18);
    v19[1] = _mm_loadu_si128(v18 + 1);
    v19[2].m128i_i64[0] = v18[2].m128i_i64[0];
    v20 = *(_DWORD *)(a1 + 16);
    v33 = a2;
    v34.m128i_i64[0] = v17;
    *(_DWORD *)(a1 + 16) = v20 + 1;
    if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      result = sub_7EF1F0(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL, v17);
      if ( !(_BYTE)result )
      {
LABEL_11:
        v21 = *(_DWORD *)(a1 + 16) - 1;
        goto LABEL_6;
      }
      if ( (unsigned int)sub_A7AE10(v33) - 3 > 1 )
        goto LABEL_5;
    }
    else if ( (unsigned int)sub_A7AE10(a2) - 3 > 1 )
    {
LABEL_5:
      v21 = *(_DWORD *)(a1 + 16) - 1;
      result = 1;
LABEL_6:
      *(_DWORD *)(a1 + 16) = v21;
      return result;
    }
    v22 = sub_A7BB80(&v33);
    result = sub_7EEDC0(a1, v22, v23);
    goto LABEL_11;
  }
  return result;
}

