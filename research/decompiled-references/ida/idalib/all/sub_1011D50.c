void __fastcall sub_1011D50(__int64 a1)
{
  __m128i *v1; // rbp
  void *v2; // rax
  size_t v3; // rax
  __m128i *v4; // r13
  __int64 v5; // rax
  size_t v6; // rax
  void *v7; // r14
  __int64 *v8; // rbx
  __int64 v9; // r12
  void *v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __m128i v13; // xmm4
  __m128i *v14; // rsi
  __m128i *v15; // rdi
  size_t v16; // rdx
  __int64 v17; // r8
  __m128i *v18; // rsi
  __m128i *v19; // rdi
  __int64 v20; // rdx
  void **v21; // rbp
  void **v22; // rbx
  __m128i v23; // xmm1
  __m128i *v24; // rbx
  __m128i v25; // xmm2
  __m128i *v26; // rdi
  __m128i *v27; // rax
  __int64 v28; // rdx
  __m128i *v29; // rdi
  __m128i *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  size_t v33; // rdx
  size_t v34; // rdx
  size_t v35; // rdx
  __int64 v36; // [rsp+8h] [rbp-140h] BYREF
  void *s1[2]; // [rsp+10h] [rbp-138h] BYREF
  __int64 v38; // [rsp+20h] [rbp-128h]
  __m128i v39; // [rsp+28h] [rbp-120h] BYREF
  void *src; // [rsp+38h] [rbp-110h]
  size_t n; // [rsp+40h] [rbp-108h]
  __m128i v42; // [rsp+48h] [rbp-100h] BYREF
  __int64 v43; // [rsp+58h] [rbp-F0h]
  void *v44; // [rsp+60h] [rbp-E8h]
  size_t v45; // [rsp+68h] [rbp-E0h]
  __m128i v46; // [rsp+70h] [rbp-D8h] BYREF
  void **v47; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-C0h]
  _BYTE v49[184]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = (__m128i *)(a1 + 56);
  v38 = *(_QWORD *)(a1 + 16);
  src = &v42;
  v2 = *(void **)(a1 + 40);
  *(__m128i *)s1 = _mm_loadu_si128((const __m128i *)a1);
  v39 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  if ( v2 == (void *)(a1 + 56) )
  {
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  }
  else
  {
    src = v2;
    v42.m128i_i64[0] = *(_QWORD *)(a1 + 56);
  }
  v3 = *(_QWORD *)(a1 + 48);
  v4 = (__m128i *)(a1 + 96);
  *(_QWORD *)(a1 + 40) = v1;
  *(_QWORD *)(a1 + 48) = 0;
  n = v3;
  v5 = *(_QWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 56) = 0;
  v43 = v5;
  v44 = &v46;
  if ( *(_QWORD *)(a1 + 80) == a1 + 96 )
  {
    v46 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  }
  else
  {
    v44 = *(void **)(a1 + 80);
    v46.m128i_i64[0] = *(_QWORD *)(a1 + 96);
  }
  v6 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 80) = v4;
  *(_QWORD *)(a1 + 88) = 0;
  v45 = v6;
  *(_BYTE *)(a1 + 96) = 0;
  v47 = (void **)v49;
  v48 = 0x400000000LL;
  if ( *(_DWORD *)(a1 + 120) )
    sub_CEFDD0((__int64)&v47, a1 + 112);
  while ( 1 )
  {
    v7 = (void *)v1[-19].m128i_i64[0];
    v8 = &v1[-4].m128i_i64[1];
    v9 = (__int64)&v1[3].m128i_i64[1];
    v10 = v7;
    if ( s1[1] <= v7 )
      v10 = s1[1];
    if ( !v10 )
      break;
    v11 = memcmp(s1[0], (const void *)v1[-20].m128i_i64[1], (size_t)v10);
    if ( !v11 )
      break;
    if ( v11 >= 0 )
      goto LABEL_13;
LABEL_33:
    v23 = _mm_loadu_si128((__m128i *)((char *)v1 - 312));
    v24 = v1 - 16;
    v25 = _mm_loadu_si128(v1 - 18);
    v26 = (__m128i *)v1[-1].m128i_i64[0];
    v1[-3].m128i_i64[1] = v1[-19].m128i_i64[1];
    v27 = (__m128i *)v1[-17].m128i_i64[0];
    *(__m128i *)((char *)v1 - 56) = v23;
    v1[-2] = v25;
    if ( &v1[-16] == v27 )
    {
      v33 = v1[-17].m128i_u64[1];
      if ( v33 )
      {
        if ( v33 == 1 )
          v26->m128i_i8[0] = v24->m128i_i8[0];
        else
          memcpy(v26, &v1[-16], v33);
        v33 = v1[-17].m128i_u64[1];
        v26 = (__m128i *)v24[15].m128i_i64[0];
      }
      v24[15].m128i_i64[1] = v33;
      v26->m128i_i8[v33] = 0;
      v26 = (__m128i *)v1[-17].m128i_i64[0];
    }
    else
    {
      if ( v1 == v26 )
      {
        v24[15].m128i_i64[0] = (__int64)v27;
        v1[-1].m128i_i64[1] = v1[-17].m128i_i64[1];
        v1->m128i_i64[0] = v1[-16].m128i_i64[0];
      }
      else
      {
        v24[15].m128i_i64[0] = (__int64)v27;
        v28 = v1->m128i_i64[0];
        v1[-1].m128i_i64[1] = v1[-17].m128i_i64[1];
        v1->m128i_i64[0] = v1[-16].m128i_i64[0];
        if ( v26 )
        {
          v1[-17].m128i_i64[0] = (__int64)v26;
          v24->m128i_i64[0] = v28;
          goto LABEL_37;
        }
      }
      v1[-17].m128i_i64[0] = (__int64)v1[-16].m128i_i64;
      v26 = v1 - 16;
    }
LABEL_37:
    v1[-17].m128i_i64[1] = 0;
    v4 -= 16;
    v26->m128i_i8[0] = 0;
    v29 = (__m128i *)v24[17].m128i_i64[1];
    v24[17].m128i_i64[0] = v24[1].m128i_i64[0];
    v30 = (__m128i *)v24[1].m128i_i64[1];
    if ( v30 == v4 )
    {
      v34 = v24[2].m128i_u64[0];
      if ( v34 )
      {
        if ( v34 == 1 )
          v29->m128i_i8[0] = v24[2].m128i_i8[8];
        else
          memcpy(v29, v4, v34);
        v34 = v24[2].m128i_u64[0];
        v29 = (__m128i *)v24[17].m128i_i64[1];
      }
      v24[18].m128i_i64[0] = v34;
      v29->m128i_i8[v34] = 0;
      v29 = (__m128i *)v24[1].m128i_i64[1];
    }
    else
    {
      if ( v29 == (__m128i *)&v1[2].m128i_u64[1] )
      {
        v24[17].m128i_i64[1] = (__int64)v30;
        v24[18].m128i_i64[0] = v24[2].m128i_i64[0];
        v24[18].m128i_i64[1] = v24[2].m128i_i64[1];
      }
      else
      {
        v24[17].m128i_i64[1] = (__int64)v30;
        v31 = v24[18].m128i_i64[1];
        v24[18].m128i_i64[0] = v24[2].m128i_i64[0];
        v24[18].m128i_i64[1] = v24[2].m128i_i64[1];
        if ( v29 )
        {
          v24[1].m128i_i64[1] = (__int64)v29;
          v24[2].m128i_i64[1] = v31;
          goto LABEL_41;
        }
      }
      v24[1].m128i_i64[1] = (__int64)v4;
      v29 = v4;
    }
LABEL_41:
    v24[2].m128i_i64[0] = 0;
    v32 = (__int64)&v1[-13].m128i_i64[1];
    v1 -= 16;
    v29->m128i_i8[0] = 0;
    sub_CEFDD0(v9, v32);
  }
  if ( s1[1] != v7 && s1[1] < v7 )
    goto LABEL_33;
