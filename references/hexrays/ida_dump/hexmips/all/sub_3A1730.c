__m128i **__fastcall sub_3A1730(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // r12
  bool v3; // zf
  __int64 func; // rax
  __int64 v8; // rsi
  __m128i *v9; // rax
  __m128i *v10; // r13
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 i; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 j; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 k; // rbp
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 m; // rbp
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i *v37; // [rsp+8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+10h] [rbp-58h] BYREF
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int128 v40; // [rsp+20h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-30h]

  v2 = nullptr;
  v3 = a2[2].m128i_i32[0] == 2;
  v41 = __readfsqword(0x28u);
  if ( v3 )
  {
    func = get_func(a2[1].m128i_i64[1]);
    v8 = a2[1].m128i_i64[0];
    v38 = func;
    v39 = 0;
    v40 = 0;
    sub_148BC0(&v37, v8, &v38, nullptr, 0);
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    v2 = v37;
    if ( v37 )
    {
      v9 = (__m128i *)operator new(0x28u);
      v10 = v37;
      v2 = v9;
      if ( !v37 )
      {
        v36 = a2[1].m128i_i64[0];
        v2->m128i_i32[2] = 1;
        v2->m128i_i64[0] = (__int64)&off_4C7570;
        v2[1].m128i_i64[0] = v36;
        v2[1].m128i_i64[1] = 0;
        v2[2].m128i_i32[0] = -1;
        goto LABEL_2;
      }
      ++v37[6].m128i_i32[2];
      v11 = _mm_loadl_epi64(a2 + 1);
      v9->m128i_i32[2] = 1;
      v9->m128i_i64[0] = (__int64)&off_4C7570;
      v9[1] = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v10);
      ++v10[6].m128i_i32[2];
      v9[2].m128i_i32[0] = -1;
      v12 = v10[6].m128i_i32[2] - 1;
      v10[6].m128i_i32[2] = v12;
      if ( v12 )
        goto LABEL_26;
      sub_2540F0(v10->m128i_i64);
      v13 = v10[11].m128i_i64[1];
      if ( v13 )
      {
        v14 = v10[12].m128i_i64[0];
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v16 = (__int64 *)(v13 + 24 * i);
            v17 = *v16;
            if ( *v16 )
            {
              v16[1] = 0;
              qfree(v17);
              v13 = v10[11].m128i_i64[1];
            }
          }
        }
        v10[12].m128i_i64[0] = 0;
        qfree(v13);
      }
      v18 = v10[10].m128i_i64[0];
      if ( v18 )
      {
        v10[10].m128i_i64[1] = 0;
        qfree(v18);
      }
      v19 = v10[8].m128i_i64[0];
      if ( v19 )
      {
        v20 = v10[8].m128i_i64[1];
        if ( v20 )
        {
          for ( j = 0; j != v20; ++j )
          {
            v22 = (__int64 *)(v19 + 32 * j);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              qfree(v23);
              v19 = v10[8].m128i_i64[0];
            }
          }
        }
        v10[8].m128i_i64[1] = 0;
        qfree(v19);
      }
      sub_2507D0((__int64)v10[1].m128i_i64);
      j__qfree(v10);
      v10 = v37;
      if ( v37 )
      {
        v12 = v37[6].m128i_i32[2];
LABEL_26:
        v24 = v12 - 1;
        v10[6].m128i_i32[2] = v24;
        if ( !v24 )
        {
          sub_2540F0(v10->m128i_i64);
          v25 = v10[11].m128i_i64[1];
          if ( v25 )
          {
            v26 = v10[12].m128i_i64[0];
            if ( v26 )
            {
              for ( k = 0; k != v26; ++k )
              {
                v28 = (__int64 *)(v25 + 24 * k);
                v29 = *v28;
                if ( *v28 )
                {
                  v28[1] = 0;
                  qfree(v29);
                  v25 = v10[11].m128i_i64[1];
                }
              }
            }
            v10[12].m128i_i64[0] = 0;
            qfree(v25);
          }
          v30 = v10[10].m128i_i64[0];
          if ( v30 )
          {
            v10[10].m128i_i64[1] = 0;
            qfree(v30);
          }
          v31 = v10[8].m128i_i64[0];
          if ( v31 )
          {
            v32 = v10[8].m128i_i64[1];
            if ( v32 )
            {
              for ( m = 0; m != v32; ++m )
              {
                v34 = (__int64 *)(v31 + 32 * m);
                v35 = *v34;
                if ( *v34 )
                {
                  v34[1] = 0;
                  qfree(v35);
                  v31 = v10[8].m128i_i64[0];
                }
              }
            }
            v10[8].m128i_i64[1] = 0;
            qfree(v31);
          }
          sub_2507D0((__int64)v10[1].m128i_i64);
          j__qfree(v10);
        }
      }
    }
  }
LABEL_2:
  *a1 = v2;
  return a1;
}
