_BYTE *__fastcall sub_10EA4D0(char **a1, __int64 a2)
{
  __m128i *v4; // rbx
  char *v5; // rdi
  signed __int64 v6; // r12
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r14
  _QWORD *v12; // r13
  _QWORD *v13; // rdi
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  _BYTE *result; // rax
  char *v17; // r13
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  char *v22; // r12
  __int64 v23; // r14
  __int64 v24; // r15
  char *v25; // rsi
  char *v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  char *v31; // rsi
  char *v32; // rcx
  __m128i *v33; // rdi
  __m128i *v34; // rsi
  char *v35; // rcx
  __m128i *v36; // r15
  char *v37; // rdi
  char *v38; // rdi
  void **v39; // r14
  void **v40; // r12
  char *v41; // rdi
  char *v42; // rdi
  __m128 v43; // xmm0
  __m128i v44; // [rsp+8h] [rbp-50h] BYREF
  _BYTE *v45; // [rsp+18h] [rbp-40h]

  v4 = (__m128i *)a1[1];
  if ( v4 != (__m128i *)a1[2] )
  {
    v5 = a1[1];
    v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
    sub_10E6B70(v5, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    v4[2].m128i_i64[0] = (__int64)v4[3].m128i_i64;
    sub_10E6B70((__m128i *)v4[2].m128i_i64, *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
    v4[4].m128i_i64[0] = (__int64)v4[5].m128i_i64;
    sub_10E6B70((__m128i *)v4[4].m128i_i64, *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
    v6 = *(_QWORD *)(a2 + 104) - *(_QWORD *)(a2 + 96);
    v4[6] = 0;
    v4[7].m128i_i64[0] = 0;
    if ( v6 >> 5 )
    {
      if ( (unsigned __int64)(v6 >> 5) > 0x7FFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v7 = operator new(v6);
    }
    else
    {
      v7 = 0;
    }
    v44.m128i_i64[0] = v7;
    v8 = _mm_loadl_epi64(&v44);
    v4[7].m128i_i64[0] = v7 + v6;
    v4[6] = _mm_unpacklo_epi64(v8, v8);
    v9 = *(_QWORD *)(a2 + 104);
    v10 = *(_QWORD *)(a2 + 96);
    if ( v9 != v10 )
    {
      v11 = *(_QWORD *)(a2 + 96);
      v12 = (_QWORD *)v7;
      do
      {
        v13 = v12;
        v11 += 32;
        v44.m128i_i64[1] = v7;
        *v12 = v12 + 2;
        v14 = *(_BYTE **)(v11 - 32);
        v12 += 4;
        v15 = *(_QWORD *)(v11 - 24);
        v44.m128i_i64[0] = v10;
        sub_10E6B70(v13, v14, (__int64)&v14[v15]);
        v7 = v44.m128i_i64[1];
        v10 = v44.m128i_i64[0];
      }
      while ( v9 != v11 );
      v7 = v44.m128i_i64[1] + ((v9 - 32 - v44.m128i_i64[0]) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    }
    v4[6].m128i_i64[1] = v7;
    v4[7].m128i_i64[1] = (__int64)&v4[8].m128i_i64[1];
    sub_10E6B70(&v4[7].m128i_i64[1], *(_BYTE **)(a2 + 120), *(_QWORD *)(a2 + 120) + *(_QWORD *)(a2 + 128));
    result = sub_10CF690((__int64)&v4[9].m128i_i64[1], a2 + 152);
    a1[1] += 192;
    return result;
  }
  v17 = *a1;
  v18 = (char *)v4 - *a1;
  v19 = v18 >> 6;
  if ( 0xAAAAAAAAAAAAAAABLL * (v18 >> 6) )
  {
    v20 = 0x5555555555555556LL * v19;
    v21 = -64;
    if ( 0xAAAAAAAAAAAAAAABLL * v19 <= 0x5555555555555556LL * v19 && v20 <= 0x155555555555555LL )
    {
      if ( !v20 )
      {
        v44.m128i_i64[1] = 192;
        v45 = nullptr;
        v44.m128i_i64[0] = 0;
        goto LABEL_14;
      }
      v21 = v19 << 7;
    }
  }
  else
  {
    v21 = 192;
  }
  v44.m128i_i64[0] = operator new(v21);
  v45 = (_BYTE *)(v44.m128i_i64[0] + v21);
  v44.m128i_i64[1] = v44.m128i_i64[0] + 192;
LABEL_14:
  sub_10E7040(v44.m128i_i64[0] + v18, a2);
  if ( v4 != (__m128i *)v17 )
  {
    v22 = v17 + 16;
    v23 = v44.m128i_i64[0];
    v44.m128i_i64[1] = ((char *)&v4[-12] - v17) & 0xFFFFFFFFFFFFFFC0LL;
    v24 = (__int64)&v17[v44.m128i_i64[1] + 208];
    do
    {
      *(_QWORD *)v23 = v23 + 16;
      v35 = *((char **)v22 - 2);
      if ( v35 == v22 )
      {
        *(__m128i *)(v23 + 16) = _mm_loadu_si128((const __m128i *)v22);
      }
      else
      {
        *(_QWORD *)v23 = v35;
        *(_QWORD *)(v23 + 16) = *(_QWORD *)v22;
      }
      *(_QWORD *)(v23 + 8) = *((_QWORD *)v22 - 1);
      *((_QWORD *)v22 - 2) = v22;
      *((_QWORD *)v22 - 1) = 0;
      *v22 = 0;
      *(_QWORD *)(v23 + 32) = v23 + 48;
      v25 = *((char **)v22 + 2);
      if ( v25 == v22 + 32 )
      {
        *(__m128i *)(v23 + 48) = _mm_loadu_si128((const __m128i *)v22 + 2);
      }
      else
      {
        *(_QWORD *)(v23 + 32) = v25;
        *(_QWORD *)(v23 + 48) = *((_QWORD *)v22 + 4);
      }
      *(_QWORD *)(v23 + 40) = *((_QWORD *)v22 + 3);
      *((_QWORD *)v22 + 2) = v22 + 32;
      *((_QWORD *)v22 + 3) = 0;
      v22[32] = 0;
      *(_QWORD *)(v23 + 64) = v23 + 80;
      v26 = *((char **)v22 + 6);
      if ( v26 == v22 + 64 )
      {
        *(__m128i *)(v23 + 80) = _mm_loadu_si128((const __m128i *)v22 + 4);
      }
      else
      {
        *(_QWORD *)(v23 + 64) = v26;
        *(_QWORD *)(v23 + 80) = *((_QWORD *)v22 + 8);
      }
      *(_QWORD *)(v23 + 72) = *((_QWORD *)v22 + 7);
      v22[64] = 0;
      *((_QWORD *)v22 + 6) = v22 + 64;
      *((_QWORD *)v22 + 7) = 0;
      *(_OWORD *)(v23 + 96) = 0;
      *(_QWORD *)(v23 + 112) = 0;
      *(_QWORD *)(v23 + 96) = *((_QWORD *)v22 + 10);
      v27 = *((_QWORD *)v22 + 11);
      *((_QWORD *)v22 + 10) = 0;
      v28 = *(_QWORD *)(v23 + 104);
      *(_QWORD *)(v23 + 104) = v27;
      v29 = *((_QWORD *)v22 + 12);
      *((_QWORD *)v22 + 11) = v28;
      v30 = *(_QWORD *)(v23 + 112);
      *(_QWORD *)(v23 + 112) = v29;
      *((_QWORD *)v22 + 12) = v30;
      *(_QWORD *)(v23 + 120) = v23 + 136;
      v31 = *((char **)v22 + 13);
      v32 = v22 + 120;
      if ( v22 + 120 == v31 )
      {
        *(__m128i *)(v23 + 136) = _mm_loadu_si128((const __m128i *)(v22 + 120));
      }
      else
      {
        *(_QWORD *)(v23 + 120) = v31;
        *(_QWORD *)(v23 + 136) = *((_QWORD *)v22 + 15);
      }
      v33 = (__m128i *)(v23 + 152);
      v23 += 192;
      *(_QWORD *)(v23 - 64) = *((_QWORD *)v22 + 14);
      v34 = (__m128i *)(v22 + 136);
      v22 += 192;
      *((_QWORD *)v22 - 11) = v32;
      *((_QWORD *)v22 - 10) = 0;
      *(v22 - 72) = 0;
      sub_9FD150(v33, v34);
    }
    while ( v22 != (char *)v24 );
    v36 = (__m128i *)v17;
    v44.m128i_i64[1] += v44.m128i_i64[0] + 384;
    do
    {
      while ( 1 )
      {
        if ( v36[11].m128i_i8[8] )
        {
          v37 = (char *)v36[9].m128i_i64[1];
          if ( v37 != (char *)&v36[10].m128i_u64[1] )
            operator delete(v37);
        }
        v38 = (char *)v36[7].m128i_i64[1];
        if ( v38 != (char *)&v36[8].m128i_u64[1] )
          operator delete(v38);
        v39 = (void **)v36[6].m128i_i64[1];
        v40 = (void **)v36[6].m128i_i64[0];
        if ( v39 != v40 )
        {
          do
          {
            while ( *v40 != v40 + 2 )
            {
              operator delete(*v40);
              v40 += 4;
              if ( v39 == v40 )
                goto LABEL_39;
            }
            v40 += 4;
          }
          while ( v39 != v40 );
LABEL_39:
          v40 = (void **)v36[6].m128i_i64[0];
        }
        if ( v40 )
          operator delete(v40);
        v41 = (char *)v36[4].m128i_i64[0];
        if ( v41 != (char *)&v36[5] )
          operator delete(v41);
        v42 = (char *)v36[2].m128i_i64[0];
        if ( v42 != (char *)&v36[3] )
          operator delete(v42);
        if ( (__m128i *)v36->m128i_i64[0] == &v36[1] )
          break;
        operator delete((void *)v36->m128i_i64[0]);
        v36 += 12;
        if ( v4 == v36 )
          goto LABEL_48;
      }
      v36 += 12;
    }
    while ( v4 != v36 );
  }
LABEL_48:
  if ( v17 )
    operator delete(v17);
  result = v45;
  v43 = _mm_loadh_ps((const double *)&v44.m128i_i64[1]);
  a1[2] = v45;
  *(__m128 *)a1 = v43;
  return result;
}

