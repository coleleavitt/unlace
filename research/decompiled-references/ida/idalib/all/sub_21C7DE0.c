void __fastcall sub_21C7DE0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  _QWORD *m128i_i64; // r12
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm4
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // rbp
  const __m128i *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r13
  __int64 i; // rbp
  const __m128i *v30; // r12
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int64 v33; // rbp
  __m128i v34; // xmm5
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128i v37; // xmm6
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i v40; // xmm7
  __int64 v41; // rcx
  __int64 v42; // rdx
  __m128i v43; // xmm7
  __int64 v44; // rdx
  __int64 v45; // rax

  v7 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 <= 384 )
    return;
  m128i_i64 = a2->m128i_i64;
  if ( !a3 )
  {
LABEL_17:
    v28 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 3);
    for ( i = (v28 - 2) >> 1; ; --i )
    {
      sub_21C5260(
        a1,
        i,
        v28,
        a4,
        a5,
        a6,
        (__int128)_mm_loadu_si128((const __m128i *)(a1 + 24 * i)),
        *(_QWORD *)(a1 + 24 * i + 16));
      if ( !i )
        break;
    }
    v30 = (const __m128i *)(m128i_i64 - 3);
    do
    {
      v31 = v30[1].m128i_i64[0];
      v32 = (__int128)_mm_loadu_si128(v30);
      v33 = (__int64)v30->m128i_i64 - a1;
      v30 = (const __m128i *)((char *)v30 - 24);
      v30[1].m128i_i64[1] = *(_QWORD *)a1;
      v30[2] = _mm_loadu_si128((const __m128i *)(a1 + 8));
      sub_21C5260(a1, 0, 0xAAAAAAAAAAAAAAABLL * (v33 >> 3), a4, a5, a6, v32, v31);
    }
    while ( v33 > 24 );
    return;
  }
  v10 = (unsigned __int64 *)(a1 + 24);
  while ( 2 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    --a3;
    v12 = a2[-2].m128i_u64[1];
    v13 = *(_QWORD *)a1;
    v14 = a1 + 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (((__int64)a2->m128i_i64 - a1) >> 3)) / 2);
    v15 = *(_QWORD *)v14;
    if ( v11 >= *(_QWORD *)v14 )
    {
      if ( v11 < v12 )
      {
        v34 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        v35 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v11;
        v36 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v13;
        *(__m128i *)(a1 + 8) = v34;
        *(_QWORD *)(a1 + 32) = v35;
        *(_QWORD *)(a1 + 40) = v36;
        goto LABEL_7;
      }
      if ( v15 >= v12 )
      {
        *(_QWORD *)a1 = v15;
        v40 = _mm_loadu_si128((const __m128i *)(v14 + 8));
        *(_QWORD *)v14 = v13;
        v41 = *(_QWORD *)(a1 + 8);
        v42 = *(_QWORD *)(a1 + 16);
        *(__m128i *)(a1 + 8) = v40;
        *(_QWORD *)(v14 + 8) = v41;
        *(_QWORD *)(v14 + 16) = v42;
        v11 = *(_QWORD *)a1;
        goto LABEL_7;
      }
LABEL_26:
      *(_QWORD *)a1 = v12;
      v37 = _mm_loadu_si128(a2 - 1);
      a2[-2].m128i_i64[1] = v13;
      v38 = *(_QWORD *)(a1 + 8);
      v39 = *(_QWORD *)(a1 + 16);
      *(__m128i *)(a1 + 8) = v37;
      a2[-1].m128i_i64[0] = v38;
      a2[-1].m128i_i64[1] = v39;
      v11 = *(_QWORD *)a1;
      goto LABEL_7;
    }
    if ( v15 >= v12 )
    {
      if ( v11 >= v12 )
      {
        v43 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        v44 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v11;
        v45 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v13;
        *(__m128i *)(a1 + 8) = v43;
        *(_QWORD *)(a1 + 32) = v44;
        *(_QWORD *)(a1 + 40) = v45;
        goto LABEL_7;
      }
      goto LABEL_26;
    }
    *(_QWORD *)a1 = v15;
    v16 = _mm_loadu_si128((const __m128i *)(v14 + 8));
    *(_QWORD *)v14 = v13;
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)(a1 + 16);
    *(__m128i *)(a1 + 8) = v16;
    *(_QWORD *)(v14 + 8) = v17;
    *(_QWORD *)(v14 + 16) = v18;
    v11 = *(_QWORD *)a1;
LABEL_7:
    v19 = a2[-2].m128i_u64[1];
    v20 = v10;
    v21 = a2;
    while ( 1 )
    {
      v22 = *v20;
      m128i_i64 = v20;
      if ( *v20 < v11 )
        goto LABEL_14;
      v23 = (unsigned __int64)&v21[-2].m128i_u64[1];
      if ( v11 < v19 )
      {
        v24 = (unsigned __int64)&v21[-3];
        do
        {
          v23 = v24;
          v24 -= 24LL;
          v19 = *(_QWORD *)(v24 + 24);
        }
        while ( v19 > v11 );
      }
      if ( (unsigned __int64)v20 >= v23 )
        break;
      *v20 = v19;
      v25 = _mm_loadu_si128((const __m128i *)(v23 + 8));
      *(_QWORD *)v23 = v22;
      v26 = v20[1];
      v27 = v20[2];
      *(__m128i *)(v20 + 1) = v25;
      v19 = *(_QWORD *)(v23 - 24);
      *(_QWORD *)(v23 + 8) = v26;
      *(_QWORD *)(v23 + 16) = v27;
      v11 = *(_QWORD *)a1;
      v21 = (const __m128i *)v23;
LABEL_14:
      v20 += 3;
    }
    sub_21C7DE0(v20, a2, a3);
    v7 = (__int64)v20 - a1;
    if ( (__int64)v20 - a1 > 384 )
    {
      a2 = (const __m128i *)v20;
      if ( !a3 )
        goto LABEL_17;
      continue;
    }
    break;
  }
}
