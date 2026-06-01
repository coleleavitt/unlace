unsigned __int64 __fastcall sub_48A5A0(
        __int64 *a1,
        __int64 *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v9; // rdx
  const char *v12; // rdx
  __int64 v13; // rsi
  __m128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __int64 v19; // r9
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  const char *v36; // rdx
  __int64 v37; // rsi
  __int128 v38; // kr00_16
  __int128 v39; // [rsp+8h] [rbp-C0h]
  __int128 v40; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+40h] [rbp-88h] BYREF
  __m128i v43; // [rsp+48h] [rbp-80h] BYREF
  __int64 v44; // [rsp+58h] [rbp-70h] BYREF
  __m128i v45; // [rsp+60h] [rbp-68h] BYREF
  __m128 v46; // [rsp+70h] [rbp-58h]
  char v47; // [rsp+80h] [rbp-48h]
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 64) )
  {
    v9 = a1[1];
    v43 = 0;
    v45 = 0;
    v42 = 0;
    v44 = 0;
    v47 = 0;
    v46 = (__m128)-1LL;
    if ( v9 )
    {
      v42 = qvector_reserve(&v42, 0, v9, 40);
      v29 = *a1 + 40 * a1[1];
      if ( *a1 != v29 )
      {
        v30 = *a1;
        do
        {
          v36 = &s1;
          if ( *(_QWORD *)(v30 + 8) )
            v36 = *(const char **)v30;
          v37 = *a2;
          v40 = -1;
          dirtree_make_cursor(&v40, v37, v36);
          v38 = v40;
          if ( (_QWORD)v40 != -1 || !*((_QWORD *)&v40 + 1) )
          {
            v31 = v43.m128i_i64[0];
            v32 = v42;
            if ( v43.m128i_i64[1] < (unsigned __int64)(v43.m128i_i64[0] + 1) )
            {
              v39 = v40;
              v42 = qvector_reserve(&v42, v42, v43.m128i_i64[0] + 1, 40);
              v31 = v43.m128i_i64[0];
              v32 = v42;
              v38 = v39;
            }
            v33 = v32 + 40 * v31;
            *(_OWORD *)(v33 + 8) = 0;
            *(_QWORD *)v33 = 0;
            *(_OWORD *)(v33 + 24) = -1;
            ++v43.m128i_i64[0];
            v34 = *(_QWORD *)v33;
            v35 = *(_QWORD *)(v33 + 8);
            *(_QWORD *)v33 = *(_QWORD *)v30;
            *(_QWORD *)(v33 + 8) = *(_QWORD *)(v30 + 8);
            *(_QWORD *)(v33 + 16) = *(_QWORD *)(v30 + 16);
            *(_QWORD *)v30 = v34;
            *(_QWORD *)(v30 + 8) = v35;
            *(_QWORD *)(v30 + 16) = 0;
            *(_OWORD *)(v33 + 24) = v38;
          }
          v30 += 40;
        }
        while ( v29 != v30 );
      }
    }
    v12 = &s1;
    if ( a1[4] )
      v12 = (const char *)a1[3];
    v13 = *a2;
    v41 = (__m128i)-1LL;
    dirtree_make_cursor(&v41, v13, v12);
    v14 = (__m128)_mm_load_si128(&v41);
    if ( v14.m128_u64[0] != -1 || !_mm_movehl_ps(a9, v14).m128_u64[0] )
    {
      v15 = v44;
      v16 = a1[3];
      v46 = v14;
      v17 = _mm_load_si128(&v45);
      v18 = _mm_loadu_si128((const __m128i *)a1 + 2);
      v44 = v16;
      a1[3] = v15;
      v45 = v18;
      *((__m128i *)a1 + 2) = v17;
    }
    v19 = *a1;
    v20 = _mm_loadu_si128(&v43);
    v21 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    *a1 = v42;
    *(__m128i *)(a1 + 1) = v20;
    v42 = v19;
    v43 = v21;
    sub_489FE0(a1 + 3, &v44);
    v23 = v44;
    *((_BYTE *)a1 + 64) = 0;
    if ( v23 )
    {
      v45.m128i_i64[0] = 0;
      qfree(v23, (const char *)&v44);
      v22 = v42;
    }
    if ( v22 )
    {
      v24 = v43.m128i_i64[0];
      if ( v43.m128i_i64[0] )
      {
        v25 = 0;
        do
        {
          v26 = (__int64 *)(v22 + 40 * v25);
          v27 = *v26;
          if ( *v26 )
          {
            v26[1] = 0;
            qfree(v27, (const char *)&v44);
          }
          ++v25;
          v22 = v42;
        }
        while ( v24 != v25 );
      }
      v43.m128i_i64[0] = 0;
      qfree(v22, (const char *)&v44);
    }
  }
  return v48 - __readfsqword(0x28u);
}
