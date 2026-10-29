__int64 (__fastcall **__fastcall sub_81B7E0(__m128i *a1))()
{
  __m128i v2; // xmm0
  _QWORD **v3; // rbp
  _QWORD **v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __m128i si128; // xmm6
  __int64 v29; // rdi
  __int64 v30; // rdi
  __m128i v31; // xmm7
  __int64 v32; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v34; // rdi
  __m128i v35; // [rsp+0h] [rbp-58h] BYREF
  __m128i v36[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)&off_1C550A8);
  v3 = (_QWORD **)a1[19].m128i_i64[1];
  a1->m128i_i64[0] = (__int64)&off_1C6CF28;
  v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[3].m128i_i64[0] = (__int64)off_1C6D210;
  v36[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  a1[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_1C6D1E8);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 == v4 )
      goto LABEL_9;
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        if ( *v5 )
          sub_186B220((void *)(*v5 - 8LL));
        sub_186B220(v5);
      }
      ++v3;
    }
    while ( v3 != v4 );
    v4 = (_QWORD **)a1[19].m128i_i64[1];
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  v6 = a1[29].m128i_i64[0];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[28].m128i_i64[1];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[28].m128i_i64[0];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[27].m128i_i64[1];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (void *)a1[26].m128i_i64[0];
  if ( v10 )
    sub_186B220(v10);
  v11 = a1[25].m128i_i64[1];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[25].m128i_i64[0];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[24].m128i_i64[1];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[24].m128i_i64[0];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[23].m128i_i64[1];
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_33;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_33:
    v14 = (__int64 *)a1[24].m128i_i64[0];
    if ( v14 )
LABEL_34:
      sub_186B220(v14 - 1);
  }
  v19 = a1[22].m128i_i64[0];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[21].m128i_i64[1];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[21].m128i_i64[0];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = a1[19].m128i_i64[1];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = (__int64 *)a1[15].m128i_i64[1];
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_51;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[15].m128i_i64[0];
          v18 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_50;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_50:
    v23 = (__int64 *)a1[15].m128i_i64[1];
    if ( v23 )
LABEL_51:
      sub_186B220(v23 - 1);
  }
  v27 = a1[14].m128i_i64[1];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  si128 = _mm_load_si128(v36);
  v29 = a1[6].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = si128;
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = a1[5].m128i_i64[1];
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = _mm_load_si128(&v35);
  v32 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = v31;
  if ( v32 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v32 - 8));
  v34 = a1[3].m128i_i64[1];
  if ( v34 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v34 - 8));
  return result;
}

