__int64 __fastcall sub_501D70(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  double v14; // xmm0_8
  __int64 v16; // rdx
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  double v21; // xmm4_8
  double v22; // xmm5_8
  unsigned int v23; // eax
  char *v24; // r12
  unsigned int v25; // r14d
  __m128i *p_ptr; // rsi
  __int64 v27; // r13
  signed __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128i *v34; // [rsp-8h] [rbp-88h]
  char *s2; // [rsp+0h] [rbp-80h] BYREF
  __int128 v36; // [rsp+8h] [rbp-78h]
  char *s1; // [rsp+20h] [rbp-60h] BYREF
  __int128 v38; // [rsp+28h] [rbp-58h]
  __m128i ptr; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-28h]

  v14 = 0.0;
  v40 = __readfsqword(0x28u);
  s2 = nullptr;
  s1 = nullptr;
  v36 = 0;
  v38 = 0;
  v16 = (unsigned int)*(char *)(a2 + 52);
  v17 = *(const char **)(a2 + 32);
  sub_4F9450(a1, v17, v16, (__int64 *)&s2, 1, a14, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10);
  v20 = (void *)sub_4F9070(a2, (__int64)v17, 0.0, v18, v19);
  v23 = sub_500EB0(
          a1,
          *(const QT::QObject **)a2,
          *(_BYTE *)(a2 + 52),
          *(char **)(a2 + 32),
          v20,
          a2,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v21,
          v22,
          a9,
          a10,
          0,
          (char *)&s1);
  v24 = s1;
  v25 = v23;
  p_ptr = v34;
  if ( (_BYTE)v23 )
  {
    v27 = v38;
    if ( (unsigned __int64)v38 > 1 )
    {
      p_ptr = (__m128i *)&::s1;
      if ( (_QWORD)v36 )
      {
        p_ptr = (__m128i *)s2;
        if ( !strcmp(s1, s2) )
          goto LABEL_5;
      }
      else if ( !strcmp(s1, &::s1) )
      {
        goto LABEL_5;
      }
      v29 = v27 - 1;
      if ( !v24 || v29 < 0 )
      {
        v29 = 0;
        if ( v24 )
          v29 = strlen(v24);
      }
      v14 = QT::QString::fromUtf8(&ptr, v29, v24);
      p_ptr = &ptr;
      sub_4F77C0(*(char *)(a2 + 52), &ptr, v14, v30, v31, v32, v33);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      v24 = s1;
    }
  }
LABEL_5:
  if ( v24 )
  {
    *(_QWORD *)&v38 = 0;
    v14 = qfree(v24, p_ptr->m128i_i8);
  }
  if ( s2 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(s2, p_ptr->m128i_i8, v14);
  }
  return v25;
}
