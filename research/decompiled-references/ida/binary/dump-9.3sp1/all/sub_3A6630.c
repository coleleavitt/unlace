__int64 *__fastcall sub_3A6630(__int64 *a1, const __m128i *a2)
{
  __int64 v2; // r12
  bool v3; // zf
  __int64 func; // rax
  __int64 v8; // rsi
  __m128i *v9; // rax
  __int64 v10; // r13
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
  __int64 v37; // [rsp+8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+10h] [rbp-58h] BYREF
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int128 v40; // [rsp+20h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-30h]

  v2 = 0;
  v3 = a2[2].m128i_i32[0] == 2;
  v41 = __readfsqword(0x28u);
  if ( v3 )
  {
    func = get_func();
    v8 = a2[1].m128i_i64[0];
    v38 = func;
    v39 = 0;
    v40 = 0;
    sub_14CDC0(&v37, v8, &v38, nullptr, 0);
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
      v2 = (__int64)v9;
      if ( !v37 )
      {
        v36 = a2[1].m128i_i64[0];
        *(_DWORD *)(v2 + 8) = 1;
        *(_QWORD *)v2 = &off_4E6E50;
        *(_QWORD *)(v2 + 16) = v36;
        *(_QWORD *)(v2 + 24) = 0;
        *(_DWORD *)(v2 + 32) = -1;
        goto LABEL_2;
      }
      ++*(_DWORD *)(v37 + 104);
      v11 = _mm_loadl_epi64(a2 + 1);
      v9->m128i_i32[2] = 1;
      v9->m128i_i64[0] = (__int64)&off_4E6E50;
      v9[1] = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v10);
      ++*(_DWORD *)(v10 + 104);
      v9[2].m128i_i32[0] = -1;
      v12 = *(_DWORD *)(v10 + 104) - 1;
      *(_DWORD *)(v10 + 104) = v12;
      if ( v12 )
        goto LABEL_26;
      sub_258970((__int64 *)v10);
      v13 = *(_QWORD *)(v10 + 184);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v10 + 192);
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
              v13 = *(_QWORD *)(v10 + 184);
            }
          }
        }
        *(_QWORD *)(v10 + 192) = 0;
        qfree(v13);
      }
      v18 = *(_QWORD *)(v10 + 160);
      if ( v18 )
      {
        *(_QWORD *)(v10 + 168) = 0;
        qfree(v18);
      }
      v19 = *(_QWORD *)(v10 + 128);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v10 + 136);
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
              v19 = *(_QWORD *)(v10 + 128);
            }
          }
        }
        *(_QWORD *)(v10 + 136) = 0;
        qfree(v19);
      }
      sub_255050(v10 + 16);
      j__qfree(v10);
      v10 = v37;
      if ( v37 )
      {
        v12 = *(_DWORD *)(v37 + 104);
LABEL_26:
        v24 = v12 - 1;
        *(_DWORD *)(v10 + 104) = v24;
        if ( !v24 )
        {
          sub_258970((__int64 *)v10);
          v25 = *(_QWORD *)(v10 + 184);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v10 + 192);
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
                  v25 = *(_QWORD *)(v10 + 184);
                }
              }
            }
            *(_QWORD *)(v10 + 192) = 0;
            qfree(v25);
          }
          v30 = *(_QWORD *)(v10 + 160);
          if ( v30 )
          {
            *(_QWORD *)(v10 + 168) = 0;
            qfree(v30);
          }
          v31 = *(_QWORD *)(v10 + 128);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v10 + 136);
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
                  v31 = *(_QWORD *)(v10 + 128);
                }
              }
            }
            *(_QWORD *)(v10 + 136) = 0;
            qfree(v31);
          }
          sub_255050(v10 + 16);
          j__qfree(v10);
        }
      }
    }
  }
LABEL_2:
  *a1 = v2;
  return a1;
}
