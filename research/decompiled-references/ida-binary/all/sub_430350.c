__int64 __fastcall file_assoc_chooser_t__::vfunc_4(__int64 a1, const char *a2)
{
  __int64 v2; // r14
  _QWORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 i; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __m128i si128; // xmm1
  _QWORD *v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rdi
  __m128i v29[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = sub_426230(a1, a2);
  v5 = sub_417660((__int64)v4);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  v29[0] = v7;
  if ( v6 )
  {
    v25 = (_QWORD *)v5;
    v26 = 0;
    v27 = 0;
    v2 = qalloc_or_throw(240 * v6);
    do
    {
      v28 = v2 + v26;
      ++v27;
      a2 = (const char *)(v26 + *v25);
      v26 += 240;
      sub_41BD40(v28, (__int64)a2);
    }
    while ( v6 != v27 );
  }
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 192);
    if ( v9 )
    {
      v10 = 0;
      for ( i = 0; i != v9; ++i )
      {
        v12 = (__int64 *)(v8 + v10);
        v13 = *(_QWORD *)(v8 + v10 + 216);
        if ( v13 )
        {
          v12[28] = 0;
          *(double *)v7.m128i_i64 = qfree(v13, a2);
        }
        v14 = v12[24];
        if ( v14 )
        {
          v12[25] = 0;
          *(double *)v7.m128i_i64 = qfree(v14, a2, *(double *)v7.m128i_i64);
        }
        v15 = v12[21];
        if ( v15 )
        {
          v12[22] = 0;
          *(double *)v7.m128i_i64 = qfree(v15, a2, *(double *)v7.m128i_i64);
        }
        v16 = v12[18];
        if ( v16 )
        {
          v12[19] = 0;
          *(double *)v7.m128i_i64 = qfree(v16, a2, *(double *)v7.m128i_i64);
        }
        v17 = v12[15];
        if ( v17 )
        {
          v12[16] = 0;
          *(double *)v7.m128i_i64 = qfree(v17, a2, *(double *)v7.m128i_i64);
        }
        v18 = v12[12];
        if ( v18 )
        {
          v12[13] = 0;
          *(double *)v7.m128i_i64 = qfree(v18, a2, *(double *)v7.m128i_i64);
        }
        v19 = v12[9];
        if ( v19 )
        {
          v12[10] = 0;
          *(double *)v7.m128i_i64 = qfree(v19, a2, *(double *)v7.m128i_i64);
        }
        v20 = v12[6];
        if ( v20 )
        {
          v12[7] = 0;
          *(double *)v7.m128i_i64 = qfree(v20, a2, *(double *)v7.m128i_i64);
        }
        v21 = v12[3];
        if ( v21 )
        {
          v12[4] = 0;
          *(double *)v7.m128i_i64 = qfree(v21, a2, *(double *)v7.m128i_i64);
        }
        v22 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          *(double *)v7.m128i_i64 = qfree(v22, a2, *(double *)v7.m128i_i64);
        }
        v8 = *(_QWORD *)(a1 + 184);
        v10 += 240;
      }
    }
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v8, a2);
  }
  si128 = _mm_load_si128(v29);
  *(_QWORD *)(a1 + 184) = v2;
  *(__m128i *)(a1 + 192) = si128;
  return 1;
}
