__int64 sub_349FB0()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  size_t v2; // r15
  size_t v3; // rbx
  const char *v4; // r14
  QT::QPlainTextEdit *v5; // r13
  QT::QTextDocument *v6; // rax
  void *s2; // [rsp+0h] [rbp-98h] BYREF
  __int128 v9; // [rsp+8h] [rbp-90h]
  void *v10[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+30h] [rbp-68h]
  void *ptr[11]; // [rsp+40h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !qword_8CF078 )
    return 0;
  s2 = nullptr;
  v9 = 0;
  getinf_str(&s2, 85);
  QT::QPlainTextEdit::document(qword_8CF078);
  QT::QTextDocument::toPlainText((QT::QTextDocument *)ptr);
  sub_349790((QT::QString *)v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v0 = v9;
    v1 = v11;
    if ( !(_QWORD)v9 )
    {
LABEL_5:
      if ( v1 )
      {
        LOBYTE(v2) = 0;
        v3 = 0;
        v4 = &s1;
        goto LABEL_7;
      }
      goto LABEL_12;
    }
  }
  else
  {
    v0 = v9;
    v1 = v11;
    if ( !(_QWORD)v9 )
      goto LABEL_5;
  }
  v3 = v0 - 1;
  v4 = (const char *)s2;
  v2 = v3 >> 63;
  if ( v3 != v1 || v3 && memcmp(v10[1], s2, v3) )
  {
LABEL_7:
    v5 = qword_8CF078;
    if ( !v4 || (_BYTE)v2 )
    {
      v3 = 0;
      if ( v4 )
        v3 = strlen(v4);
    }
    QT::QString::fromUtf8(ptr, v3, v4);
    QT::QPlainTextEdit::setPlainText(v5, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
LABEL_12:
  v6 = (QT::QTextDocument *)QT::QPlainTextEdit::document(qword_8CF078);
  QT::QTextDocument::setModified(v6, 0);
  if ( v10[0] && !_InterlockedSub((volatile signed __int32 *)v10[0], 1u) )
    free(v10[0]);
  if ( s2 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(s2, nullptr);
  }
  return 1;
}
