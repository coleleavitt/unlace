__int64 __fastcall sub_F1B10(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r12
  size_t v4; // r13
  size_t v5; // r13
  __int16 v6; // dx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r14
  const char *v11; // rdi
  unsigned __int64 v12; // r12
  size_t v14; // r12
  size_t v15; // r12
  _QWORD *v16; // r12
  __int64 v17; // r13
  size_t v18; // r14
  size_t v19; // r14
  void *v20; // r14
  void *v21; // rdi
  void *v22; // r14
  void *v23; // rdi
  void *v24; // r8
  void *v25; // rax
  void *v26; // r8
  void *v27; // rax
  void *v28; // [rsp+30h] [rbp-100h]
  void *v29; // [rsp+30h] [rbp-100h]
  __int16 v31; // [rsp+44h] [rbp-ECh] BYREF
  __int16 v32; // [rsp+46h] [rbp-EAh]
  __m128i v33; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-D8h] BYREF
  void *v35; // [rsp+60h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+68h] [rbp-C8h]
  void *v37; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+88h] [rbp-A8h]
  __m128i v39; // [rsp+A0h] [rbp-90h] BYREF
  void *dest; // [rsp+B0h] [rbp-80h] BYREF
  size_t v41[2]; // [rsp+B8h] [rbp-78h]
  void *src; // [rsp+C8h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-60h]
  __int64 v44; // [rsp+E0h] [rbp-50h]
  __int16 v45; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v46; // [rsp+F8h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  v2 = (_QWORD *)a1[24];
  if ( a2 >= v2[1] )
    return -1;
  v3 = *v2 + 80 * a2;
  if ( !v3 )
    return -1;
  dest = nullptr;
  v39 = _mm_loadu_si128((const __m128i *)v3);
  *(_OWORD *)v41 = 0;
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
  {
    v41[1] = *(_QWORD *)(v3 + 24);
    dest = (void *)qalloc_or_throw();
    memcpy(dest, *(const void **)(v3 + 16), v4);
    v41[0] = v4;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v5 = *(_QWORD *)(v3 + 48);
  if ( v5 )
  {
    src = (void *)qalloc_or_throw();
    n[1] = v5;
    memcpy(src, *(const void **)(v3 + 40), v5);
    n[0] = v5;
  }
  v6 = *(_WORD *)(v3 + 72);
  v7 = *(_QWORD *)(v3 + 64);
  v35 = nullptr;
  v36 = 0;
  v45 = v6;
  v44 = v7;
  v33 = v39;
  v34 = v7;
  if ( v41[0] )
  {
    v35 = (void *)qalloc_or_throw();
    *((_QWORD *)&v36 + 1) = v41[0];
    memcpy(v35, dest, v41[0]);
    *(_QWORD *)&v36 = v41[0];
  }
  v37 = nullptr;
  v38 = 0;
  if ( n[0] )
  {
    v37 = (void *)qalloc_or_throw();
    *((_QWORD *)&v38 + 1) = n[0];
    memcpy(v37, src, n[0]);
    *(_QWORD *)&v38 = n[0];
  }
  v31 = (unsigned __int8)v45;
  v32 = (HIBYTE(v45) >> 2) & 1 | HIBYTE(v45) & 2 | (4 * HIBYTE(v45)) & 4;
  while ( 1 )
  {
    v11 = s1;
    if ( a1[33] )
      v11 = (const char *)a1[32];
    if ( (int)sub_8F810((__int64)v11, &v33, &v33.m128i_u64[1], &v34, &v35, &v37, &v31) <= 0 )
    {
      *(_BYTE *)(a1[24] + 48LL) = 0;
      goto LABEL_18;
    }
    v8 = v34;
    v9 = v33.m128i_i64[1];
    v10 = v33.m128i_i64[0];
    if ( (unsigned __int8)sub_C32D0((__int64)a1, v33.m128i_u64[0], v33.m128i_u64[1], v34, 1u, a2) )
      break;
    sub_92200((__int64)"AUTOHIDE NONE\nIllegal memory region boundaries");
  }
  v44 = v8;
  v14 = v36;
  v39.m128i_i64[0] = v10;
  v39.m128i_i64[1] = v9;
  if ( (unsigned __int64)v36 > 1 )
  {
    v22 = v35;
    v23 = dest;
    if ( v41[1] < (unsigned __int64)v36 )
    {
      dest = (void *)qvector_reserve();
      v23 = dest;
    }
    v41[0] = v14;
    memmove(v23, v22, v14 - 1);
    *((char *)dest + v14 - 1) = 0;
  }
  else
  {
    v41[0] = 0;
  }
  v15 = v38;
  if ( (unsigned __int64)v38 > 1 )
  {
    v20 = v37;
    v21 = src;
    if ( n[1] < (unsigned __int64)v38 )
    {
      src = (void *)qvector_reserve();
      v21 = src;
    }
    n[0] = v15;
    memmove(v21, v20, v15 - 1);
    *((char *)src + v15 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
  HIBYTE(v45) = ((v32 & 4) != 0) | v32 & 2 | (4 * v32) & 4;
  LOBYTE(v45) = v31;
  v16 = (_QWORD *)a1[24];
  if ( a2 < v16[1] )
  {
    v17 = *v16 + 80 * a2;
    *(__m128i *)v17 = _mm_load_si128(&v39);
    if ( (void **)(v17 + 16) != &dest )
    {
      v18 = v41[0];
      if ( v41[0] > 1 )
      {
        v24 = dest;
        v25 = *(void **)(v17 + 16);
        if ( *(_QWORD *)(v17 + 32) < v41[0] )
        {
          v28 = dest;
          v25 = (void *)qvector_reserve();
          *(_QWORD *)(v17 + 16) = v25;
          v24 = v28;
        }
        *(_QWORD *)(v17 + 24) = v18;
        memmove(v25, v24, v18 - 1);
        *(_BYTE *)(*(_QWORD *)(v17 + 16) + v18 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v17 + 24) = 0;
      }
    }
    if ( (void **)(v17 + 40) != &src )
    {
      v19 = n[0];
      if ( n[0] > 1 )
      {
        v26 = src;
        v27 = *(void **)(v17 + 40);
        if ( *(_QWORD *)(v17 + 56) < n[0] )
        {
          v29 = src;
          v27 = (void *)qvector_reserve();
          *(_QWORD *)(v17 + 40) = v27;
          v26 = v29;
        }
        *(_QWORD *)(v17 + 48) = v19;
        memmove(v27, v26, v19 - 1);
        *(_BYTE *)(*(_QWORD *)(v17 + 40) + v19 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v17 + 48) = 0;
      }
    }
    *(_QWORD *)(v17 + 64) = v44;
    *(_WORD *)(v17 + 72) = v45;
  }
  sub_F12C0((__int64)v16, (__int64)a1, 1);
LABEL_18:
  v12 = a2;
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( dest )
  {
    v41[0] = 0;
    qfree();
  }
  return v12;
}

