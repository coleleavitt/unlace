unsigned __int64 __fastcall sub_6D6620(__int64 a1, __m128i **a2, const __m128i *a3)
{
  __m128i *v4; // rax
  char *v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 i; // rbp
  __int64 *v9; // rdx
  __m128i *v10; // rdx
  char *v11; // rbp
  char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // r13
  __m128i *v16; // rsi
  __m128i *v17; // r12
  __m128i v18; // xmm1
  __int32 v19; // ebp
  __m128i *v20; // rbx
  __m128i *v21; // rax
  void *v22; // rdi
  void *v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rcx
  __m128i *v27; // r13
  __m128i *v28; // rdi
  __m128i v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __m128i v34; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v36; // [rsp+18h] [rbp-40h]
  unsigned __int64 v37; // [rsp+28h] [rbp-30h]

  v4 = a2[1];
  v37 = __readfsqword(0x28u);
  v36 = 0;
  ptr = nullptr;
  if ( !v4 )
  {
    v10 = nullptr;
LABEL_30:
    v16 = (__m128i *)&v4->m128i_i8[1];
    goto LABEL_19;
  }
  v6 = nullptr;
  v7 = 0;
  for ( i = 0; i < (unsigned __int64)v4; ++i )
  {
    v9 = &(*a2)->m128i_i64[3 * i];
    if ( (unsigned __int64)*v9 >= a3->m128i_i64[0] && a3->m128i_i64[1] >= (unsigned __int64)v9[1] )
    {
      if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v7 + 1) )
      {
        v24 = (void *)qvector_reserve(&ptr, v6, v7 + 1, 8);
        v7 = v36;
        ptr = v24;
        v6 = (char *)v24;
      }
      *(_QWORD *)&v6[8 * v7] = i;
      v6 = (char *)ptr;
      v7 = v36 + 1;
      v4 = a2[1];
      *(_QWORD *)&v36 = v36 + 1;
    }
    v10 = v4;
  }
  v11 = &v6[8 * v7];
  if ( v11 == v6 )
    goto LABEL_30;
  v12 = v11 - 8;
  if ( v6 < v11 - 8 )
  {
    do
    {
      v13 = *(_QWORD *)v6;
      v14 = *(_QWORD *)v12;
      v6 += 8;
      v12 -= 8;
      *((_QWORD *)v6 - 1) = v14;
      *((_QWORD *)v12 + 1) = v13;
    }
    while ( v6 < v12 );
    v6 = (char *)ptr;
    v11 = (char *)ptr + 8 * v36;
    if ( ptr == v11 )
    {
      v10 = a2[1];
      v16 = (__m128i *)&v10->m128i_i8[1];
      goto LABEL_19;
    }
    v4 = a2[1];
  }
  v15 = v6;
  while ( 1 )
  {
    v16 = v4;
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * ((__int64)v4->m128i_i64 - *(_QWORD *)v15)) >> 3) - 2) >= 0 )
    {
      memmove(
        (char *)*a2 + 24 * *(_QWORD *)v15,
        &(*a2)[1].m128i_u64[3 * *(_QWORD *)v15 + 1],
        24LL * ((_QWORD)v4 - *(_QWORD *)v15) - 24);
      v16 = a2[1];
    }
    v10 = (__m128i *)((char *)v16 - 1);
    v15 += 8;
    a2[1] = (__m128i *)((char *)v16 - 1);
    if ( v11 == v15 )
      break;
    v4 = (__m128i *)((char *)v16 - 1);
  }
LABEL_19:
  v17 = a2[2];
  v18 = _mm_loadu_si128(a3);
  v19 = a3[1].m128i_i32[0];
  if ( v17 < v16 )
  {
    v34 = v18;
    v25 = qvector_reserve(a2, 0, v16, 24);
    v26 = a2[1];
    v27 = a2[2];
    a2[2] = v17;
    v28 = *a2;
    v29 = _mm_load_si128(&v34);
    v20 = (__m128i *)v25;
    v30 = (__int64)&v26[-1].m128i_i64[1] + 7;
    if ( v30 >= 0 )
    {
      v31 = v25;
      do
      {
        v32 = _mm_loadu_si128(v28);
        v31 += 24;
        v28 = (__m128i *)((char *)v28 + 24);
        *(__m128i *)(v31 - 24) = v32;
        *(_QWORD *)(v31 - 8) = v28[-1].m128i_i64[1];
      }
      while ( v30-- != 0 );
      v28 = *a2;
    }
    v34 = v29;
    qfree(v28);
    *a2 = v20;
    v10 = a2[1];
    a2[2] = v27;
    v18 = _mm_load_si128(&v34);
  }
  else
  {
    v20 = *a2;
  }
  v21 = (__m128i *)((char *)v20 + 24 * (_QWORD)v10);
  *v21 = v18;
  v22 = ptr;
  v21[1].m128i_i32[0] = v19;
  a2[1] = (__m128i *)((char *)a2[1] + 1);
  if ( v22 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v22);
  }
  return v37 - __readfsqword(0x28u);
}

