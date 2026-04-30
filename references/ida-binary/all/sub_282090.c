void __fastcall sub_282090(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 i; // r14
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  const __m128i *v15; // roff
  __m128 v16; // xmm1
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 *v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  void *v22; // rdi
  __m128i v23; // xmm2
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  __m128i v35; // [rsp+10h] [rbp-58h] BYREF
  __int64 v36; // [rsp+20h] [rbp-48h] BYREF
  const __m128i *v37; // [rsp+28h] [rbp-40h]

  v34 = a2;
  v35.m128i_i64[0] = a3;
  v37 = a4;
  v36 = (a3 - 1) / 2;
  if ( a2 >= v36 )
  {
    v5 = a2;
    v6 = (__int64 *)(a1 + 24 * a2);
  }
  else
  {
    for ( i = a2; ; i = v5 )
    {
      v5 = 2 * (i + 1);
      v6 = (__int64 *)(a1 + 48 * (i + 1));
      if ( (int)QT::QtPrivate::compareStrings(
                  v6[2],
                  v6[1],
                  *(_QWORD *)(a1 + 24 * (v5 - 1) + 16),
                  *(_QWORD *)(a1 + 24 * (v5 - 1) + 8),
                  1,
                  v6[1],
                  v33,
                  v34) < 0 )
        v6 = (__int64 *)(a1 + 24 * --v5);
      v7 = (__int64 *)(a1 + 24 * i);
      v8 = *v7;
      *v7 = *v6;
      v9 = v6[1];
      *v6 = v8;
      v10 = v7[1];
      v7[1] = v9;
      v11 = v6[2];
      v6[1] = v10;
      v12 = v7[2];
      v7[2] = v11;
      v13 = v36;
      v6[2] = v12;
      if ( v5 >= v13 )
        break;
    }
  }
  if ( (v35.m128i_i8[0] & 1) == 0 && (v35.m128i_i64[0] - 2) / 2 == v5 )
  {
    v14 = 2 * v5;
    v27 = *v6;
    v5 = 2 * v5 + 1;
    v28 = (__int64 *)(a1 + 24 * v5);
    *v6 = *v28;
    v29 = v28[1];
    *v28 = v27;
    v30 = v6[1];
    v6[1] = v29;
    v31 = v28[2];
    v28[1] = v30;
    v32 = v6[2];
    v6[2] = v31;
    v6 = v28;
    v28[2] = v32;
  }
  else
  {
    v14 = v5 - 1;
  }
  v15 = v37;
  v16 = (__m128)_mm_loadu_si128(v37);
  *v37 = 0;
  v17 = v15[1].m128i_i64[0];
  v15[1].m128i_i64[0] = 0;
  v35 = (__m128i)v16;
  v18 = v14 / 2;
  _mm_storeh_ps((double *)&v36, v16);
  if ( v5 > v34 )
  {
    while ( 1 )
    {
      v19 = (__int64 *)(a1 + 24 * v18);
      v20 = QT::QtPrivate::compareStrings(v19[2], v19[1], v17, v36, 1, v19[1], v33, v34);
      v6 = (__int64 *)(a1 + 24 * v5);
      v21 = *v6;
      if ( v20 >= 0 )
        break;
      v5 = v18;
      *v6 = *v19;
      *v19 = v21;
      v24 = v6[1];
      v6[1] = v19[1];
      v25 = v19[2];
      v19[1] = v24;
      v26 = v6[2];
      v6[2] = v25;
      v19[2] = v26;
      if ( v34 >= v18 )
      {
        v6 = (__int64 *)(a1 + 24 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
  v22 = (void *)*v6;
  v23 = _mm_load_si128(&v35);
  v6[2] = v17;
  *(__m128i *)v6 = v23;
  if ( v22 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v22, 1u) )
      free(v22);
  }
}
