__int64 (__fastcall **__fastcall sub_85F000(__m128i *a1))()
{
  __m128i v2; // xmm0
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 *v22; // rbp
  __int64 *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbp
  __int64 *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rdi
  _QWORD **v35; // rbp
  _QWORD **v36; // r15
  _QWORD *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __m128i si128; // xmm6
  __int64 v42; // rdi
  __int64 v43; // rdi
  __m128i v44; // xmm7
  __int64 v45; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v47; // rdi
  __m128i v48; // [rsp+0h] [rbp-58h] BYREF
  __m128i v49[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)&off_1C55508);
  a1->m128i_i64[0] = (__int64)&off_1C6DB80;
  v48 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[3].m128i_i64[0] = (__int64)off_1C6DE78;
  a1[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_1C6DE50);
  v3 = a1[33].m128i_i64[0];
  v49[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[32].m128i_i64[1];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = (void *)a1[31].m128i_i64[0];
  if ( v5 )
    sub_186B220(v5);
  v6 = a1[30].m128i_i64[1];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[30].m128i_i64[0];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[29].m128i_i64[1];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = (void *)a1[29].m128i_i64[0];
  if ( v9 )
    sub_186B220(v9);
  v10 = a1[27].m128i_i64[1];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[26].m128i_i64[0];
  if ( v11 )
    sub_186B220(v11);
  v12 = a1[22].m128i_i64[1];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[22].m128i_i64[0];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[21].m128i_i64[1];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = (void *)a1[19].m128i_i64[0];
  if ( v15 )
    sub_186B220(v15);
  v16 = (void *)a1[17].m128i_i64[1];
  if ( v16 )
    sub_186B220(v16);
  v17 = (__int64 *)a1[17].m128i_i64[0];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[16].m128i_i64[1];
          v21 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_36;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_36:
    v17 = (__int64 *)a1[17].m128i_i64[0];
    if ( v17 )
LABEL_37:
      sub_186B220(v17 - 1);
  }
  v22 = (__int64 *)a1[16].m128i_i64[0];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[15].m128i_i64[1];
          v21 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_45;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_45:
    v22 = (__int64 *)a1[16].m128i_i64[0];
    if ( v22 )
LABEL_46:
      sub_186B220(v22 - 1);
  }
  v26 = (void *)a1[14].m128i_i64[0];
  if ( v26 )
    sub_186B220(v26);
  v27 = (__int64 *)a1[13].m128i_i64[1];
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[13].m128i_i64[0];
          v21 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_56;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_56:
    v27 = (__int64 *)a1[13].m128i_i64[1];
    if ( v27 )
LABEL_57:
      sub_186B220(v27 - 1);
  }
  v31 = (__int64 *)a1[12].m128i_i64[1];
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_66;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = a1[12].m128i_i64[0];
          v21 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_65;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_65:
    v31 = (__int64 *)a1[12].m128i_i64[1];
    if ( v31 )
LABEL_66:
      sub_186B220(v31 - 1);
  }
  v35 = (_QWORD **)a1[11].m128i_i64[1];
  if ( v35 )
  {
    v36 = &v35[*((unsigned int *)v35 - 1)];
    if ( v35 == v36 )
      goto LABEL_79;
    do
    {
      v37 = *v35;
      if ( *v35 )
      {
        v38 = v37[3];
        if ( v38 )
          sub_186B220((void *)(v38 - 8));
        v39 = v37[2];
        if ( v39 )
          sub_186B220((void *)(v39 - 8));
        v40 = v37[1];
        if ( v40 )
          sub_186B220((void *)(v40 - 8));
        sub_186B220(v37);
      }
      ++v35;
    }
    while ( v36 != v35 );
    v36 = (_QWORD **)a1[11].m128i_i64[1];
    if ( v36 )
    {
LABEL_79:
      *((_DWORD *)v36 - 1) = 0;
      sub_186B220(v36 - 1);
    }
  }
  si128 = _mm_load_si128(v49);
  v42 = a1[6].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = si128;
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = a1[5].m128i_i64[1];
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v44 = _mm_load_si128(&v48);
  v45 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = v44;
  if ( v45 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v45 - 8));
  v47 = a1[3].m128i_i64[1];
  if ( v47 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v47 - 8));
  return result;
}

