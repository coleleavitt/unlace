__m128i *__fastcall sub_40ED60(__m128i *a1, __int64 *a2, char a3, __int64 a4)
{
  __int64 *v4; // r13
  size_t v7; // rax
  __m128i si128; // xmm0
  double v10; // xmm0_8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  const char *v13; // rbx
  __m128i ptr[2]; // [rsp+0h] [rbp-98h] BYREF
  void *v15[2]; // [rsp+20h] [rbp-78h] BYREF
  size_t v16; // [rsp+30h] [rbp-68h]
  __m128i v17; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v4 = a2 + 6;
  v18 = __readfsqword(0x28u);
  if ( (a3 & 0x10) != 0 )
    v4 = a2 + 9;
  if ( (unsigned __int64)v4[1] <= 1 )
  {
    v10 = QT::QString::fromUtf8(v15, 6, "sub_%1");
    QT::QString::arg(&v17, v15, *a2, 0, 16, 32, v10);
    QT::QString::toUpper_helper((QT::QString *)ptr, (QT::QString *)&v17);
    if ( v17.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v17.m128i_i64[0], 1u) )
      free((void *)v17.m128i_i64[0]);
    if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
      free(v15[0]);
    sub_40C430(a1, ptr, 19, a3, a4);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
  }
  else
  {
    sub_40D040((QT::QString *)v15, *a2, a3, a4);
    v7 = v16;
    if ( v16 )
    {
      si128 = _mm_load_si128((const __m128i *)v15);
      a1[1].m128i_i64[0] = v16;
      *a1 = si128;
    }
    else
    {
      v11 = v4[1];
      LOBYTE(v12) = 0;
      v13 = &s1;
      if ( v11 )
      {
        v7 = v11 - 1;
        v13 = (const char *)*v4;
        v12 = (unsigned __int64)(v11 - 1) >> 63;
      }
      if ( !v13 || (_BYTE)v12 )
      {
        v7 = 0;
        if ( v13 )
          v7 = strlen(v13);
      }
      QT::QString::fromUtf8(&v17, v7, v13);
      sub_40C430(a1, &v17, 37, a3, a4);
      if ( v17.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v17.m128i_i64[0], 1u) )
        free((void *)v17.m128i_i64[0]);
      if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
        free(v15[0]);
    }
  }
  return a1;
}
