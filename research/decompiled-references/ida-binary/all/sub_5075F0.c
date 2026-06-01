__int64 __fastcall sub_5075F0(
        __m128i *this,
        const char *src,
        int *a3,
        double a4,
        __m128 si128,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char *v12; // rdi
  size_t v14; // rax
  size_t v15; // r14
  size_t v16; // r13
  __m128i v17; // xmm0
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  size_t v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int v25; // esi
  __int64 v26; // r15
  const char *v27; // rsi
  unsigned int v28; // ebx
  double v30; // xmm4_8
  double v31; // xmm5_8
  const char *v32; // r14
  size_t v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // r9
  void *v37; // rdi
  __int64 v38; // rax
  char v39; // [rsp+0h] [rbp-D0h]
  void *v40; // [rsp+8h] [rbp-C8h]
  size_t v41; // [rsp+10h] [rbp-C0h]
  const char *v42; // [rsp+18h] [rbp-B8h]
  int v43; // [rsp+2Ch] [rbp-A4h] BYREF
  char *s; // [rsp+30h] [rbp-A0h] BYREF
  int v45; // [rsp+38h] [rbp-98h] BYREF
  int v46; // [rsp+3Ch] [rbp-94h] BYREF
  void *v47; // [rsp+40h] [rbp-90h] BYREF
  __int128 v48; // [rsp+48h] [rbp-88h]
  void *srca; // [rsp+60h] [rbp-70h] BYREF
  __int128 v50; // [rsp+68h] [rbp-68h]
  void *ptr[2]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v52; // [rsp+90h] [rbp-40h]
  unsigned __int64 v53; // [rsp+98h] [rbp-38h]

  v12 = (char *)src;
  v53 = __readfsqword(0x28u);
  v48 = 0;
  v47 = nullptr;
  if ( src )
  {
    v14 = strlen(src);
    v15 = v14 + 1;
    v16 = v14;
    v47 = (void *)qvector_reserve(&v47, 0, v14 + 1, 1);
    *(_QWORD *)&v48 = v15;
    memmove(v47, src, v16);
    *((_BYTE *)v47 + v16) = 0;
    v12 = (char *)v47;
  }
  v17.m128i_i64[0] = 0;
  v50 = 0;
  srca = nullptr;
  qword_8D2348 = nullptr;
  s = nullptr;
  v18 = sub_4F9500(
          v12,
          a3,
          &v45,
          (_QWORD *)this + 23,
          &v46,
          (__int64)this + 136,
          (__m128)0LL,
          si128,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          (__int64 *)&srca,
          &v43,
          &s);
  v25 = v45;
  v42 = v18;
  *((_DWORD *)this + 54) |= v43;
  if ( v25 )
    *((_BYTE *)this + 312) = 1;
  v26 = v50;
  if ( (_QWORD)v50 && (v21 = v50 - 1, (_QWORD)v50 != 1) )
  {
    v36 = srca;
    v37 = *((void **)this + 34);
    if ( *((_QWORD *)this + 36) < (unsigned __int64)v50 )
    {
      v40 = srca;
      v41 = v50 - 1;
      v38 = qvector_reserve(this + 17, *((_QWORD *)this + 34), v50, 1);
      *((_QWORD *)this + 34) = v38;
      v36 = v40;
      v37 = (void *)v38;
      v21 = v41;
    }
    *((_QWORD *)this + 35) = v26;
    memmove(v37, v36, v21);
    *(_BYTE *)(*((_QWORD *)this + 34) + v26 - 1) = 0;
  }
  else
  {
    *((_QWORD *)this + 35) = 0;
  }
  if ( v42 && *v42 )
  {
    sub_4FAE90((QT::QWidget **)this, s);
    v32 = qword_8D2348;
    if ( qword_8D2348 )
    {
      v33 = strlen(qword_8D2348);
      QT::QString::fromUtf8(ptr, v33, v32);
      v17 = _mm_loadu_si128(this + 20);
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v34 = *((_QWORD *)this + 42);
      v35 = v52;
      *(this + 20) = (__m128i)si128;
      *((_QWORD *)this + 42) = v35;
      v52 = v34;
      *(__m128i *)ptr = v17;
      if ( v17.m128i_i64[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v17.m128i_i64[0], 1u) )
          free(ptr[0]);
      }
    }
    v27 = v42;
    v28 = sub_505680(
            (QT::QWidget *)this,
            v42,
            (unsigned int *)a3,
            &v45,
            *(double *)v17.m128i_i64,
            si128,
            a6,
            a7,
            v30,
            v31,
            a10,
            a11);
  }
  else
  {
    v27 = v42;
    sub_169630(
      (int)"form: error at %s",
      (__int64)v42,
      v19,
      v20,
      v21,
      v22,
      (__m128)0LL,
      si128,
      a6,
      a7,
      v23,
      v24,
      a10,
      a11,
      v39);
    v28 = 0;
  }
  if ( srca )
  {
    *(_QWORD *)&v50 = 0;
    *(double *)v17.m128i_i64 = qfree(srca, v27);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47, v27, *(double *)v17.m128i_i64);
  }
  return v28;
}
