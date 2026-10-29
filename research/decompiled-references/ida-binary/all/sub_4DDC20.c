signed __int64 __fastcall sub_4DDC20(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r12
  __m128i *v12; // rbp
  __int8 *v13; // r14
  __int64 v14; // rbx
  int v15; // rax^4
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i *i; // r14
  __m128i *v22; // rdx
  __m128i *v23; // r12
  __int64 v24; // rbx
  int v25; // rax^4
  __m128i *v26; // rbp
  __m128i *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbp
  const __m128i *v38; // r12
  __int128 v39; // xmm0
  __int64 v40; // rax
  __m128i *v41; // r12
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rbp
  __int64 v45; // rbx
  int v46; // rax^4
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rbx
  int v51; // rax^4
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i *v54; // [rsp+20h] [rbp-68h]

  result = (signed __int64)a2->m128i_i64 - a1;
  v54 = a2;
  if ( (__int64)a2->m128i_i64 - a1 <= 384 )
    return result;
  while ( 1 )
  {
    v9 = 0xAAAAAAAAAAAAAAABLL * (result >> 3);
    v10 = v9 >> 1;
    if ( !a3 )
      break;
    v11 = (__int64 *)(a1 + 24);
    --a3;
    v12 = (__m128i *)(a1 + 24 * v10);
    v13 = &v54[-2].m128i_i8[8];
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 480LL))(a4, a1 + 24) >> 32;
    v15 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, v12) >> 32;
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 480LL);
    if ( (int)v14 >= v15 )
    {
      v32 = v16(a4, a1 + 24) >> 32;
      if ( (int)v32 >= (int)((unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int8 *))(*(_QWORD *)a4 + 480LL))(
                                                 a4,
                                                 v13) >> 32) )
      {
        v50 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, v12) >> 32;
        v51 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int8 *))(*(_QWORD *)a4 + 480LL))(a4, v13) >> 32;
        v47 = *(_QWORD *)a1;
        v48 = *(_QWORD *)(a1 + 8);
        v49 = *(_QWORD *)(a1 + 16);
        if ( (int)v50 >= v51 )
        {
          *(__m128i *)a1 = _mm_loadu_si128(v12);
          *(_QWORD *)(a1 + 16) = v12[1].m128i_i64[0];
          v12->m128i_i64[0] = v47;
          v12->m128i_i64[1] = v48;
          v12[1].m128i_i64[0] = v49;
          goto LABEL_6;
        }
        goto LABEL_24;
      }
      v33 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v34 = *(_QWORD *)(a1 + 8);
      v35 = *(_QWORD *)(a1 + 16);
      v36 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 32) = v34;
      *(_QWORD *)(a1 + 16) = v36;
      *(_QWORD *)(a1 + 40) = v35;
      *(__m128i *)a1 = v33;
    }
    else
    {
      v17 = v16(a4, (__int64)v12) >> 32;
      if ( (int)v17 >= (int)((unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int8 *))(*(_QWORD *)a4 + 480LL))(
                                                 a4,
                                                 v13) >> 32) )
      {
        v45 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 480LL))(a4, a1 + 24) >> 32;
        v46 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int8 *))(*(_QWORD *)a4 + 480LL))(a4, v13) >> 32;
        v47 = *(_QWORD *)a1;
        v48 = *(_QWORD *)(a1 + 8);
        v49 = *(_QWORD *)(a1 + 16);
        if ( (int)v45 >= v46 )
        {
          v52 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          v53 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 24) = v47;
          *(_QWORD *)(a1 + 32) = v48;
          *(_QWORD *)(a1 + 16) = v53;
          *(_QWORD *)(a1 + 40) = v49;
          *(__m128i *)a1 = v52;
          goto LABEL_6;
        }
LABEL_24:
        *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v54 - 24));
        *(_QWORD *)(a1 + 16) = v54[-1].m128i_i64[1];
        v54[-2].m128i_i64[1] = v47;
        v54[-1].m128i_i64[0] = v48;
        v54[-1].m128i_i64[1] = v49;
        goto LABEL_6;
      }
      v18 = *(_QWORD *)a1;
      v19 = *(_QWORD *)(a1 + 8);
      v20 = *(_QWORD *)(a1 + 16);
      *(__m128i *)a1 = _mm_loadu_si128(v12);
      *(_QWORD *)(a1 + 16) = v12[1].m128i_i64[0];
      v12->m128i_i64[0] = v18;
      v12->m128i_i64[1] = v19;
      v12[1].m128i_i64[0] = v20;
    }
LABEL_6:
    for ( i = v54; ; i[1].m128i_i64[0] = v31 )
    {
      v22 = (__m128i *)v11;
      do
      {
        v23 = v22;
        v24 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, v22) >> 32;
        v25 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 480LL))(a4, a1) >> 32;
        v22 = (__m128i *)((char *)v23 + 24);
      }
      while ( (int)v24 < v25 );
      v26 = (__m128i *)((char *)i - 24);
      do
      {
        i = v26;
        v27 = v26;
        v26 = (__m128i *)((char *)v26 - 24);
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)a4 + 480LL))(a4, a1, v22) >> 32;
      }
      while ( (int)v28 < (int)((unsigned __int64)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a4 + 480LL))(
                                                   a4,
                                                   v27) >> 32) );
      if ( v23 >= i )
        break;
      v29 = v23->m128i_i64[0];
      v11 = &v23[1].m128i_i64[1];
      v30 = *(v11 - 2);
      v31 = *(v11 - 1);
      *(__m128i *)(v11 - 3) = _mm_loadu_si128(i);
      *(v11 - 1) = i[1].m128i_i64[0];
      i->m128i_i64[0] = v29;
      i->m128i_i64[1] = v30;
    }
    sub_4DDC20(v23, v54, a3, a4);
    result = (signed __int64)v23->m128i_i64 - a1;
    if ( (__int64)v23->m128i_i64 - a1 <= 384 )
      return result;
    v54 = v23;
  }
  v37 = v10 - 1;
  v38 = (const __m128i *)(a1 + 24 * (v10 - 1));
  while ( 1 )
  {
    v39 = (__int128)_mm_loadu_si128(v38);
    v40 = v38[1].m128i_i64[0];
    v38 = (const __m128i *)((char *)v38 - 24);
    sub_4DD2D0(a1, v37, v9, a4, a5, a6, v39, v40);
    if ( !v37 )
      break;
    --v37;
  }
  result = (signed __int64)v54->m128i_i64 - a1;
  v41 = (__m128i *)((char *)v54 - 24);
  if ( (__int64)v54->m128i_i64 - a1 > 24 )
  {
    do
    {
      v42 = v41[1].m128i_i64[0];
      v43 = (__int128)_mm_loadu_si128(v41);
      v44 = (__int64)v41->m128i_i64 - a1;
      *v41 = _mm_loadu_si128((const __m128i *)a1);
      v41 = (__m128i *)((char *)v41 - 24);
      v41[2].m128i_i64[1] = *(_QWORD *)(a1 + 16);
      result = sub_4DD2D0(a1, 0, 0xAAAAAAAAAAAAAAABLL * (v44 >> 3), a4, a5, a6, v43, v42);
    }
    while ( v44 > 24 );
  }
  return result;
}
