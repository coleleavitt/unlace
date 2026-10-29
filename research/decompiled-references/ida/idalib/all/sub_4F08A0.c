unsigned __int64 __fastcall sub_4F08A0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 *v5; // r15
  __int64 v6; // r13
  const char *v7; // rbx
  const char *v8; // rdi
  const char *v9; // rsi
  double v10; // r13
  __int64 v11; // rbx
  __m128i v12; // xmm5
  __m128 v13; // xmm3
  __int64 v14; // r12
  __m128i v15; // xmm0
  void *v16; // rdi
  __int64 v17; // r12
  __m128i v18; // xmm0
  void *v19; // rdi
  void *v20; // rdi
  __m128i v21; // xmm7
  void *v22; // rdi
  __m128i v23; // xmm1
  __int64 *v24; // rbx
  __int64 *v25; // rax
  void *v26; // rbp
  void *v27; // r13
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rbx
  __m128i v31; // xmm2
  void *v32; // rdi
  __int64 *v33; // rdx
  __int64 v34; // rbx
  __m128i v35; // xmm2
  void *v36; // rdi
  __m128i *v37; // rax
  __int64 v38; // rbx
  void *v39; // r13
  __m128i v42; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v43; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v44; // [rsp+30h] [rbp-98h] BYREF
  __m128i *v45; // [rsp+40h] [rbp-88h]
  __int64 v46; // [rsp+48h] [rbp-80h]
  void *v47; // [rsp+50h] [rbp-78h] BYREF
  __m128i v48; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-60h]
  __m128i v50; // [rsp+70h] [rbp-58h]
  unsigned __int64 v51; // [rsp+88h] [rbp-40h]

  v45 = a2;
  v46 = a3;
  v51 = __readfsqword(0x28u);
  v3 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 768 )
  {
    if ( v46 )
    {
      while ( 1 )
      {
        v4 = (__int64 *)v45;
        --v46;
        v5 = (__int64 *)(a1 + 48);
        sub_4EF920(
          a1,
          a1 + 48,
          a1
        + 16
        * (((0xAAAAAAAAAAAAAAABLL * (v3 >> 4)) & 0xFFFFFFFFFFFFFFFELL)
         + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v3 >> 4)) >> 1)),
          (__int64)v45[-3].m128i_i64);
        while ( 1 )
        {
          v6 = *(_QWORD *)(a1 + 32);
          while ( 1 )
          {
            v7 = haystack;
            if ( v6 )
              v7 = *(const char **)(a1 + 24);
            v8 = haystack;
            if ( v5[4] )
              v8 = (const char *)v5[3];
            if ( strcasecmp(v8, v7) >= 0 )
              break;
            v5 += 6;
          }
          do
          {
            v4 -= 6;
            v9 = haystack;
            if ( v4[4] )
              v9 = (const char *)v4[3];
          }
          while ( strcasecmp(v7, v9) < 0 );
          if ( v5 >= v4 )
            break;
          v10 = *(double *)v5;
          v11 = v5[3];
          *v5 = 0;
          v12 = _mm_loadu_si128((const __m128i *)(v5 + 1));
          v13 = _mm_loadh_ps((const double *)v5 + 5);
          v5[3] = 0;
          *(_OWORD *)(v5 + 1) = 0;
          *((_OWORD *)v5 + 2) = 0;
          v14 = *v4;
          v15 = _mm_loadu_si128((const __m128i *)(v4 + 1));
          *v4 = 0;
          *(_OWORD *)(v4 + 1) = 0;
          v16 = (void *)*v5;
          v42 = v12;
          v43 = (__m128i)v13;
          if ( v16 )
          {
            v5[1] = 0;
            v44 = v15;
            qfree(v16);
            v15 = _mm_load_si128(&v44);
          }
          *v5 = v14;
          *(__m128i *)(v5 + 1) = v15;
          v17 = v4[3];
          v18 = _mm_loadu_si128((const __m128i *)v4 + 2);
          v4[3] = 0;
          *((_OWORD *)v4 + 2) = 0;
          v19 = (void *)v5[3];
          if ( v19 )
          {
            v5[4] = 0;
            v44 = v18;
            qfree(v19);
            v18 = _mm_load_si128(&v44);
          }
          v5[3] = v17;
          *((__m128i *)v5 + 2) = v18;
          v20 = (void *)*v4;
          if ( *v4 )
          {
            v4[1] = 0;
            qfree(v20);
          }
          v21 = _mm_load_si128(&v42);
          v22 = (void *)v4[3];
          *(double *)v4 = v10;
          *(__m128i *)(v4 + 1) = v21;
          if ( v22 )
          {
            v4[4] = 0;
            qfree(v22);
          }
          v23 = _mm_load_si128(&v43);
          v4[3] = v11;
          v5 += 6;
          *((__m128i *)v4 + 2) = v23;
        }
        sub_4F08A0(v5, v45, v46);
        v3 = (__int64)v5 - a1;
        if ( (__int64)v5 - a1 <= 768 )
          break;
        v45 = (__m128i *)v5;
        if ( !v46 )
          goto LABEL_26;
      }
    }
    else
    {
LABEL_26:
      v24 = (__int64 *)v45;
      sub_4F0780(a1, (__int64)v45);
      if ( (__int64)v24 - a1 > 48 )
      {
        do
        {
          v45 -= 3;
          v25 = (__int64 *)v45;
          v26 = (void *)v45->m128i_i64[0];
          v27 = (void *)v45[1].m128i_i64[1];
          v45->m128i_i64[0] = 0;
          v25[3] = 0;
          v28 = _mm_loadu_si128((const __m128i *)(v25 + 1));
          v29 = _mm_loadu_si128((const __m128i *)v25 + 2);
          *(_OWORD *)(v25 + 1) = 0;
          *((_OWORD *)v25 + 2) = 0;
          v30 = *(_QWORD *)a1;
          v31 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(_QWORD *)a1 = 0;
          *(_OWORD *)(a1 + 8) = 0;
          v32 = (void *)*v25;
          if ( *v25 )
          {
            v25[1] = 0;
            v44 = v29;
            v43 = v28;
            v42 = v31;
            qfree(v32);
            v29 = _mm_load_si128(&v44);
            v28 = _mm_load_si128(&v43);
            v31 = _mm_load_si128(&v42);
          }
          v33 = (__int64 *)v45;
          v45->m128i_i64[0] = v30;
          *(__m128i *)(v33 + 1) = v31;
          v34 = *(_QWORD *)(a1 + 24);
          v35 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          *(_QWORD *)(a1 + 24) = 0;
          *(_OWORD *)(a1 + 32) = 0;
          v36 = (void *)v33[3];
          if ( v36 )
          {
            v33[4] = 0;
            v44 = v35;
            v43 = v29;
            v42 = v28;
            qfree(v36);
            v35 = _mm_load_si128(&v44);
            v29 = _mm_load_si128(&v43);
            v28 = _mm_load_si128(&v42);
          }
          v37 = v45;
          ptr = v27;
          v45[1].m128i_i64[1] = v34;
          v38 = (__int64)v37->m128i_i64 - a1;
          v37[2] = v35;
          v47 = v26;
          v48 = v28;
          v50 = v29;
          sub_4F0360(a1, 0, 0xAAAAAAAAAAAAAAABLL * (((__int64)v37->m128i_i64 - a1) >> 4), (const __m128i *)&v47);
          v39 = v47;
          if ( ptr )
            qfree(ptr);
          if ( v39 )
            qfree(v39);
        }
        while ( v38 > 48 );
      }
    }
  }
  return v51 - __readfsqword(0x28u);
}
