void __fastcall sub_80DD20(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // r14
  __m128i v8; // xmm0
  _BYTE *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  void (__fastcall ***v13)(__int64, __int64, _BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rbp
  __int64 *v14; // rbp
  __int64 *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 *v19; // rbp
  __int64 *v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 *v25; // rbp
  __int64 *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbp
  __int64 *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  void *v37; // rdi
  __m128i v38; // xmm6
  __int64 v39; // rdi
  __int64 v40; // rdi
  __m128i v41; // xmm7
  __int64 v42; // rdi
  __int64 v43; // rdi
  __m128i v44; // [rsp+0h] [rbp-58h] BYREF
  __m128i v45; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1 - 2;
  v8 = _mm_loadl_epi64((const __m128i *)&off_1C54E08);
  v9 = algn_1C6C7D0;
  a1[-2].m128i_i64[0] = (__int64)&off_1C6CA88;
  v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[1].m128i_i64[0] = (__int64)off_1C6CD70;
  *a1 = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_1C6CD48);
  v10 = a1[23].m128i_i64[0];
  v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[22].m128i_i64[1];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[22].m128i_i64[0];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = (void (__fastcall ***)(__int64, __int64, _BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[21].m128i_i64[1];
  if ( v13 )
  {
    (**v13)(
      a1[21].m128i_i64[1],
      a2,
      v9,
      a4,
      a5,
      a6,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      v45.m128i_i64[0],
      v45.m128i_i64[1]);
    sub_186B220(v13);
  }
  v14 = (__int64 *)a1[20].m128i_i64[1];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[20].m128i_i64[0];
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_16;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_16:
    v14 = (__int64 *)a1[20].m128i_i64[1];
    if ( v14 )
LABEL_17:
      sub_186B220(v14 - 1);
  }
  v19 = (__int64 *)a1[19].m128i_i64[1];
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a1[19].m128i_i64[0];
          v18 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_25;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_25:
    v19 = (__int64 *)a1[19].m128i_i64[1];
    if ( v19 )
LABEL_26:
      sub_186B220(v19 - 1);
  }
  v23 = a1[18].m128i_i64[1];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = a1[18].m128i_i64[0];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = (__int64 *)a1[17].m128i_i64[1];
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = a1[17].m128i_i64[0];
          v18 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_38;
      }
      sub_15D7BC0(v28, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_38:
    v25 = (__int64 *)a1[17].m128i_i64[1];
    if ( v25 )
LABEL_39:
      sub_186B220(v25 - 1);
  }
  v29 = (__int64 *)a1[16].m128i_i64[1];
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v30 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = a1[16].m128i_i64[0];
          v18 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_47;
      }
      sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_47:
    v29 = (__int64 *)a1[16].m128i_i64[1];
    if ( v29 )
LABEL_48:
      sub_186B220(v29 - 1);
  }
  v33 = (__int64 *)a1[15].m128i_i64[1];
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = a1[15].m128i_i64[0];
          v18 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_56;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_56:
    v33 = (__int64 *)a1[15].m128i_i64[1];
    if ( v33 )
LABEL_57:
      sub_186B220(v33 - 1);
  }
  v37 = (void *)a1[13].m128i_i64[1];
  if ( v37 )
    sub_186B220(v37);
  v38 = _mm_load_si128(&v45);
  v39 = a1[4].m128i_i64[0];
  a1[-2].m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[1].m128i_i64[0] = (__int64)off_1C6C848;
  *a1 = v38;
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v40 = a1[3].m128i_i64[1];
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  v41 = _mm_load_si128(&v44);
  v42 = a1[2].m128i_i64[0];
  a1[-2].m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1[1].m128i_i64[0] = (__int64)off_1C6A6A8;
  *a1 = v41;
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = a1[1].m128i_i64[1];
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  operator delete(v6, 0x1A8u);
}

