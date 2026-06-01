void __fastcall sub_80D1C0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // xmm0
  _BYTE *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  void (__fastcall ***v12)(__int64, __int64, _BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rbp
  __int64 *v13; // rbp
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 *v18; // rbp
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbp
  __int64 *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rbp
  __int64 *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // rdi
  __m128i v37; // xmm6
  __int64 v38; // rdi
  __int64 v39; // rdi
  __m128i v40; // xmm7
  __int64 v41; // rdi
  __int64 v42; // rdi
  __m128i v43; // [rsp+0h] [rbp-48h] BYREF
  __m128i v44; // [rsp+10h] [rbp-38h] BYREF

  v7 = _mm_loadl_epi64((const __m128i *)&off_1C54E08);
  v8 = algn_1C6C7D0;
  a1->m128i_i64[0] = (__int64)&off_1C6CA88;
  v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[3].m128i_i64[0] = (__int64)off_1C6CD70;
  a1[2] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6CD48);
  v9 = a1[25].m128i_i64[0];
  v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[24].m128i_i64[1];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[24].m128i_i64[0];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (void (__fastcall ***)(__int64, __int64, _BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[23].m128i_i64[1];
  if ( v12 )
  {
    (**v12)(
      a1[23].m128i_i64[1],
      a2,
      v8,
      a4,
      a5,
      a6,
      v43.m128i_i64[0],
      v43.m128i_i64[1],
      v44.m128i_i64[0],
      v44.m128i_i64[1]);
    sub_186B220(v12);
  }
  v13 = (__int64 *)a1[22].m128i_i64[1];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[22].m128i_i64[0];
          v17 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_16;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_16:
    v13 = (__int64 *)a1[22].m128i_i64[1];
    if ( v13 )
LABEL_17:
      sub_186B220(v13 - 1);
  }
  v18 = (__int64 *)a1[21].m128i_i64[1];
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[21].m128i_i64[0];
          v17 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_25;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_25:
    v18 = (__int64 *)a1[21].m128i_i64[1];
    if ( v18 )
LABEL_26:
      sub_186B220(v18 - 1);
  }
  v22 = a1[20].m128i_i64[1];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = a1[20].m128i_i64[0];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = (__int64 *)a1[19].m128i_i64[1];
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = a1[19].m128i_i64[0];
          v17 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_38;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_38:
    v24 = (__int64 *)a1[19].m128i_i64[1];
    if ( v24 )
LABEL_39:
      sub_186B220(v24 - 1);
  }
  v28 = (__int64 *)a1[18].m128i_i64[1];
  if ( v28 )
  {
    v29 = &v28[*((unsigned int *)v28 - 1)];
    if ( v28 >= v29 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = a1[18].m128i_i64[0];
          v17 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_47;
      }
      sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_47:
    v28 = (__int64 *)a1[18].m128i_i64[1];
    if ( v28 )
LABEL_48:
      sub_186B220(v28 - 1);
  }
  v32 = (__int64 *)a1[17].m128i_i64[1];
  if ( v32 )
  {
    v33 = &v32[*((unsigned int *)v32 - 1)];
    if ( v32 >= v33 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = a1[17].m128i_i64[0];
          v17 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_56;
      }
      sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_56:
    v32 = (__int64 *)a1[17].m128i_i64[1];
    if ( v32 )
LABEL_57:
      sub_186B220(v32 - 1);
  }
  v36 = (void *)a1[15].m128i_i64[1];
  if ( v36 )
    sub_186B220(v36);
  v37 = _mm_load_si128(&v44);
  v38 = a1[6].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = v37;
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = a1[5].m128i_i64[1];
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v40 = _mm_load_si128(&v43);
  v41 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = v40;
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = a1[3].m128i_i64[1];
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  operator delete(a1, 0x1A8u);
}

