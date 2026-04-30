unsigned __int64 __fastcall sub_527B60(QT::QPlainTextEdit *this)
{
  __int64 v1; // rbp
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  size_t v5; // rax
  char *v6; // r12
  unsigned __int64 v7; // rdx
  double v8; // xmm0_8
  _BYTE v10[8]; // [rsp+10h] [rbp-60h] BYREF
  char *s; // [rsp+18h] [rbp-58h] BYREF
  __int128 v12; // [rsp+20h] [rbp-50h]
  void *ptr[3]; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-20h]

  v1 = *((int *)this + 27);
  v14 = __readfsqword(0x28u);
  v12 = 0;
  s = nullptr;
  if ( v1 == -1 )
  {
    v2 = nullptr;
  }
  else
  {
    v2 = (char *)qvector_reserve(&s, 0, v1 + 1, 1);
    v3 = v12;
    s = v2;
    if ( (unsigned __int64)v12 < v1 + 1 )
    {
      do
      {
        v4 = v3;
        v2[v3++] = 32;
        v2 = s;
      }
      while ( v1 != v4 );
    }
    *(_QWORD *)&v12 = v1 + 1;
  }
  v2[v1] = 0;
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v10, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  if ( (_QWORD)v12 )
  {
    v5 = v12 - 1;
    v6 = s;
    v7 = (unsigned __int64)(v12 - 1) >> 63;
  }
  else
  {
    LOBYTE(v7) = 0;
    v5 = 0;
    v6 = (char *)&s1;
  }
  if ( !v6 || (_BYTE)v7 )
  {
    v5 = 0;
    if ( v6 )
      v5 = strlen(v6);
  }
  v8 = QT::QString::fromUtf8(ptr, v5, v6);
  QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v10, (const QT::QString *)ptr, -1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QPlainTextEdit::setTabStopDistance(this, v8);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v10);
  if ( s )
  {
    *(_QWORD *)&v12 = 0;
    qfree(s, (const char *)ptr);
  }
  return v14 - __readfsqword(0x28u);
}
