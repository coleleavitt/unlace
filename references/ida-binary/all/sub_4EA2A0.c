void __fastcall bucket_column_sorting_t__::vfunc_2(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int8 v10; // cl
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r14
  unsigned __int64 v20; // r15
  __int64 *v21; // rsi
  __int128 v22; // xmm0
  __int64 v23; // [rsp+28h] [rbp-58h]
  char v24[16]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v25; // [rsp+40h] [rbp-40h] BYREF

  v6 = 8 * a5;
  v7 = a4[1];
  v8 = *(_QWORD *)(a1 + 12);
  *(_QWORD *)v24 = a2;
  v9 = *a4;
  v10 = *(_BYTE *)(a1 + 20);
  *(_QWORD *)&v24[8] = a3;
  v11 = 8 * v7;
  v25.m128i_i64[0] = v8;
  v25.m128i_i8[8] = v10;
  if ( v6 != v11 )
  {
    v12 = (__int64 *)(v9 + v11);
    v13 = (__int64 *)(v6 + v9);
    v23 = (((v11 - v6) >> 3) + 1) / 2;
    v14 = (__int64 *)sub_4E66F0(v23);
    v19 = v14;
    if ( v14 )
    {
      v20 = v15;
      if ( v23 != v15 )
      {
        v22 = (__int128)_mm_load_si128(&v25);
        sub_4EA1A0(v13, v12, v14, v15, v17, v18, (__m128i)v22, (__int128)_mm_load_si128((const __m128i *)v24), v22);
        goto LABEL_6;
      }
      v21 = &v13[v20];
    }
    else
    {
      v20 = 0;
      v21 = v13;
      if ( v23 )
      {
        sub_4E90F0(
          v13,
          v12,
          v15,
          v16,
          v17,
          v18,
          (__int128)_mm_load_si128((const __m128i *)v24),
          (__int128)_mm_load_si128(&v25));
        goto LABEL_6;
      }
    }
    sub_4EA110(v13, v21, v12, v14, v17, v18, _mm_load_si128(&v25), (__int128)_mm_load_si128((const __m128i *)v24));
LABEL_6:
    operator delete(v19, v20 * 8);
  }
}
