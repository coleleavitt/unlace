void __fastcall sub_639330(__int64 a1, __m128i *a2, __int64 a3, int a4, int a5, int a6)
{
  __m128i *v6; // r12
  __int64 v7; // rdx
  const char *v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  const char *v11; // r13
  int v12; // eax
  char *v13; // rsi
  __m128i v14; // xmm5
  __int64 v15; // rcx
  __m128i v16; // xmm6
  __int64 v17; // rcx
  __m128i v18; // xmm7
  __m128i v19; // xmm7
  __int8 v20; // al
  __m128i *i; // r13
  const char *v22; // r14
  const char *v23; // r15
  const char *v24; // rsi
  __m128i v25; // xmm1
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int8 v28; // cl
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __m128i v33; // xmm3
  __m128i v34; // xmm2
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __m128i v37; // xmm7
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm7
  __int8 v41; // al
  __m128i v42; // xmm7
  __m128i v43; // xmm3
  __int8 v44; // al
  __m128i v45; // xmm6
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i v48; // xmm7
  __m128i v49; // xmm5
  __int8 v50; // al
  __m128i v51; // xmm5
  __m128i v52; // xmm6
  __int8 v53; // al
  __int128 v54; // [rsp+8h] [rbp-100h]
  __int128 v55; // [rsp+28h] [rbp-E0h]
  __int64 v57; // [rsp+48h] [rbp-C0h]
  const char *v58; // [rsp+50h] [rbp-B8h]
  __int64 v59; // [rsp+58h] [rbp-B0h]
  __m128i v60; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v61; // [rsp+70h] [rbp-98h] BYREF
  __int8 v62; // [rsp+87h] [rbp-81h]
  char *s2; // [rsp+88h] [rbp-80h]

  v6 = a2;
  v7 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 1024 )
  {
    for ( ; a3; v6 = (__m128i *)v9 )
    {
      v8 = *(const char **)(a1 + 64);
      --a3;
      v9 = a1 + 64;
      v10 = a1 + (v7 >> 7 << 6);
      v11 = *(const char **)v10;
      v12 = strcmp(v8, *(const char **)v10);
      v13 = (char *)v6[-4].m128i_i64[0];
      v14 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v58 = *(const char **)a1;
      v15 = *(_QWORD *)(a1 + 24);
      v16 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v62 = *(_BYTE *)(a1 + 32);
      v59 = v15;
      v17 = *(_QWORD *)(a1 + 56);
      s2 = v13;
      v57 = v17;
      v60 = v14;
      v61 = v16;
      if ( v12 < 0 )
      {
        if ( strcmp(v11, v13) < 0 )
        {
          v51 = _mm_load_si128(&v60);
          v52 = _mm_load_si128(&v61);
          *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v10);
          *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(v10 + 16));
          *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(v10 + 32));
          *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(v10 + 48));
          *(_QWORD *)v10 = v58;
          *(__m128i *)(v10 + 8) = v51;
          *(_QWORD *)(v10 + 24) = v59;
          v53 = v62;
          *(__m128i *)(v10 + 40) = v52;
          *(_BYTE *)(v10 + 32) = v53;
          *(_QWORD *)(v10 + 56) = v57;
          goto LABEL_7;
        }
        if ( strcmp(v8, s2) < 0 )
        {
          v48 = _mm_load_si128(&v60);
          v49 = _mm_load_si128(&v61);
          *(__m128i *)a1 = _mm_loadu_si128(v6 - 4);
          *(__m128i *)(a1 + 16) = _mm_loadu_si128(v6 - 3);
          *(__m128i *)(a1 + 32) = _mm_loadu_si128(v6 - 2);
          *(__m128i *)(a1 + 48) = _mm_loadu_si128(v6 - 1);
          v6[-4].m128i_i64[0] = (__int64)v58;
          *(__m128i *)((char *)v6 - 56) = v48;
          v6[-3].m128i_i64[1] = v59;
          v50 = v62;
          *(__m128i *)((char *)v6 - 24) = v49;
          v6[-2].m128i_i8[0] = v50;
          v6[-1].m128i_i64[1] = v57;
          goto LABEL_7;
        }
        v37 = _mm_load_si128(&v60);
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        v38 = _mm_loadu_si128((const __m128i *)(a1 + 80));
        *(_QWORD *)(a1 + 64) = v58;
        *(__m128i *)(a1 + 16) = v38;
        v39 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        *(__m128i *)(a1 + 72) = v37;
        *(__m128i *)(a1 + 32) = v39;
        *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a1 + 112));
      }
      else
      {
        if ( strcmp(v8, v13) >= 0 )
        {
          if ( strcmp(v11, s2) < 0 )
          {
            v42 = _mm_load_si128(&v60);
            v43 = _mm_load_si128(&v61);
            *(__m128i *)a1 = _mm_loadu_si128(v6 - 4);
            *(__m128i *)(a1 + 16) = _mm_loadu_si128(v6 - 3);
            *(__m128i *)(a1 + 32) = _mm_loadu_si128(v6 - 2);
            *(__m128i *)(a1 + 48) = _mm_loadu_si128(v6 - 1);
            v6[-4].m128i_i64[0] = (__int64)v58;
            *(__m128i *)((char *)v6 - 56) = v42;
            v6[-3].m128i_i64[1] = v59;
            v44 = v62;
            *(__m128i *)((char *)v6 - 24) = v43;
            v6[-2].m128i_i8[0] = v44;
            v6[-1].m128i_i64[1] = v57;
          }
          else
          {
            v18 = _mm_load_si128(&v60);
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v10);
            *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(v10 + 16));
            *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(v10 + 32));
            *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(v10 + 48));
            *(_QWORD *)v10 = v58;
            *(__m128i *)(v10 + 8) = v18;
            v19 = _mm_load_si128(&v61);
            *(_QWORD *)(v10 + 24) = v59;
            v20 = v62;
            *(__m128i *)(v10 + 40) = v19;
            *(_BYTE *)(v10 + 32) = v20;
            *(_QWORD *)(v10 + 56) = v57;
          }
          goto LABEL_7;
        }
        v45 = _mm_load_si128(&v60);
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        v46 = _mm_loadu_si128((const __m128i *)(a1 + 80));
        *(_QWORD *)(a1 + 64) = v58;
        *(__m128i *)(a1 + 16) = v46;
        v47 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        *(__m128i *)(a1 + 72) = v45;
        *(__m128i *)(a1 + 32) = v47;
        *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a1 + 112));
      }
      v40 = _mm_load_si128(&v61);
      *(_QWORD *)(a1 + 88) = v59;
      v41 = v62;
      *(__m128i *)(a1 + 104) = v40;
      *(_BYTE *)(a1 + 96) = v41;
      *(_QWORD *)(a1 + 120) = v57;
