QT::QWidget *__fastcall sub_5044E0(__int64 a1, __int64 a2, __int64 a3)
{
  QT::QWidget *v4; // r12
  QT::QPlainTextEdit *v5; // rbp
  unsigned __int64 v6; // rax
  signed __int64 v7; // rax
  const char *v8; // r14
  bool v9; // cl
  __int16 v10; // ax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v4 = (QT::QWidget *)operator new(0x48u);
  sub_50FFF0(v4);
  v5 = (QT::QPlainTextEdit *)sub_50FF00(v4);
  *((_BYTE *)v5 + 105) = *(_WORD *)(a3 + 32);
  *((_BYTE *)v5 + 105) &= 1u;
  sub_527D10(v5);
  QT::QPlainTextEdit::setReadOnly(v5, (*(_BYTE *)(a3 + 32) & 4) != 0);
  v6 = *(_QWORD *)(a3 + 16);
  if ( v6 > 1 )
  {
    v7 = v6 - 1;
    v8 = *(const char **)(a3 + 8);
    v9 = v8 == nullptr || v7 < 0;
    if ( (~(unsigned __int8)*(_WORD *)(a3 + 32) & 0x84) != 0 )
    {
      if ( v9 )
      {
        v7 = 0;
        if ( v8 )
          v7 = strlen(*(const char **)(a3 + 8));
      }
      QT::QString::fromUtf8(ptr, v7, v8);
      QT::QPlainTextEdit::setPlainText(v5, (const QT::QString *)ptr);
    }
    else
    {
      if ( v9 )
      {
        v7 = 0;
        if ( v8 )
          v7 = strlen(*(const char **)(a3 + 8));
      }
      QT::QString::fromUtf8(ptr, v7, v8);
      QT::QPlainTextEdit::appendHtml(v5, (const QT::QString *)ptr);
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  *((_BYTE *)v5 + 104) = (*(_BYTE *)(a3 + 32) & 0x10) != 0;
  v10 = *(_WORD *)(a3 + 32);
  if ( (v10 & 0x20) != 0 )
  {
    QT::QFont::QFont((QT::QFont *)ptr);
    if ( (unsigned __int8)sub_47A5E0(QT::QCoreApplication::self, (__int64)ptr, "Text input") )
      QT::QWidget::setFont(v5, (const QT::QFont *)ptr);
    QT::QFont::~QFont((QT::QFont *)ptr);
    v10 = *(_WORD *)(a3 + 32);
  }
  if ( (v10 & 8) != 0 )
    QT::QPlainTextEdit::selectAll(v5);
  sub_504300(a1, (__int64)v5);
  return v4;
}
