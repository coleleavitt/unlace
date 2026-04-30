__int64 __fastcall sub_201290(
        __int64 a1,
        const __m128i *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  void **v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  const char *v16; // rsi
  const char *v17; // r13
  unsigned __int64 v18; // rdx
  size_t v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __m128i v22; // xmm0
  __m128 si128; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rdx
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rcx
  double v31; // xmm4_8
  double v32; // xmm5_8
  struct _Unwind_Exception *v33; // rbp
  int v34; // [rsp+4h] [rbp-8Ch] BYREF
  const char *v35; // [rsp+8h] [rbp-88h] BYREF
  __int128 v36; // [rsp+10h] [rbp-80h]
  const char *v37; // [rsp+28h] [rbp-68h] BYREF
  __int64 v38; // [rsp+30h] [rbp-60h]
  void *ptr[2]; // [rsp+48h] [rbp-48h] BYREF
  __int64 v40; // [rsp+58h] [rbp-38h]
  unsigned __int64 v41; // [rsp+60h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  v13 = (void **)&v35;
  *(_OWORD *)a1 = 0;
  v35 = nullptr;
  v36 = 0;
  if ( sub_1EB270((__int64)a2, (__int64)&v35, 0, a12, 0.0) <= 0 )
    goto LABEL_15;
  if ( !a2[26].m128i_i64[1] )
  {
    v33 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)a2, (__int64)&v35, v14, v15);
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35, (const char *)&v35);
    }
    sub_16D970((void **)a1);
    _Unwind_Resume(v33);
  }
  v16 = &s1;
  v34 = a2[25].m128i_i16[6];
  if ( (_QWORD)v36 )
    v16 = v35;
  sub_16D580((__int64)&v37, v16, &v34);
  if ( v38 )
  {
    v19 = v38 - 1;
    v17 = v37;
    v18 = (unsigned __int64)(v38 - 1) >> 63;
    if ( !v37 )
    {
LABEL_19:
      v19 = 0;
      if ( v17 )
        v19 = strlen(v17);
      goto LABEL_8;
    }
  }
  else
  {
    v17 = &s1;
    LOBYTE(v18) = 0;
    v19 = 0;
    if ( !&s1 )
      goto LABEL_19;
  }
  if ( (_BYTE)v18 )
    goto LABEL_19;
LABEL_8:
  v13 = (void **)v19;
  QT::QString::fromUtf8(ptr, v19, v17);
  v22 = _mm_loadu_si128((const __m128i *)a1);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  v24 = *(_QWORD *)(a1 + 16);
  v25 = v40;
  *(__m128 *)a1 = si128;
  *(_QWORD *)(a1 + 16) = v25;
  v40 = v24;
  *(__m128i *)ptr = v22;
  if ( v22.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v22.m128i_i64[0], 1u) )
    free(ptr[0]);
  if ( v37 )
  {
    v38 = 0;
    *(double *)v22.m128i_i64 = qfree(v37, (const char *)v13);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    LODWORD(v37) = v34;
    sub_2006B0(a2, (__int64)&v37, 0, v25, *(double *)v22.m128i_i64, si128, a5, a6, v20, v21, a9, a10);
    sub_1FD9B0((__int64)a2, 1u, v27, *(double *)v22.m128i_i64, si128, a5, a6, v28, v29, a9, a10);
    v13 = ptr;
    LODWORD(ptr[0]) = *(_DWORD *)(a1 + 16) + v34;
    sub_2006B0(a2, (__int64)ptr, 0, v30, *(double *)v22.m128i_i64, si128, a5, a6, v31, v32, a9, a10);
  }
LABEL_15:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, (const char *)v13);
  }
  return a1;
}
