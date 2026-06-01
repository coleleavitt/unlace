unsigned __int64 __fastcall sub_3D0320(__int64 a1, const QT::QString *a2)
{
  _BYTE v3[8]; // [rsp+8h] [rbp-40h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) == QT::QCompleter::widget((QT::QCompleter *)a1) )
  {
    QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v3);
    QT::QTextCursor::select(v3, 0);
    QT::QTextCursor::insertText((QT::QTextCursor *)v3, a2);
    QT::QString::fromUtf8(ptr, 1, " ");
    QT::QTextCursor::insertText((QT::QTextCursor *)v3, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QPlainTextEdit::setTextCursor(*(QT::QPlainTextEdit **)(a1 + 16), (const QT::QTextCursor *)v3);
    *(_DWORD *)(a1 + 40) = 0;
    QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v3);
  }
  return v5 - __readfsqword(0x28u);
}
