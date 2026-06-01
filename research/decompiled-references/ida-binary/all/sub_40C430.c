__m128i *__fastcall sub_40C430(__m128i *a1, const __m128i *a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // rcx
  double v8; // xmm0_8
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rax
  __m128i v13; // xmm0
  void *v14[4]; // [rsp+0h] [rbp-B8h] BYREF
  void *v15[4]; // [rsp+20h] [rbp-98h] BYREF
  void *v16[4]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a4 & 1;
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( (_DWORD)v5 )
  {
    v8 = QT::QString::fromUtf8(v14, 26, "<font color=\"%1\">%2</font>", v5);
    sub_40BAA0((__int64)v15, a3, a5);
    QT::QString::arg(v16, v14, v15, 0, 32, v8);
    QT::QString::toHtmlEscaped((QT::QString *)ptr);
    QT::QString::arg(a1, v16, ptr, 0, 32, v8);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      v9 = (volatile signed __int32 *)v16[0];
      if ( !v16[0] )
        goto LABEL_6;
    }
    else
    {
      v9 = (volatile signed __int32 *)v16[0];
      if ( !v16[0] )
        goto LABEL_6;
    }
    if ( !_InterlockedSub(v9, 1u) )
    {
      free(v16[0]);
      v10 = (volatile signed __int32 *)v15[0];
      if ( !v15[0] )
        goto LABEL_8;
      goto LABEL_7;
    }
LABEL_6:
    v10 = (volatile signed __int32 *)v15[0];
    if ( !v15[0] )
      goto LABEL_8;
LABEL_7:
    if ( !_InterlockedSub(v10, 1u) )
    {
      free(v15[0]);
      v11 = (volatile signed __int32 *)v14[0];
      if ( !v14[0] )
        return a1;
LABEL_9:
      if ( !_InterlockedSub(v11, 1u) )
        free(v14[0]);
      return a1;
    }
LABEL_8:
    v11 = (volatile signed __int32 *)v14[0];
    if ( !v14[0] )
      return a1;
    goto LABEL_9;
  }
  v13 = _mm_loadu_si128(a2);
  a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
  *a1 = v13;
  if ( v13.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v13.m128i_i64[0], 1u);
  return a1;
}
