unsigned __int64 sub_4F7CB0(QT::QTime *a1, __int64 a2, ...)
{
  const char *v2; // r12
  double v3; // xmm0_8
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  const char *v9; // rdx
  const char *v10; // rdx
  const char *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v15[12]; // [rsp+Ch] [rbp-18Ch] BYREF
  __int128 v16; // [rsp+18h] [rbp-180h]
  void *ptr[4]; // [rsp+30h] [rbp-168h] BYREF
  void *v18[4]; // [rsp+50h] [rbp-148h] BYREF
  void *v19; // [rsp+70h] [rbp-128h] BYREF
  const char *v20; // [rsp+78h] [rbp-120h]
  gcc_va_list va; // [rsp+90h] [rbp-108h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp-F0h]
  __int64 v23; // [rsp+C0h] [rbp-D8h]
  __int64 v24; // [rsp+C8h] [rbp-D0h]
  __int64 v25; // [rsp+D0h] [rbp-C8h]
  __int64 v26; // [rsp+D8h] [rbp-C0h]

  va_start(va, a2);
  v23 = va_arg(va, _QWORD);
  v24 = va_arg(va, _QWORD);
  v25 = va_arg(va, _QWORD);
  v26 = va_arg(va, _QWORD);
  va_end(va);
  v22 = __readfsqword(0x28u);
  *(_DWORD *)&v15[8] = 0;
  v16 = 0;
  *(_QWORD *)v15 = (unsigned int)QT::QTime::currentTime(a1);
  if ( (unsigned int)a1 > 0x20 )
  {
    v2 = "tree";
    if ( (_DWORD)a1 != 64 )
    {
      v2 = "unknown?";
      if ( (_DWORD)a1 == 128 )
        v2 = "selection";
    }
  }
  else
  {
    v2 = "unknown?";
    if ( (_DWORD)a1 )
    {
      switch ( (int)a1 )
      {
        case 1:
          v2 = "misc";
          break;
        case 2:
          v2 = "to-pixels";
          break;
        case 4:
          v2 = "from-pixels";
          break;
        case 8:
          v2 = "lifecycle";
          break;
        case 16:
          v2 = "text";
          break;
        case 32:
          v2 = "nav";
          break;
        default:
          v2 = "unknown?";
          break;
      }
    }
  }
  v3 = QT::QString::fromUtf8(ptr, 12, "HH:mm:ss.zzz");
  QT::QTime::toString(v18, v15, ptr[2], ptr[1], v3);
  QT::QString::toUtf8_helper((QT::QString *)&v19, (const QT::QString *)v18);
  v4 = v20;
  if ( !v20 )
    goto LABEL_26;
  while ( 1 )
  {
    sub_169A50((__int64 *)&v15[4], (__int64)"%s: ACC (%s): ", v4, v2);
    if ( v19 && !_InterlockedSub((volatile signed __int32 *)v19, 1u) )
      free(v19);
    if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
      free(v18[0]);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    va_start(va, a2);
    sub_16F9E0((__int64 *)&v15[4], a2, (const __m128i *)va, v5, v6, v7);
    v8 = qword_8D22E0;
    if ( qword_8D22E0 )
      break;
    v12 = &s1;
    if ( (_QWORD)xmmword_8D22F8 )
      v12 = (const char *)qword_8D22F0;
    qword_8D22E0 = fopenWT(v12);
    v8 = qword_8D22E0;
    if ( qword_8D22E0 )
      break;
    if ( under_debugger )
      BUG();
    interr(40479, a2, v13, v14, v3);
LABEL_26:
    v4 = (const char *)&QT::QByteArray::_empty;
  }
  v9 = &s1;
  if ( (_QWORD)v16 )
    v9 = *(const char **)&v15[4];
  sub_199CF0(v8, (__int64)"%s", v9);
  qflush(qword_8D22E0);
  if ( *(_QWORD *)&v15[4] )
  {
    *(_QWORD *)&v16 = 0;
    qfree(*(_QWORD *)&v15[4], "%s", v10);
  }
  return v22 - __readfsqword(0x28u);
}
