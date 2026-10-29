void __fastcall sub_1013CD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edx
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  void **v18; // rdx
  __int64 v19; // rax
  void **v20; // r15
  void **v21; // r15
  void **v22; // rax
  void **v23; // [rsp+8h] [rbp-258h]
  void **v24; // [rsp+10h] [rbp-250h]
  void **v25; // [rsp+10h] [rbp-250h]
  __int64 v26; // [rsp+18h] [rbp-248h]
  __m128i v27; // [rsp+28h] [rbp-238h] BYREF
  __int64 v28; // [rsp+38h] [rbp-228h]
  __m128i v29; // [rsp+40h] [rbp-220h] BYREF
  void *v30; // [rsp+50h] [rbp-210h]
  __int64 v31; // [rsp+58h] [rbp-208h]
  __m128i v32; // [rsp+60h] [rbp-200h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1F0h]
  void *v34; // [rsp+78h] [rbp-1E8h]
  __int64 v35; // [rsp+80h] [rbp-1E0h]
  __m128i v36; // [rsp+88h] [rbp-1D8h] BYREF
  void *ptr; // [rsp+98h] [rbp-1C8h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-1C0h]
  _BYTE v39[128]; // [rsp+A8h] [rbp-1B8h] BYREF
  __m128i v40; // [rsp+128h] [rbp-138h] BYREF
  __int64 v41; // [rsp+138h] [rbp-128h]
  __m128i v42; // [rsp+140h] [rbp-120h]
  void *v43; // [rsp+150h] [rbp-110h]
  __int64 v44; // [rsp+158h] [rbp-108h]
  __m128i v45; // [rsp+160h] [rbp-100h] BYREF
  __int64 v46; // [rsp+170h] [rbp-F0h]
  void *v47; // [rsp+178h] [rbp-E8h]
  __int64 v48; // [rsp+180h] [rbp-E0h]
  __m128i v49; // [rsp+188h] [rbp-D8h] BYREF
  void **v50; // [rsp+198h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+1A0h] [rbp-C0h]
  _BYTE v52[184]; // [rsp+1A8h] [rbp-B8h] BYREF

  v2 = a2 - a1;
  if ( v2 > 256 )
  {
    v3 = v2 >> 8;
    v4 = (v3 - 2) / 2;
    v5 = a1 + (v4 << 8) + 56;
    v26 = v3;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 - 40);
      v7 = _mm_loadu_si128((const __m128i *)(v5 - 56));
      v30 = &v32;
      v8 = _mm_loadu_si128((const __m128i *)(v5 - 32));
      v28 = v6;
      v9 = *(void **)(v5 - 16);
      v27 = v7;
      v29 = v8;
      if ( v9 == (void *)v5 )
      {
        v32 = _mm_loadu_si128((const __m128i *)v5);
      }
      else
      {
        v30 = v9;
        v32.m128i_i64[0] = *(_QWORD *)v5;
      }
      v10 = *(_QWORD *)(v5 + 16);
      v11 = *(_QWORD *)(v5 - 8);
      *(_QWORD *)(v5 - 16) = v5;
      *(_QWORD *)(v5 - 8) = 0;
      v33 = v10;
      v12 = *(__m128i **)(v5 + 24);
      v31 = v11;
      *(_BYTE *)v5 = 0;
      v34 = &v36;
      if ( (__m128i *)(v5 + 40) == v12 )
      {
        v12 = &v36;
        v36 = _mm_loadu_si128((const __m128i *)(v5 + 40));
      }
      else
      {
        v13 = *(_QWORD *)(v5 + 40);
        v34 = v12;
        v36.m128i_i64[0] = v13;
      }
      *(_QWORD *)(v5 + 24) = v5 + 40;
      v14 = *(_QWORD *)(v5 + 32);
      *(_BYTE *)(v5 + 40) = 0;
      *(_QWORD *)(v5 + 32) = 0;
      ptr = v39;
      v38 = 0x400000000LL;
      v15 = *(_DWORD *)(v5 + 64);
      v35 = v14;
      if ( v15 )
      {
        sub_CEFDD0((__int64)&ptr, v5 + 56);
        v11 = v31;
        v12 = (__m128i *)v34;
        v14 = v35;
        v15 = v38;
      }
      v16 = _mm_load_si128(&v27);
      v17 = _mm_loadu_si128(&v29);
      v41 = v28;
      v40 = v16;
      v43 = &v45;
      v42 = v17;
      if ( v30 == &v32 )
      {
        v45 = _mm_loadu_si128(&v32);
      }
      else
      {
        v43 = v30;
        v45.m128i_i64[0] = v32.m128i_i64[0];
      }
      v44 = v11;
      v30 = &v32;
      v46 = v33;
      v31 = 0;
      v32.m128i_i8[0] = 0;
      v47 = &v49;
      if ( v12 == &v36 )
      {
        v49 = _mm_load_si128(&v36);
      }
      else
      {
        v47 = v12;
        v49.m128i_i64[0] = v36.m128i_i64[0];
      }
      v48 = v14;
      v50 = (void **)v52;
      v34 = &v36;
      v35 = 0;
      v36.m128i_i8[0] = 0;
      v51 = 0x400000000LL;
      if ( v15 )
        sub_CEFDD0((__int64)&v50, (__int64)&ptr);
      sub_1012C50(a1, v4, v26, (__int64)&v40);
      v18 = v50;
      v19 = 4LL * (unsigned int)v51;
      v20 = &v50[v19];
      if ( v50 != &v50[v19] )
      {
        do
        {
          while ( 1 )
          {
            v20 -= 4;
            if ( *v20 == v20 + 2 )
              break;
            v24 = v18;
            operator delete(*v20);
            v18 = v24;
            if ( v24 == v20 )
              goto LABEL_18;
          }
        }
        while ( v18 != v20 );
LABEL_18:
        v20 = v50;
      }
      if ( v20 != (void **)v52 )
        free(v20);
      if ( v47 != &v49 )
        operator delete(v47);
      if ( v43 != &v45 )
        operator delete(v43);
      v21 = (void **)ptr;
      v22 = (void **)((char *)ptr + 32 * (unsigned int)v38);
      if ( !v4 )
        break;
      --v4;
      if ( ptr != v22 )
      {
        do
        {
          while ( 1 )
          {
            v22 -= 4;
            if ( *v22 == v22 + 2 )
              break;
            v25 = v22;
            operator delete(*v22);
            v22 = v25;
            if ( v25 == v21 )
              goto LABEL_29;
          }
        }
        while ( v22 != v21 );
LABEL_29:
        v22 = (void **)ptr;
      }
      if ( v22 != (void **)v39 )
        free(v22);
      if ( v34 != &v36 )
        operator delete(v34);
      if ( v30 != &v32 )
        operator delete(v30);
      v5 -= 256;
    }
    if ( ptr != v22 )
    {
      do
      {
        while ( 1 )
        {
          v22 -= 4;
          if ( *v22 == v22 + 2 )
            break;
          v23 = v22;
          operator delete(*v22);
          v22 = v23;
          if ( v23 == v21 )
            goto LABEL_48;
        }
      }
      while ( v22 != v21 );
LABEL_48:
      v21 = (void **)ptr;
    }
    if ( v21 != (void **)v39 )
      free(v21);
    if ( v34 != &v36 )
      operator delete(v34);
    if ( v30 != &v32 )
      operator delete(v30);
  }
}
