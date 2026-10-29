void __fastcall sub_10136F0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // r13
  void *v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  _BYTE *v14; // rsi
  __int64 v15; // rax
  size_t v16; // rdx
  _BYTE *v17; // rdi
  const void *v18; // rsi
  __int64 v19; // rdx
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __int64 v22; // rax
  __int64 v23; // rax
  void **v24; // rbp
  void **v25; // rbx
  void **v26; // rbp
  void **v27; // rbx
  __int64 v28; // rdx
  size_t v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-240h]
  __int64 v31; // [rsp+8h] [rbp-240h]
  __m128i v32; // [rsp+10h] [rbp-238h] BYREF
  __int64 v33; // [rsp+20h] [rbp-228h]
  __m128i v34; // [rsp+28h] [rbp-220h] BYREF
  void *v35; // [rsp+38h] [rbp-210h]
  __int64 v36; // [rsp+40h] [rbp-208h]
  __m128i v37; // [rsp+48h] [rbp-200h] BYREF
  __int64 v38; // [rsp+58h] [rbp-1F0h]
  void *v39; // [rsp+60h] [rbp-1E8h]
  __int64 v40; // [rsp+68h] [rbp-1E0h]
  __m128i v41; // [rsp+70h] [rbp-1D8h] BYREF
  void **v42; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v43; // [rsp+88h] [rbp-1C0h]
  _BYTE v44[128]; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i v45; // [rsp+110h] [rbp-138h] BYREF
  __int64 v46; // [rsp+120h] [rbp-128h]
  __m128i v47; // [rsp+128h] [rbp-120h]
  void *v48; // [rsp+138h] [rbp-110h]
  __int64 v49; // [rsp+140h] [rbp-108h]
  __m128i v50; // [rsp+148h] [rbp-100h] BYREF
  __int64 v51; // [rsp+158h] [rbp-F0h]
  void *v52; // [rsp+160h] [rbp-E8h]
  __int64 v53; // [rsp+168h] [rbp-E0h]
  __m128i v54; // [rsp+170h] [rbp-D8h] BYREF
  void **v55; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+188h] [rbp-C0h]
  _BYTE v57[184]; // [rsp+190h] [rbp-B8h] BYREF

  v4 = (_BYTE *)(a3 + 56);
  v33 = *(_QWORD *)(a3 + 16);
  v35 = &v37;
  v7 = *(void **)(a3 + 40);
  v32 = _mm_loadu_si128((const __m128i *)a3);
  v34 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  if ( v7 == (void *)(a3 + 56) )
  {
    v37 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  }
  else
  {
    v35 = v7;
    v37.m128i_i64[0] = *(_QWORD *)(a3 + 56);
  }
  v8 = *(_QWORD *)(a3 + 48);
  v9 = (_BYTE *)(a3 + 96);
  *(_QWORD *)(a3 + 40) = v4;
  *(_QWORD *)(a3 + 48) = 0;
  v36 = v8;
  v10 = *(_QWORD *)(a3 + 72);
  *(_BYTE *)(a3 + 56) = 0;
  v38 = v10;
  v39 = &v41;
  if ( *(_QWORD *)(a3 + 80) == a3 + 96 )
  {
    v41 = _mm_loadu_si128((const __m128i *)(a3 + 96));
  }
  else
  {
    v39 = *(void **)(a3 + 80);
    v41.m128i_i64[0] = *(_QWORD *)(a3 + 96);
  }
  v11 = *(_QWORD *)(a3 + 88);
  v12 = *(_DWORD *)(a3 + 120);
  *(_QWORD *)(a3 + 80) = v9;
  v13 = a3 + 112;
  *(_QWORD *)(a3 + 88) = 0;
  v40 = v11;
  v42 = (void **)v44;
  *(_BYTE *)(a3 + 96) = 0;
  v43 = 0x400000000LL;
  if ( v12 )
  {
    sub_CEFDD0((__int64)&v42, a3 + 112);
    v14 = *(_BYTE **)(a3 + 40);
    v13 = a3 + 112;
    *(__m128i *)a3 = _mm_loadu_si128((const __m128i *)a1);
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 16);
    *(__m128i *)(a3 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 24));
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 == a1 + 56 )
    {
      v4 = v14;
      v14 = *(_BYTE **)(a1 + 40);
      goto LABEL_7;
    }
    if ( v14 != v4 )
    {
      *(_QWORD *)(a3 + 40) = v15;
      v28 = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a3 + 56) = *(_QWORD *)(a1 + 56);
      if ( v14 )
      {
        *(_QWORD *)(a1 + 40) = v14;
        *(_QWORD *)(a1 + 56) = v28;
        goto LABEL_14;
      }
      v14 = (_BYTE *)(a1 + 56);
LABEL_13:
      *(_QWORD *)(a1 + 40) = v14;
      goto LABEL_14;
    }
    v14 = (_BYTE *)(a1 + 56);
