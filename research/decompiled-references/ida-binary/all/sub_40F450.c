__m128i *__fastcall sub_40F450(__m128i *a1, signed __int64 a2, const char *a3, char a4, __int64 a5)
{
  double v8; // xmm0_8
  __m128i si128; // xmm0
  double v11; // xmm0_8
  void *v12[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-C8h]
  void *v14[4]; // [rsp+20h] [rbp-B8h] BYREF
  void *v15[4]; // [rsp+40h] [rbp-98h] BYREF
  void *v16[4]; // [rsp+60h] [rbp-78h] BYREF
  void *ptr[11]; // [rsp+80h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a3 || a2 < 0 )
  {
    a2 = 0;
    if ( a3 )
      a2 = strlen(a3);
  }
  v8 = QT::QString::fromUtf8(v12, a2, a3);
  if ( (a4 & 1) != 0 )
  {
    v11 = QT::QString::fromUtf8(v14, 26, "<font color=\"%1\">%2</font>", v8);
    sub_40BAA0((__int64)v15, 19, a5);
    QT::QString::arg(v16, v14, v15, 0, 32, v11);
    QT::QString::toHtmlEscaped((QT::QString *)ptr);
    QT::QString::arg(a1, v16, ptr, 0, 32, v11);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
      free(v16[0]);
    if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
      free(v15[0]);
    if ( v14[0] && !_InterlockedSub((volatile signed __int32 *)v14[0], 1u) )
      free(v14[0]);
    if ( v12[0] && !_InterlockedSub((volatile signed __int32 *)v12[0], 1u) )
      free(v12[0]);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)v12);
    a1[1].m128i_i64[0] = v13;
    *a1 = si128;
  }
  return a1;
}