LABEL_13:
  v12 = v38;
  v13 = _mm_loadu_si128(&v39);
  v14 = (__m128i *)src;
  v15 = (__m128i *)v8[5];
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)s1);
  v16 = n;
  v8[2] = v12;
  *(__m128i *)(v8 + 3) = v13;
  if ( v14 == &v42 )
  {
    if ( v16 )
    {
      if ( v16 == 1 )
        v15->m128i_i8[0] = v42.m128i_i8[0];
      else
        memcpy(v15, v14, v16);
      v16 = n;
      v15 = (__m128i *)v8[5];
    }
    v8[6] = v16;
    v15->m128i_i8[v16] = 0;
    v15 = (__m128i *)src;
  }
  else
  {
    if ( v1 == v15 )
    {
      v36 = v42.m128i_i64[0];
      v8[5] = (__int64)v14;
      *((__m128 *)v8 + 3) = _mm_loadh_ps((const double *)&v36);
    }
    else
    {
      v36 = v42.m128i_i64[0];
      v17 = v1->m128i_i64[0];
      v8[5] = (__int64)v14;
      *((__m128 *)v8 + 3) = _mm_loadh_ps((const double *)&v36);
      if ( v15 )
      {
        src = v15;
        v42.m128i_i64[0] = v17;
        goto LABEL_17;
      }
    }
    v15 = &v42;
    src = &v42;
  }
LABEL_17:
  n = 0;
  v15->m128i_i8[0] = 0;
  v18 = (__m128i *)v44;
  v19 = (__m128i *)v8[10];
  v8[9] = v43;
  if ( v18 == &v46 )
  {
    v35 = v45;
    if ( v45 )
    {
      if ( v45 == 1 )
        v19->m128i_i8[0] = v46.m128i_i8[0];
      else
        memcpy(v19, v18, v45);
      v35 = v45;
      v19 = (__m128i *)v8[10];
    }
    v8[11] = v35;
    v19->m128i_i8[v35] = 0;
    v19 = (__m128i *)v44;
  }
  else
  {
    if ( v19 == v4 )
    {
      v36 = v46.m128i_i64[0];
      v8[10] = (__int64)v18;
      *(__m128 *)(v8 + 11) = _mm_loadh_ps((const double *)&v36);
    }
    else
    {
      v36 = v46.m128i_i64[0];
      v20 = v8[12];
      v8[10] = (__int64)v18;
      *(__m128 *)(v8 + 11) = _mm_loadh_ps((const double *)&v36);
      if ( v19 )
      {
        v44 = v19;
        v46.m128i_i64[0] = v20;
        goto LABEL_21;
      }
    }
    v19 = &v46;
    v44 = &v46;
  }
LABEL_21:
  v45 = 0;
  v19->m128i_i8[0] = 0;
  sub_CEFDD0((__int64)&v1[3].m128i_i64[1], (__int64)&v47);
  v21 = v47;
  v22 = &v47[4 * (unsigned int)v48];
  if ( v47 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 4;
        if ( *v22 == v22 + 2 )
          break;
        operator delete(*v22);
        if ( v21 == v22 )
          goto LABEL_24;
      }
    }
    while ( v21 != v22 );
LABEL_24:
    v22 = v47;
  }
  if ( v22 != (void **)v49 )
    free(v22);
  if ( v44 != &v46 )
    operator delete(v44);
  if ( src != &v42 )
    operator delete(src);
}