LABEL_12:
    *(_QWORD *)(a3 + 40) = v15;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 56) = *(_QWORD *)(a1 + 56);
    goto LABEL_13;
  }
  v14 = (_BYTE *)(a1 + 56);
  *(__m128i *)a3 = _mm_loadu_si128((const __m128i *)a1);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 16);
  *(__m128i *)(a3 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v15 = *(_QWORD *)(a1 + 40);
  if ( a1 + 56 != v15 )
    goto LABEL_12;
LABEL_7:
  v16 = *(_QWORD *)(a1 + 48);
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      *v4 = *(_BYTE *)(a1 + 56);
      v16 = *(_QWORD *)(a1 + 48);
      v4 = *(_BYTE **)(a3 + 40);
    }
    else
    {
      v30 = v13;
      memcpy(v4, v14, v16);
      v16 = *(_QWORD *)(a1 + 48);
      v4 = *(_BYTE **)(a3 + 40);
      v13 = v30;
    }
  }
  *(_QWORD *)(a3 + 48) = v16;
  v4[v16] = 0;
  v14 = *(_BYTE **)(a1 + 40);
LABEL_14:
  *(_QWORD *)(a1 + 48) = 0;
  *v14 = 0;
  v17 = *(_BYTE **)(a3 + 80);
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 72);
  v18 = *(const void **)(a1 + 80);
  if ( v18 == (const void *)(a1 + 96) )
  {
    v29 = *(_QWORD *)(a1 + 88);
    if ( v29 )
    {
      if ( v29 == 1 )
      {
        *v17 = *(_BYTE *)(a1 + 96);
        v29 = *(_QWORD *)(a1 + 88);
        v17 = *(_BYTE **)(a3 + 80);
      }
      else
      {
        v31 = v13;
        memcpy(v17, v18, v29);
        v29 = *(_QWORD *)(a1 + 88);
        v17 = *(_BYTE **)(a3 + 80);
        v13 = v31;
      }
    }
    *(_QWORD *)(a3 + 88) = v29;
    v17[v29] = 0;
    v17 = *(_BYTE **)(a1 + 80);
  }
  else
  {
    if ( v9 == v17 )
    {
      *(_QWORD *)(a3 + 80) = v18;
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 96);
    }
    else
    {
      *(_QWORD *)(a3 + 80) = v18;
      v19 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 96);
      if ( v17 )
      {
        *(_QWORD *)(a1 + 80) = v17;
        *(_QWORD *)(a1 + 96) = v19;
        goto LABEL_18;
      }
    }
    *(_QWORD *)(a1 + 80) = a1 + 96;
    v17 = (_BYTE *)(a1 + 96);
  }
LABEL_18:
  *(_QWORD *)(a1 + 88) = 0;
  *v17 = 0;
  sub_CEFDD0(v13, a1 + 112);
  v20 = _mm_load_si128(&v32);
  v21 = _mm_loadu_si128(&v34);
  v46 = v33;
  v48 = &v50;
  v45 = v20;
  v47 = v21;
  if ( v35 == &v37 )
  {
    v50 = _mm_loadu_si128(&v37);
  }
  else
  {
    v48 = v35;
    v50.m128i_i64[0] = v37.m128i_i64[0];
  }
  v22 = v36;
  v37.m128i_i8[0] = 0;
  v36 = 0;
  v49 = v22;
  v35 = &v37;
  v51 = v38;
  v52 = &v54;
  if ( v39 == &v41 )
  {
    v54 = _mm_load_si128(&v41);
  }
  else
  {
    v52 = v39;
    v54.m128i_i64[0] = v41.m128i_i64[0];
  }
  v23 = v40;
  v41.m128i_i8[0] = 0;
  v40 = 0;
  v53 = v23;
  v39 = &v41;
  v55 = (void **)v57;
  v56 = 0x400000000LL;
  if ( (_DWORD)v43 )
    sub_CEFDD0((__int64)&v55, (__int64)&v42);
  sub_1012C50(a1, 0, (a2 - a1) >> 8, (__int64)&v45);
  v24 = v55;
  v25 = &v55[4 * (unsigned int)v56];
  if ( v55 != v25 )
  {
    do
    {
      while ( 1 )
      {
        v25 -= 4;
        if ( *v25 == v25 + 2 )
          break;
        operator delete(*v25);
        if ( v24 == v25 )
          goto LABEL_27;
      }
    }
    while ( v24 != v25 );
LABEL_27:
    v25 = v55;
  }
  if ( v25 != (void **)v57 )
    free(v25);
  if ( v52 != &v54 )
    operator delete(v52);
  if ( v48 != &v50 )
    operator delete(v48);
  v26 = v42;
  v27 = &v42[4 * (unsigned int)v43];
  if ( v42 != v27 )
  {
    do
    {
      while ( 1 )
      {
        v27 -= 4;
        if ( *v27 == v27 + 2 )
          break;
        operator delete(*v27);
        if ( v26 == v27 )
          goto LABEL_37;
      }
    }
    while ( v26 != v27 );
LABEL_37:
    v27 = v42;
  }
  if ( v27 != (void **)v44 )
    free(v27);
  if ( v39 != &v41 )
    operator delete(v39);
  if ( v35 != &v37 )
    operator delete(v35);
}
