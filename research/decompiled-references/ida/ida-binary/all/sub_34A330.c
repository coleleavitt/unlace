QT::QPlainTextEdit *__fastcall sub_34A330(bool *a1)
{
  QT::QPlainTextEdit *v1; // rbp
  QT::QObject *v3; // r12
  QT::QPlainTextEdit *v4; // r12
  size_t v5; // rax
  char *v6; // r13
  unsigned __int64 v7; // rdx
  double v8; // xmm0_8
  QT::QTextDocument *v9; // rax
  const char *v10; // rsi
  char *s; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = qword_8CF078;
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !qword_8CF078 )
  {
    v3 = (QT::QObject *)operator new(0x48u);
    sub_34A1E0(v3, nullptr);
    qword_8CF078 = v3;
    s = nullptr;
    v12 = 0;
    getinf_str(&s, 85);
    v4 = qword_8CF078;
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
    QT::QPlainTextEdit::setPlainText(v4, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v9 = (QT::QTextDocument *)QT::QPlainTextEdit::document(qword_8CF078);
    QT::QTextDocument::setModified(v9, 0);
    v10 = (const char *)((dword_8BDE50 & 0x20000000) == 0 ? 256 : 128);
    sub_4B8B20(qword_8CF078, v10);
    if ( s )
    {
      *(_QWORD *)&v12 = 0;
      qfree(s, v10, v8);
    }
  }
  if ( a1 )
    *a1 = v1 == nullptr;
  return qword_8CF078;
}
