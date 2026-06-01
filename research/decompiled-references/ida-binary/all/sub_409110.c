QT::QTextDocument *__fastcall sub_409110(QT::QTextDocument *this, __int64 a2, volatile signed __int32 **a3)
{
  __int64 v3; // r14
  volatile signed __int32 *v4; // r13
  __int64 v6; // rax
  volatile signed __int32 *v8; // rax
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (__int64)a3[2];
  v4 = a3[1];
  v9[3] = __readfsqword(0x28u);
  if ( v3 <= 0
    || (v6 = QT::QtPrivate::qustrchr((2 * v3) >> 1, v4, 60),
        (volatile signed __int32 *)((char *)v4 + 2 * v3) == (volatile signed __int32 *)v6)
    || v6 - (_QWORD)v4 == -2 )
  {
    v8 = *a3;
    *((_QWORD *)this + 2) = v3;
    *(__m128i *)this = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v4);
    if ( v8 )
      _InterlockedAdd(v8, 1u);
  }
  else
  {
    QT::QTextDocument::QTextDocument((QT::QTextDocument *)v9, nullptr);
    QT::QTextDocument::setHtml((QT::QTextDocument *)v9, (const QT::QString *)a3);
    QT::QTextDocument::toPlainText(this);
    QT::QTextDocument::~QTextDocument((QT::QTextDocument *)v9);
  }
  return this;
}
