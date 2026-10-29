__int64 __fastcall sub_F0640(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  size_t v4; // r12
  size_t v5; // r12
  const char *v6; // rdi
  size_t v8; // r12
  size_t v9; // r12
  void *v10; // r14
  size_t v11; // r13
  __int64 *v12; // r12
  void *v13; // r15
  int v14; // r10d
  __int16 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __m128i v20; // xmm0
  void *v21; // r14
  void *v22; // rdi
  void *v23; // r14
  void *v24; // rdi
  __int64 v25; // rax
  __int16 v27; // [rsp+10h] [rbp-130h]
  int v28; // [rsp+18h] [rbp-128h]
  __m128i v29; // [rsp+20h] [rbp-120h] BYREF
  __int16 v30; // [rsp+3Ch] [rbp-104h] BYREF
  __int16 v31; // [rsp+3Eh] [rbp-102h]
  void *v32; // [rsp+40h] [rbp-100h] BYREF
  __int128 v33; // [rsp+48h] [rbp-F8h]
  void *v34; // [rsp+60h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+68h] [rbp-D8h]
  __int64 v36; // [rsp+80h] [rbp-C0h] BYREF
  void *src; // [rsp+88h] [rbp-B8h]
  size_t n[2]; // [rsp+90h] [rbp-B0h]
  void *dest; // [rsp+A0h] [rbp-A0h]
  size_t v40[2]; // [rsp+A8h] [rbp-98h]
  int v41; // [rsp+B8h] [rbp-88h] BYREF
  __int16 v42; // [rsp+BCh] [rbp-84h]
  __int64 v43; // [rsp+C0h] [rbp-80h]
  int v44; // [rsp+F8h] [rbp-48h]
  __int16 v45; // [rsp+FCh] [rbp-44h]
  unsigned __int64 v46; // [rsp+108h] [rbp-38h]

  v3 = a1[23];
  v46 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v36 = 0;
  src = nullptr;
  dest = nullptr;
  v41 = 0;
  v42 = 0;
  v29.m128i_i64[1] = (__int64)&v36;
  *(_OWORD *)v40 = 0;
  sub_C17A0(v3, (__int64)&v36);
  if ( *(_QWORD *)(a1[24] + 8LL) )
  {
    v36 = -1;
    n[0] = 0;
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
  v29.m128i_i64[0] = (__int64)&v41;
  while ( 1 )
  {
    v6 = s1;
    if ( a1[30] )
      v6 = (const char *)a1[29];
    if ( (int)sub_8F730((__int64)v6, v29.m128i_i64[1], (char *)&v36 + 4, v29.m128i_i64[0], &v32, &v34, &v30) <= 0 )
    {
      *(_BYTE *)(a1[24] + 48LL) = 0;
      goto LABEL_13;
    }
    if ( (unsigned __int8)sub_C2110((__int64)a1, v36, HIDWORD(v36), v41, 0, 0) )
      break;
    sub_92120((__int64)"AUTOHIDE NONE\nIllegal memory region boundaries");
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
  v11 = n[0];
  v12 = (__int64 *)a1[24];
  LOBYTE(v42) = v30;
  HIBYTE(v42) = ((v31 & 4) != 0) | v31 & 2 | (4 * v31) & 4;
  v43 = v36;
  if ( n[0] )
  {
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, src, v11);
  }
  v13 = nullptr;
  v29.m128i_i64[0] = v40[0];
  if ( v40[0] )
  {
    v13 = (void *)qalloc_or_throw();
    memcpy(v13, dest, v29.m128i_u64[0]);
  }
  v14 = v41;
  v15 = v42;
  v16 = v12[1];
  v17 = *v12;
  v44 = v41;
  v45 = v42;
  if ( v12[2] < (unsigned __int64)(v16 + 1) )
  {
    v27 = v42;
    v28 = v41;
    v25 = qvector_reserve();
    *v12 = v25;
    v17 = v25;
    v15 = v27;
    v16 = v12[1];
    v14 = v28;
  }
  v18 = (v16 << 6) + v17;
  v19 = v43;
  *(__m128i *)(v18 + 16) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  v20 = _mm_loadl_epi64(&v29);
  *(_QWORD *)v18 = v19;
  *(_QWORD *)(v18 + 8) = v10;
  *(_QWORD *)(v18 + 32) = v13;
  *(_DWORD *)(v18 + 56) = v14;
  *(_WORD *)(v18 + 60) = v15;
  *(__m128i *)(v18 + 40) = _mm_unpacklo_epi64(v20, v20);
  ++v12[1];
  sub_F0430((__int64)v12, (__int64)a1, 1);
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