LABEL_7:
      for ( i = v6; ; *(__m128i *)((char *)i + 40) = v27 )
      {
        v22 = *(const char **)a1;
        while ( 1 )
        {
          v23 = *(const char **)v9;
          if ( strcmp(*(const char **)v9, v22) >= 0 )
            break;
          v9 += 64LL;
        }
        do
        {
          v24 = (const char *)i[-4].m128i_i64[0];
          i -= 4;
        }
        while ( strcmp(v22, v24) < 0 );
        if ( v9 >= (unsigned __int64)i )
          break;
        v25 = _mm_loadu_si128((const __m128i *)(v9 + 8));
        v9 += 64LL;
        v26 = *(_QWORD *)(v9 - 40);
        v27 = _mm_loadu_si128((const __m128i *)(v9 - 24));
        *(__m128i *)(v9 - 64) = _mm_loadu_si128(i);
        v28 = *(_BYTE *)(v9 - 32);
        v29 = *(_QWORD *)(v9 - 8);
        *(__m128i *)(v9 - 48) = _mm_loadu_si128(i + 1);
        *(__m128i *)(v9 - 32) = _mm_loadu_si128(i + 2);
        *(__m128i *)(v9 - 16) = _mm_loadu_si128(i + 3);
        i->m128i_i64[0] = (__int64)v23;
        i[1].m128i_i64[1] = v26;
        i[2].m128i_i8[0] = v28;
        i[3].m128i_i64[1] = v29;
        *(__m128i *)((char *)i + 8) = v25;
      }
      sub_639330(v9, v6, a3);
      v7 = v9 - a1;
      if ( (__int64)(v9 - a1) <= 1024 )
        return;
    }
    sub_6391C0(a1, (unsigned __int64)v6, (unsigned __int64)v6, a4, a5, a6);
    while ( (__int64)v6->m128i_i64 - a1 > 64 )
    {
      v33 = _mm_loadu_si128(v6 - 4);
      v6 -= 4;
      v34 = _mm_loadu_si128(v6 + 1);
      v35 = _mm_loadu_si128(v6 + 2);
      v36 = _mm_loadu_si128(v6 + 3);
      *v6 = _mm_loadu_si128((const __m128i *)a1);
      v6[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v6[2] = _mm_loadu_si128((const __m128i *)(a1 + 32));
      v6[3] = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)&v54 = v33.m128i_i64[1];
      *((_QWORD *)&v54 + 1) = v34.m128i_i64[0];
      *(_QWORD *)&v55 = v35.m128i_i64[1];
      *((_QWORD *)&v55 + 1) = v36.m128i_i64[0];
      sub_629A90(
        a1,
        0,
        ((__int64)v6->m128i_i64 - a1) >> 6,
        v30,
        v31,
        v32,
        (char *)v33.m128i_i64[0],
        v54,
        v34.m128i_i64[1],
        v35.m128i_i8[0],
        v55,
        v36.m128i_i64[1]);
    }
  }
}
