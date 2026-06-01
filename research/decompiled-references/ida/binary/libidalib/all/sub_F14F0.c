__int64 __fastcall sub_F14F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  size_t v4; // r12
  size_t v5; // r12
  const char *v6; // rdi
  size_t v8; // r12
  size_t v9; // r12
  void *v10; // r14
  __m128i v11; // xmm0
  size_t v12; // r13
  __int64 *v13; // r12
  void *v14; // r15
  __int64 v15; // r10
  __int16 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __m128i v20; // xmm0
  void *v21; // r14
  void *v22; // rdi
  void *v23; // r14
  void *v24; // rdi
  __int64 v25; // rax
  __int16 v27; // [rsp+10h] [rbp-150h]
  __int64 v28; // [rsp+18h] [rbp-148h]
  __m128i v29; // [rsp+20h] [rbp-140h] BYREF
  __int16 v30; // [rsp+3Ch] [rbp-124h] BYREF
  __int16 v31; // [rsp+3Eh] [rbp-122h]
  void *v32; // [rsp+40h] [rbp-120h] BYREF
  __int128 v33; // [rsp+48h] [rbp-118h]
  void *v34; // [rsp+60h] [rbp-100h] BYREF
  __int128 v35; // [rsp+68h] [rbp-F8h]
  __m128i v36; // [rsp+80h] [rbp-E0h] BYREF
  void *src; // [rsp+90h] [rbp-D0h]
  size_t n[2]; // [rsp+98h] [rbp-C8h]
  void *dest; // [rsp+A8h] [rbp-B8h]
  size_t v40[2]; // [rsp+B0h] [rbp-B0h]
  __int64 v41; // [rsp+C0h] [rbp-A0h] BYREF
  __int16 v42; // [rsp+C8h] [rbp-98h]
  __m128i v43; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v44; // [rsp+110h] [rbp-50h]
  __int16 v45; // [rsp+118h] [rbp-48h]
  unsigned __int64 v46; // [rsp+128h] [rbp-38h]

  v3 = a1[23];
  v46 = __readfsqword(0x28u);
  v36 = 0;
  src = nullptr;
  dest = nullptr;
  v41 = 0;
  v42 = 0;
  v29.m128i_i64[1] = (__int64)&v36;
  *(_OWORD *)n = 0;
  *(_OWORD *)v40 = 0;
  sub_C2940(v3, (__int64)&v36);
  if ( *(_QWORD *)(a1[24] + 8LL) )
  {
    n[0] = 0;
    v36 = (__m128i)-1LL;
    v40[0] = 0;
    v32 = nullptr;
    v33 = 0;
  }
  else
  {
    v4 = n[0];
    v32 = nullptr;
    v33 = 0;
    if ( n[0] )
    {
      v32 = (void *)qalloc_or_throw();
      *((_QWORD *)&v33 + 1) = v4;
      memcpy(v32, src, v4);
      *(_QWORD *)&v33 = v4;
    }
  }
  v5 = v40[0];
  v34 = nullptr;
  v35 = 0;
  if ( v40[0] )
  {
    v34 = (void *)qalloc_or_throw();
    *((_QWORD *)&v35 + 1) = v5;
    memcpy(v34, dest, v5);
    *(_QWORD *)&v35 = v5;
  }
  v31 = 7;
  v30 = (unsigned __int8)v42;
  v29.m128i_i64[0] = (__int64)&v34;
  while ( 1 )
  {
    v6 = s1;
    if ( a1[30] )
      v6 = (const char *)a1[29];
    if ( (int)sub_8F810((__int64)v6, v29.m128i_i64[1], &v36.m128i_u64[1], &v41, &v32, v29.m128i_i64[0], &v30) <= 0 )
    {
      *(_BYTE *)(a1[24] + 48LL) = 0;
      goto LABEL_13;
    }
    if ( (unsigned __int8)sub_C32D0((__int64)a1, v36.m128i_u64[0], v36.m128i_u64[1], v41, 0, 0) )
      break;
    sub_92200((__int64)"AUTOHIDE NONE\nIllegal memory region boundaries");
  }
  v8 = v33;
  if ( (unsigned __int64)v33 > 1 )
  {
    v23 = v32;
    v24 = src;
    if ( n[1] < (unsigned __int64)v33 )
    {
      src = (void *)qvector_reserve();
      v24 = src;
    }
    n[0] = v8;
    memmove(v24, v23, v8 - 1);
    *((char *)src + v8 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
  v9 = v35;
  if ( (unsigned __int64)v35 > 1 )
  {
    v21 = v34;
    v22 = dest;
    if ( v40[1] < (unsigned __int64)v35 )
    {
      dest = (void *)qvector_reserve();
      v22 = dest;
    }
    v40[0] = v9;
    memmove(v22, v21, v9 - 1);
    *((char *)dest + v9 - 1) = 0;
  }
  else
  {
    v40[0] = 0;
  }
  v10 = nullptr;
  v11 = _mm_load_si128(&v36);
  v12 = n[0];
  LOBYTE(v42) = v30;
  v13 = (__int64 *)a1[24];
  v43 = v11;
  HIBYTE(v42) = ((v31 & 4) != 0) | v31 & 2 | (4 * v31) & 4;
  if ( n[0] )
  {
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, src, v12);
  }
  v14 = nullptr;
  v29.m128i_i64[0] = v40[0];
  if ( v40[0] )
  {
    v14 = (void *)qalloc_or_throw();
    memcpy(v14, dest, v29.m128i_u64[0]);
  }
  v15 = v41;
  v16 = v42;
  v17 = v13[1];
  v18 = *v13;
  v44 = v41;
  v45 = v42;
  if ( v13[2] < (unsigned __int64)(v17 + 1) )
  {
    v27 = v42;
    v28 = v41;
    v25 = qvector_reserve();
    *v13 = v25;
    v18 = v25;
    v16 = v27;
    v17 = v13[1];
    v15 = v28;
  }
  v19 = v18 + 80 * v17;
  *(__m128i *)v19 = _mm_load_si128(&v43);
  *(_QWORD *)(v19 + 16) = v10;
  *(__m128i *)(v19 + 24) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  v20 = _mm_loadl_epi64(&v29);
  *(_QWORD *)(v19 + 40) = v14;
  *(_QWORD *)(v19 + 64) = v15;
  *(_WORD *)(v19 + 72) = v16;
  *(__m128i *)(v19 + 48) = _mm_unpacklo_epi64(v20, v20);
  ++v13[1];
  sub_F12C0((__int64)v13, (__int64)a1, 1);
LABEL_13:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( dest )
  {
    v40[0] = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return a2;
}

