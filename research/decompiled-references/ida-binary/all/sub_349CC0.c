unsigned __int64 __fastcall sub_349CC0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  QT::QTextDocument *v8; // rax
  QT::QTextDocument *v10; // rax
  __int64 v11; // rdx
  void *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  void *v19; // [rsp+0h] [rbp-58h] BYREF
  void *v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  void *ptr[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( qword_8CF078 )
  {
    v8 = (QT::QTextDocument *)QT::QPlainTextEdit::document(qword_8CF078);
    if ( (unsigned __int8)QT::QTextDocument::isModified(v8) )
    {
      v10 = (QT::QTextDocument *)QT::QPlainTextEdit::document(qword_8CF078);
      QT::QTextDocument::setModified(v10, 0);
      QT::QPlainTextEdit::document(qword_8CF078);
      QT::QTextDocument::toPlainText((QT::QTextDocument *)ptr);
      sub_349790((QT::QString *)&v19, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v11 = v21 + 1;
      if ( v21 + 1 > 1024000 )
      {
        QT::QByteArray::resize((QT::QByteArray *)&v19, 1023999);
        sub_169700(
          (int)"The notepad text was too large and has been truncated to %d bytes\n",
          1023999,
          v13,
          v14,
          v15,
          v16,
          a1,
          a2,
          a3,
          a4,
          v17,
          v18,
          a7,
          a8,
          (char)v19);
        v11 = v21 + 1;
      }
      v12 = v20;
      if ( !v20 )
        v12 = &QT::QByteArray::_empty;
      setinf_buf(85, v12, v11);
      if ( v19 && !_InterlockedSub((volatile signed __int32 *)v19, 1u) )
        free(v19);
    }
  }
  return v23 - __readfsqword(0x28u);
}
