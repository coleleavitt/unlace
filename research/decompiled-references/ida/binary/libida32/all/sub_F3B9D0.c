__int64 __fastcall sub_F3B9D0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        void *a7,
        size_t n,
        void *a9,
        __int64 a10,
        __int8 *a11,
        size_t a12,
        char *a13,
        __int64 a14)
{
  __int64 v15; // r12
  __int8 *v16; // rbx
  size_t v17; // r13
  __m128i si128; // xmm0
  void *v19; // rax
  signed __int64 v20; // r13
  unsigned __int64 v21; // rbx
  const void *v22; // rax
  char *v23; // rdi
  char *v24; // rdi
  int v25; // edx
  const void *v26; // r11
  size_t v27; // rax
  unsigned __int64 v28; // r10
  __int8 v29; // al
  __m128i v30; // xmm2
  size_t v31; // rbx
  unsigned int v32; // ebx
  void *v33; // rax
  _BYTE *v34; // rdi
  __int64 *v36; // rcx
  __int8 *v37; // r12
  __int8 v38; // dl
  __int64 v39; // rax
  void *v40; // rsi
  size_t v41; // rdx
  int v42; // eax
  size_t v43; // rdx
  size_t v44; // rdx
  void *dest; // [rsp+0h] [rbp-F8h]
  __int64 *v46; // [rsp+8h] [rbp-F0h]
  int v47; // [rsp+18h] [rbp-E0h]
  __m128i v48; // [rsp+30h] [rbp-C8h] BYREF
  void *v49; // [rsp+40h] [rbp-B8h] BYREF
  size_t v50[2]; // [rsp+48h] [rbp-B0h]
  _BYTE v51[40]; // [rsp+58h] [rbp-A0h] BYREF
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __int64 v53; // [rsp+88h] [rbp-70h]
  _BYTE v54[104]; // [rsp+90h] [rbp-68h] BYREF

  LODWORD(v15) = n;
  v16 = a11;
  v17 = a12;
  dest = (void *)(a1 + 24);
  if ( !n )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
    *(_QWORD *)a1 = a1 + 24;
    *(__m128i *)(a1 + 8) = si128;
    if ( a12 > 0x28 )
    {
      sub_22130D0(a1, a1 + 24, a12, 1);
      dest = (void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8));
    }
    else if ( !a12 )
    {
LABEL_4:
      *(_QWORD *)(a1 + 8) = v17;
      v19 = (void *)(a1 + 80);
      *(_QWORD *)(a1 + 64) = a1 + 80;
      v20 = 8 * a14;
      *(_QWORD *)(a1 + 72) = 0x600000000LL;
      v21 = (8 * a14) >> 3;
      if ( v21 > 6 )
      {
        sub_22134E0(a1 + 64, a1 + 80, v20 >> 3, 8);
        v15 = *(unsigned int *)(a1 + 72);
        v19 = (void *)(*(_QWORD *)(a1 + 64) + 8 * v15);
      }
      if ( v20 )
      {
        memcpy(v19, a13, v20);
        LODWORD(v15) = *(_DWORD *)(a1 + 72);
      }
      *(_DWORD *)(a1 + 72) = v21 + v15;
      return a1;
    }
    memcpy(dest, a11, a12);
    v17 = *(_QWORD *)(a1 + 8) + a12;
    goto LABEL_4;
  }
  v22 = a7;
  v23 = v51;
  v49 = v51;
  *(__m128i *)v50 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  if ( n > 0x28 )
  {
    sub_22130D0(&v49, v51, n, 1);
    v22 = a7;
    v23 = (char *)v49 + v50[0];
  }
  memcpy(v23, v22, n);
  v24 = v54;
  v50[0] += n;
  v25 = 0;
  v26 = a9;
  ptr = v54;
  v53 = 0x600000000LL;
  v27 = 8 * a10;
  v28 = (8 * a10) >> 3;
  if ( v28 <= 6 )
  {
    if ( !v27 )
      goto LABEL_14;
    goto LABEL_13;
  }
  sub_22134E0(&ptr, v54, (8 * a10) >> 3, 8);
  v27 = 8 * a10;
  v26 = a9;
  v25 = v53;
  v28 = (8 * a10) >> 3;
  v24 = (char *)ptr + 8 * (unsigned int)v53;
  if ( 8 * a10 )
  {
LABEL_13:
    v47 = v28;
    memcpy(v24, v26, v27);
    v25 = v53;
    LODWORD(v28) = v47;
  }
LABEL_14:
  LODWORD(v53) = v25 + v28;
  if ( a12 )
  {
    if ( a14 )
    {
      v36 = (__int64 *)a13;
      v37 = a11;
      do
      {
        v38 = *v37;
        v39 = *v36;
        v46 = v36;
        ++v37;
        v48.m128i_i8[0] = v38;
        v48.m128i_i64[1] = v39;
        sub_F3B1A0((__int64 *)&v49, &v48, a2);
        v36 = v46 + 1;
      }
      while ( &a13[8 * a12] != (char *)(v46 + 1) );
    }
    else
    {
      do
      {
        v29 = *v16;
        v48.m128i_i64[1] = 0;
        ++v16;
        v48.m128i_i8[0] = v29;
        sub_F3B1A0((__int64 *)&v49, &v48, a2);
      }
      while ( &a11[a12] != v16 );
    }
  }
  v30 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  v31 = v50[0];
  *(_QWORD *)a1 = dest;
  *(__m128i *)(a1 + 8) = v30;
  if ( v31 )
  {
    v40 = v49;
    if ( v49 == v51 )
    {
      v44 = v31;
      if ( v31 <= 0x28 || (sub_22130D0(a1, dest, v31, 1), v44 = v50[0], v40 = v49, dest = *(void **)a1, v50[0]) )
        memcpy(dest, v40, v44);
      *(_QWORD *)(a1 + 8) = v31;
      v50[0] = 0;
    }
    else
    {
      v41 = v50[1];
      *(_QWORD *)a1 = v49;
      *(_QWORD *)(a1 + 8) = v31;
      *(_QWORD *)(a1 + 16) = v41;
      v49 = v51;
      *(_OWORD *)v50 = 0;
    }
  }
  v32 = v53;
  v33 = (void *)(a1 + 80);
  v34 = ptr;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 72) = 0x600000000LL;
  if ( !v32 )
    goto LABEL_19;
  if ( v34 == v54 )
  {
    v43 = 8LL * v32;
    if ( v32 <= 6uLL
      || (sub_22134E0(a1 + 64, a1 + 80, v32, 8),
          v33 = *(void **)(a1 + 64),
          v34 = ptr,
          (v43 = 8LL * (unsigned int)v53) != 0) )
    {
      memcpy(v33, v34, v43);
      v34 = ptr;
    }
    *(_DWORD *)(a1 + 72) = v32;
    LODWORD(v53) = 0;
LABEL_19:
    if ( v34 != v54 )
      free(v34);
    goto LABEL_21;
  }
  v42 = HIDWORD(v53);
  *(_QWORD *)(a1 + 64) = v34;
  *(_DWORD *)(a1 + 72) = v32;
  *(_DWORD *)(a1 + 76) = v42;
LABEL_21:
  if ( v49 != v51 )
    free(v49);
  return a1;
}

