unsigned __int64 __fastcall qt_highlighter_cbs_t__::vfunc_2(__int64 a1, int a2, int a3, int a4)
{
  QT::QSyntaxHighlighter *v5; // r13
  _BYTE v7[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v5 = *(QT::QSyntaxHighlighter **)(a1 + 8);
  v8 = __readfsqword(0x28u);
  sub_5184C0((QT::QTextFormat *)v7, (__int64)v5, a4);
  QT::QSyntaxHighlighter::setFormat(v5, a2, a3, (const QT::QTextCharFormat *)v7);
  QT::QTextFormat::~QTextFormat((QT::QTextFormat *)v7);
  return v8 - __readfsqword(0x28u);
}
