__int64 (__fastcall **__fastcall sub_7E2E80(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6))()
{
  __m128i v7; // xmm0
  __int8 *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 *v17; // rbp
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __m128i v29; // xmm6
  __int64 v30; // rdi
  __int64 v31; // rdi
  __m128i v32; // xmm7
  __int64 v33; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v35; // rdi
  __m128i v36; // [rsp+0h] [rbp-48h] BYREF
  __m128i v37; // [rsp+10h] [rbp-38h] BYREF

  v7 = _mm_loadl_epi64((const __m128i *)&off_1C54AD0);
  a1->m128i_i64[0] = (__int64)&off_1C6BF08;
  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[3].m128i_i64[0] = (__int64)off_1C6C1F0;
  v8 = &a1[87].m128i_i8[8];
  a1[2] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6C1C8);
  v9 = a1[4].m128i_i64[1];
  v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  sub_7E3FE0(v9, v9, v8, a4, a5, a6, v36.m128i_i64[0], v36.m128i_i64[1], v37.m128i_i64[0], v37.m128i_i64[1]);
  v10 = a1[89].m128i_i64[0];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[87].m128i_i64[1];
  if ( v11 )
    sub_186B220(v11);
  v12 = (__int64 *)a1[84].m128i_i64[1];
  a1[48].m128i_i64[1] = (__int64)&off_1C4D970;
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[84].m128i_i64[0];
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_12;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_12:
    v12 = (__int64 *)a1[84].m128i_i64[1];
    if ( v12 )
LABEL_13:
      sub_186B220(v12 - 1);
  }
  v17 = (__int64 *)a1[83].m128i_i64[0];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[82].m128i_i64[1];
          v16 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_21;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_21:
    v17 = (__int64 *)a1[83].m128i_i64[0];
    if ( v17 )
LABEL_22:
      sub_186B220(v17 - 1);
  }
  v21 = a1[81].m128i_i64[1];
  a1[48].m128i_i64[1] = (__int64)&off_1C4D950;
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = a1[80].m128i_i64[1];
  if ( v22 )
  {
    v23 = a1[81].m128i_i64[0];
    v16 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v23, v22);
  }
  v24 = a1[79].m128i_i64[1];
  if ( v24 )
  {
    v25 = a1[80].m128i_i64[0];
    v16 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v25, v24);
  }
  v26 = a1[78].m128i_i64[1];
  if ( v26 )
  {
    v27 = a1[79].m128i_i64[0];
    v16 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v27, v26);
  }
  a1[69].m128i_i64[0] = (__int64)&qword_1C637E8;
  sub_15841B0(&a1[69]);
  a1[59].m128i_i64[0] = (__int64)&qword_1C637E8;
  sub_15841B0(&a1[59]);
  v28 = a1[58].m128i_i64[1];
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  sub_15841B0(&a1[48].m128i_u64[1]);
  a1[8].m128i_i64[0] = (__int64)&off_1C5A7B8;
  sub_D81A00(&a1[8]);
  sub_14B63F0(&a1[7]);
  v29 = _mm_load_si128(&v37);
  v30 = a1[6].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = v29;
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = a1[5].m128i_i64[1];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = _mm_load_si128(&v36);
  v33 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = v32;
  if ( v33 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v33 - 8));
  v35 = a1[3].m128i_i64[1];
  if ( v35 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v35 - 8));
  return result;
}

