unsigned __int64 __fastcall folder_data_t__::vfunc_7(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v6; // rsi
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rdx
  const char *v10; // rsi
  __int64 v11; // rcx
  __m128 v12; // xmm0
  unsigned __int64 v14; // rax
  __int64 *v15; // r13
  __int64 i; // rbx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbp
  char v25; // r12
  __int64 v26; // [rsp+10h] [rbp-78h] BYREF
  __m128i v27; // [rsp+18h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v30 = __readfsqword(0x28u);
  v27 = 0;
  v6 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  if ( v4 )
  {
    v26 = qvector_reserve(&v26, 0, v4, 9);
    v6 = v26;
    v14 = *(_QWORD *)(a2 + 8);
    if ( *((_QWORD *)&v29 + 1) < v14 )
    {
      v28 = qvector_reserve(&v28, v28, *(_QWORD *)(a2 + 8), 8);
      v6 = v26;
      v14 = *(_QWORD *)(a2 + 8);
    }
    v15 = *(__int64 **)a2;
    v3 = v27.m128i_u64[1];
    v4 = v27.m128i_i64[0];
    for ( i = *(_QWORD *)a2 + 8 * v14; (__int64 *)i != v15; *(_QWORD *)&v29 = v29 + 1 )
    {
      v22 = *v15;
      v23 = *(_QWORD *)(a1 + 8) + 9 * *v15;
      v24 = *(_QWORD *)v23;
      v25 = *(_BYTE *)(v23 + 8);
      if ( v3 < v4 + 1 )
      {
        v26 = qvector_reserve(&v26, v6, v4 + 1, 9);
        v4 = v27.m128i_i64[0];
        v6 = v26;
      }
      v17 = v6 + 9 * v4;
      *(_QWORD *)v17 = v24;
      v18 = v28;
      *(_BYTE *)(v17 + 8) = v25;
      v19 = *(_QWORD *)(a1 + 32);
      ++v27.m128i_i64[0];
      v20 = *(_QWORD *)(v19 + 8 * v22);
      v21 = v29;
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
      {
        v28 = qvector_reserve(&v28, v18, v29 + 1, 8);
        v18 = v28;
        v21 = v29;
      }
      *(_QWORD *)(v18 + 8 * v21) = v20;
      ++v15;
      v6 = v26;
      v3 = v27.m128i_u64[1];
      v4 = v27.m128i_i64[0];
    }
  }
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 8) = v6;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = (const char *)v28;
  *(_QWORD *)(a1 + 24) = v3;
  v27 = v7;
  v11 = *(_QWORD *)(a1 + 48);
  v12 = _mm_loadh_ps((const double *)&v29 + 1);
  v26 = v8;
  *(_QWORD *)(a1 + 32) = v10;
  v28 = v9;
  *((_QWORD *)&v29 + 1) = v11;
  *(__m128 *)(a1 + 40) = v12;
  if ( v9 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v9, v10);
    v8 = v26;
  }
  if ( v8 )
  {
    v27.m128i_i64[0] = 0;
    qfree(v8, v10);
  }
  return v30 - __readfsqword(0x28u);
}
