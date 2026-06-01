QT::QTextDocument **__fastcall sub_4F03A0(
        QT::QTextDocument **a1,
        __int64 a2,
        const QT::QString *a3,
        __int64 a4,
        __int64 a5)
{
  QT::QTextDocument *v8; // rbp
  QT::QTextDocument *v9; // r15
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF

  v11[3] = __readfsqword(0x28u);
  v8 = (QT::QTextDocument *)operator new(0x10u);
  QT::QTextDocument::QTextDocument(v8, nullptr);
  *a1 = v8;
  QT::QTextDocument::setHtml(v8, a3);
  v9 = *a1;
  sub_4F00D0((QT::QFont *)v11, a2, a4, (const QT::QFont *)(a5 + 88));
  QT::QTextDocument::setDefaultFont(v9, (const QT::QFont *)v11);
  QT::QFont::~QFont((QT::QFont *)v11);
  QT::QTextDocument::setDocumentMargin(*a1, 0.0);
  return a1;
}
