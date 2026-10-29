__int64 __fastcall sub_19476F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 si128, __m128 a6)
{
  void **v10; // rax
  __int64 v11; // rbx
  __int64 v13; // r14
  void **v14; // rbp
  unsigned __int16 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int16 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i v35[4]; // [rsp+0h] [rbp-48h] BYREF

  v10 = sub_1946CC0(a1, *(_QWORD *)(a3 + 32), si128, a6);
  if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v13 = *a1;
    v14 = v10;
    sub_18C79E0(*a1, 4, 4);
    v15 = *(unsigned __int16 **)(a4 + 16);
    if ( !v15 )
      v15 = *(unsigned __int16 **)(a3 + 40);
    v16 = *(_QWORD *)(a4 + 24);
    if ( !v16 )
      v16 = *(_QWORD *)(a3 + 48);
    v35[0].m128i_i64[0] = v16;
    v17 = sub_1944E10(a1, v15, si128, a6);
    v20 = v17;
    if ( v17 == 1 )
      goto LABEL_13;
    v21 = (unsigned __int16 *)v35[0].m128i_i64[0];
    if ( v17 )
    {
      v29 = sub_1914520(
              *a1,
              v17 & 0xFFFFFFFFFFFFFFFELL,
              v17 & 0xFFFFFFFFFFFFFFFELL,
              v35[0].m128i_i64[0],
              v18,
              v19,
              si128,
              a6);
      v21 = (unsigned __int16 *)v35[0].m128i_i64[0];
      v20 = v29;
      if ( v29 == 1 )
        goto LABEL_13;
    }
    v35[0].m128i_i64[0] = v20;
    v22 = sub_1944E10(a1, v21, si128, a6);
    if ( v22 == 1 )
      goto LABEL_13;
    v26 = *a1;
    v27 = v35[0].m128i_i64[0];
    if ( v22 )
    {
      v28 = sub_1914520(v26, v22 & 0xFFFFFFFFFFFFFFFELL, v35[0].m128i_u64[0], v23, v24, v25, si128, a6);
      if ( v28 == 1 )
        goto LABEL_13;
      v26 = *a1;
      v27 = v35[0].m128i_i64[0];
      v30 = v28 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v30 = 0;
    }
    v31 = *(unsigned int *)(a3 + 56);
    v35[0].m128i_i64[0] = v27 & 0xFFFFFFFFFFFFFFFELL;
    v32 = sub_1E71AF0(v26, v14, v27 & 0xFFFFFFFFFFFFFFFELL, v30, v31);
    v11 = v32;
    if ( (v32 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v35[0].m128i_i64[0] = v30;
      v35[0] = (__m128i)_mm_loadh_ps((const double *)v35[0].m128i_i64);
      sub_1EA6140(a2, v32, 32, 8);
      si128 = (__m128)_mm_load_si128(v35);
      *(_DWORD *)v33 = *(_DWORD *)a4;
      v34 = *(_QWORD *)(a4 + 4);
      *(__m128 *)(v33 + 16) = si128;
      *(_QWORD *)(v33 + 4) = v34;
      goto LABEL_14;
    }
LABEL_13:
    v11 = 0;
LABEL_14:
    sub_190D5E0(v13, si128);
    return v11;
  }
  return 0;
}
