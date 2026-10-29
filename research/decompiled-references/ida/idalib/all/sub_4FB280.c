unsigned __int64 __fastcall sub_4FB280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __m128i *v7; // r13
  __int64 v9; // rbx
  __m128i *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i *v13; // rbx
  __int64 *v14; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  __m128i *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  const __m128i *v21; // rdx
  __m128i v22; // xmm0
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rax
  __m128i *v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // [rsp+0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+10h] [rbp-38h]
  unsigned __int64 v36; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(__m128i **)a1;
  v36 = __readfsqword(0x28u);
  v9 = 24 * v6;
  v10 = (__m128i *)((char *)v7 + 24 * v6);
  if ( v7 == v10 )
  {
    if ( !v6 )
      return v36 - __readfsqword(0x28u);
LABEL_41:
    *(_QWORD *)(a1 + 8) = 0;
    return v36 - __readfsqword(0x28u);
  }
  v11 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
  if ( !v11 )
  {
    sub_4FAF80((__int64)v7, v10, -2, a4, a5, a6);
    goto LABEL_32;
  }
  _BitScanReverse64(&v12, v11);
  sub_4FAF80((__int64)v7, v10, 2LL * (int)v12, a4, a5, a6);
  if ( v9 <= 384 )
  {
LABEL_32:
    sub_4F4410(v7, v10);
    goto LABEL_6;
  }
  v13 = v7 + 24;
  sub_4F4410(v7, v7 + 24);
  do
  {
    v14 = (__int64 *)v13;
    v13 = (__m128i *)((char *)v13 + 24);
    sub_4F4200(v14);
  }
  while ( v10 != v13 );
LABEL_6:
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)a1;
  v17 = *(_QWORD *)a1 + 24 * v15;
  if ( *(_QWORD *)a1 == v17 )
  {
    if ( !v15 )
      return v36 - __readfsqword(0x28u);
    goto LABEL_41;
  }
  v18 = (__m128i *)(v16 + 24);
  if ( 24 * v15 == 24 )
  {
    v23 = 1;
  }
  else
  {
    v19 = *(_QWORD *)(v16 + 8);
    while ( 1 )
    {
      v20 = v19;
      v19 = v18->m128i_i64[1];
      if ( v19 == v20 && v18[-2].m128i_i64[1] == v18->m128i_i64[0] )
        break;
      v18 = (__m128i *)((char *)v18 + 24);
      if ( (__m128i *)v17 == v18 )
        goto LABEL_45;
    }
    v18 = (__m128i *)((char *)v18 - 24);
    if ( (__m128i *)v17 == v18 )
    {
LABEL_45:
      v23 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v18->m128i_i64 - v16) >> 3);
      goto LABEL_21;
    }
    v21 = v18 + 3;
    if ( (__m128i *)v17 != &v18[3] )
    {
      do
      {
        while ( v18->m128i_i64[1] != v21->m128i_i64[1] || v18->m128i_i64[0] != v21->m128i_i64[0] )
        {
          v22 = _mm_loadu_si128(v21);
          v21 = (const __m128i *)((char *)v21 + 24);
          v18 = (__m128i *)((char *)v18 + 24);
          *v18 = v22;
          v18[1].m128i_i32[0] = v21[-1].m128i_i32[2];
          if ( (const __m128i *)v17 == v21 )
            goto LABEL_19;
        }
        v21 = (const __m128i *)((char *)v21 + 24);
      }
      while ( (const __m128i *)v17 != v21 );
LABEL_19:
      v16 = *(_QWORD *)a1;
      v15 = *(_QWORD *)(a1 + 8);
    }
    v23 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)&v18[1].m128i_i64[1] - v16) >> 3);
  }
LABEL_21:
  if ( v15 != v23 )
  {
    LODWORD(v35) = 0;
    v34 = (__m128i)-1LL;
    if ( v23 >= v15 )
    {
      v24 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)&v34 < v16 || (unsigned __int64)&v34 >= v16 + 24 * v24 )
      {
        if ( v24 < v23 )
        {
          v32 = qvector_reserve(a1, v16, v23, 24);
          v15 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v32;
        }
        if ( v15 < v23 )
        {
          v25 = _mm_load_si128(&v34);
          v26 = v35;
          v27 = 3 * v15;
          do
          {
            v28 = *(__m128i **)a1;
            ++v15;
            v28[1].m128i_i64[v27] = v26;
            *(__m128i *)((char *)v28 + v27 * 8) = v25;
            v27 += 3;
          }
          while ( v15 != v23 );
        }
      }
      else
      {
        if ( v24 < v23 )
        {
          v33 = qvector_reserve(a1, v16, v23, 24);
          v15 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v33;
        }
        if ( v15 < v23 )
        {
          v30 = 24 * v15;
          do
          {
            ++v15;
            v31 = v30 + *(_QWORD *)a1;
            v30 += 24;
            *(_DWORD *)(v31 + 16) = 0;
            *(_OWORD *)v31 = -1;
          }
          while ( v15 != v23 );
        }
      }
    }
    *(_QWORD *)(a1 + 8) = v23;
  }
  return v36 - __readfsqword(0x28u);
}
