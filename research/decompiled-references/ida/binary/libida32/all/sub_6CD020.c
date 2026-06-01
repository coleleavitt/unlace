__int64 __fastcall sub_6CD020(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char v13; // al
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned __int64 v21; // rax
  unsigned int *v22; // r12
  size_t v23; // r13
  void *v24; // rax
  __int64 v25; // rcx
  __m128i v26; // xmm4
  __m128i v27; // xmm5
  void *v28; // r12
  unsigned int *v29; // r13
  size_t v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i si128; // xmm2
  __int64 v36; // r14
  __int64 v37; // rax
  void *v38; // r15
  __int64 tinfo_size; // rax
  __int64 v40; // rdi
  void *v41; // r12
  __m128i v42; // xmm1
  void *v43; // rdi
  void *v44; // rdi
  __m128i v45; // xmm1
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned int *v48; // r12
  size_t v49; // r13
  void *v50; // rax
  void *src[2]; // [rsp+0h] [rbp-88h] BYREF
  int v52[2]; // [rsp+18h] [rbp-70h]
  __int64 v53; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v55; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]

  v13 = *(_BYTE *)(a3 + 28);
  v56 = __readfsqword(0x28u);
  v15 = v13 & 0x7F;
  if ( v15 == 50 )
  {
    v46 = *(_QWORD *)(a3 + 40);
    v17 = *(_QWORD *)(a3 + 48);
    if ( (v46 & 7) != 0 )
      goto LABEL_5;
    v47 = v46 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v47 )
      goto LABEL_5;
    v48 = *(unsigned int **)(v47 + 16);
    v49 = *v48;
    src[0] = v48 + 4;
    if ( !v49 )
      goto LABEL_5;
    v55 = 0;
    ptr = nullptr;
    *(_QWORD *)v52 = &ptr;
    v50 = (void *)qvector_reserve(&ptr, 0, v49 + 1, 1);
    v55.m128i_i64[0] = v49 + 1;
    ptr = v50;
    memmove(v50, src[0], v49);
    *((_BYTE *)ptr + v49) = 0;
    v27 = _mm_loadu_si128(&v55);
    v28 = ptr;
    *(__m128i *)src = v27;
  }
  else
  {
    if ( v15 != 75 )
    {
      if ( !under_debugger )
        interr(3444);
      BUG();
    }
    v16 = *(_QWORD *)(a3 + 120);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 48);
      v18 = *(_QWORD *)(v16 + 40);
      if ( (v18 & 7) == 0 )
      {
        v21 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v21 )
        {
          v22 = *(unsigned int **)(v21 + 16);
          v23 = *v22;
          src[0] = v22 + 4;
          if ( v23 )
          {
            v55 = 0;
            ptr = nullptr;
            *(_QWORD *)v52 = &ptr;
            v24 = (void *)qvector_reserve(&ptr, 0, v23 + 1, 1);
            v55.m128i_i64[0] = v23 + 1;
            ptr = v24;
            memmove(v24, src[0], v23);
            *((_BYTE *)ptr + v23) = 0;
            a7 = (__m128)_mm_loadu_si128(&v55);
            v28 = ptr;
            *(__m128 *)src = a7;
            goto LABEL_12;
          }
        }
      }
LABEL_5:
      sub_6BB730((_QWORD *)a1, a3, (__int64)"unnamed or untyped ivar");
      return 0;
    }
    v17 = *(_QWORD *)(a3 + 56);
    v29 = *(unsigned int **)(sub_B864D0(a3, *(_QWORD *)(a1 + 48)) + 16);
    v30 = *v29;
    if ( !*v29 )
      goto LABEL_5;
    *(_QWORD *)v52 = &ptr;
    v55 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, v30 + 1, 1);
    v55.m128i_i64[0] = v30 + 1;
    memmove(ptr, v29 + 4, v30);
    *((_BYTE *)ptr + v30) = 0;
    v26 = _mm_loadu_si128(&v55);
    v28 = ptr;
    *(__m128i *)src = v26;
  }
LABEL_12:
  if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF || src[0] <= (char *)&dword_0 + 1 )
  {
    sub_6BB730((_QWORD *)a1, a3, (__int64)"unnamed or untyped ivar");
    v19 = 0;
  }
  else
  {
    v31 = v17;
    v19 = 0;
    sub_6C3AF0(&v53, a1, v31, v25, 0.0, a5, a6, a7, *(double *)v26.m128i_i64, *(double *)v27.m128i_i64, a10, a11);
    v32 = v53;
    if ( (_BYTE)v53 )
    {
      v33 = a2[1];
      v34 = *a2;
      if ( a2[2] < (unsigned __int64)(v33 + 1) )
      {
        v34 = qvector_reserve(a2, *a2, v33 + 1, 128);
        v33 = a2[1];
        v32 = v53;
        *a2 = v34;
      }
      si128 = _mm_load_si128((const __m128i *)src);
      v36 = v34 + (v33 << 7);
      *(_OWORD *)(v36 + 64) = 0;
      *(_OWORD *)(v36 + 24) = 0;
      *(_QWORD *)(v36 + 16) = 0;
      *(_OWORD *)v36 = 0;
      *(_OWORD *)(v36 + 48) = 0;
      *(_QWORD *)(v36 + 40) = 0;
      *(_QWORD *)(v36 + 96) = 1;
      *(_DWORD *)(v36 + 104) = -1;
      *(_QWORD *)(v36 + 112) = 0;
      *(_BYTE *)(v36 + 120) = 0;
      ++a2[1];
      v37 = *(_QWORD *)(v36 + 64);
      v38 = *(void **)(v36 + 16);
      *(_QWORD *)(v36 + 64) = v32;
      *(_QWORD *)(v36 + 16) = v28;
      *(__m128i *)(v36 + 24) = si128;
      v53 = v37;
      tinfo_size = get_tinfo_size(0, v32, 0);
      v40 = *(_QWORD *)v52;
      *(_QWORD *)(v36 + 8) = 8 * tinfo_size;
      sub_6B7070(v40, a1, a3);
      v41 = ptr;
      v42 = _mm_loadu_si128(&v55);
      ptr = nullptr;
      v55 = 0;
      v43 = *(void **)(v36 + 40);
      if ( v43 )
      {
        *(_QWORD *)(v36 + 48) = 0;
        *(__m128i *)src = v42;
        qfree(v43);
        v44 = ptr;
        v45 = _mm_load_si128((const __m128i *)src);
        *(_QWORD *)(v36 + 40) = v41;
        *(__m128i *)(v36 + 48) = v45;
        if ( v44 )
        {
          v55.m128i_i64[0] = 0;
          qfree(v44);
        }
      }
      else
      {
        *(_QWORD *)(v36 + 40) = v41;
        *(__m128i *)(v36 + 48) = v42;
      }
      if ( (*(_BYTE *)(a1 + 122) & 4) != 0 )
        sub_6BA840(a1, v36 + 40, (__int64 *)a3);
      v28 = v38;
      v19 = 1;
    }
    clear_tinfo_t(&v53);
  }
  if ( v28 )
    qfree(v28);
  return v19;
}

