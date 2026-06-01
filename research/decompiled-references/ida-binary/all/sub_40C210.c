__int64 __fastcall sub_40C210(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  double v5; // xmm0_8
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rax
  double v10; // xmm0_8
  void *v11[4]; // [rsp+0h] [rbp-B8h] BYREF
  void *v12[4]; // [rsp+20h] [rbp-98h] BYREF
  void *v13[4]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr[11]; // [rsp+60h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( (a3 & 1) != 0 )
  {
    v5 = QT::QString::fromUtf8(
           v11,
           74,
           ": <span style=\"font-family: monospace\"><font color=\"%1\">\"%2\"</font></span>");
    sub_40BAA0((__int64)v12, 11, a4);
    QT::QString::arg(v13, v11, v12, 0, 32, v5);
    QT::QString::toHtmlEscaped((QT::QString *)ptr);
    QT::QString::arg(a1, v13, ptr, 0, 32, v5);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      v6 = (volatile signed __int32 *)v13[0];
      if ( !v13[0] )
        goto LABEL_6;
    }
    else
    {
      v6 = (volatile signed __int32 *)v13[0];
      if ( !v13[0] )
        goto LABEL_6;
    }
    if ( !_InterlockedSub(v6, 1u) )
    {
      free(v13[0]);
      v7 = (volatile signed __int32 *)v12[0];
      if ( !v12[0] )
        goto LABEL_8;
      goto LABEL_7;
    }
LABEL_6:
    v7 = (volatile signed __int32 *)v12[0];
    if ( !v12[0] )
      goto LABEL_8;
LABEL_7:
    if ( !_InterlockedSub(v7, 1u) )
    {
      free(v12[0]);
      v8 = (volatile signed __int32 *)v11[0];
      if ( !v11[0] )
        return a1;
LABEL_9:
      if ( !_InterlockedSub(v8, 1u) )
        free(v11[0]);
      return a1;
    }
LABEL_8:
    v8 = (volatile signed __int32 *)v11[0];
    if ( !v11[0] )
      return a1;
    goto LABEL_9;
  }
  v10 = QT::QString::fromUtf8(ptr, 6, ": \"%1\"");
  QT::QString::arg(a1, ptr, a2 + 208, 0, 32, v10);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
