unsigned __int64 __fastcall sub_5101B0(__int64 a1)
{
  int v1; // ebp
  int v2; // ebp
  int v3; // eax
  double v4; // xmm0_8
  QT::QLabel *v5; // rbx
  size_t v6; // rax
  _BYTE v8[8]; // [rsp+8h] [rbp-460h] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-458h] BYREF
  char s[1032]; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+438h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 64) )
  {
    QT::QMetaObject::cast((QT::QMetaObject *)&off_89E260, *(const QT::QObject **)(a1 + 56));
    QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v8);
    QT::QTextCursor::block((QT::QTextCursor *)ptr);
    v1 = QT::QTextCursor::position((QT::QTextCursor *)v8);
    v2 = v1 + 1 - QT::QTextBlock::position((QT::QTextBlock *)ptr);
    v3 = sub_50FF10(a1);
    v4 = qsnprintf(s, 1024, "Line:%d\tColumn:%d", v3, v2);
    v5 = *(QT::QLabel **)(a1 + 64);
    v6 = strlen(s);
    QT::QString::fromUtf8(ptr, v6, s, v4);
    QT::QLabel::setText(v5, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v8);
  }
  return v11 - __readfsqword(0x28u);
}
