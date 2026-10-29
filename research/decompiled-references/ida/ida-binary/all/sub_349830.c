unsigned __int64 __fastcall sub_349830(
        QT::QPlainTextEdit *this,
        char a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  char *v15; // r13
  size_t v16; // r15
  __int64 v17; // rdx
  char v18; // al
  char *v19; // r13
  __int64 v20; // rax
  signed __int64 v21; // rax
  const char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r12d
  char v27; // [rsp+0h] [rbp-88h]
  __int64 v28; // [rsp+8h] [rbp-80h]
  char *v29; // [rsp+10h] [rbp-78h] BYREF
  __int128 v30; // [rsp+18h] [rbp-70h]
  char *s[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_17;
  QT::QString::toUtf8_helper((QT::QString *)s, (QT::QPlainTextEdit *)((char *)this + 40));
  v15 = s[1];
  v29 = nullptr;
  v30 = 0;
  if ( s[1] )
  {
    v16 = strlen(s[1]);
    v17 = v16 + 1;
  }
  else
  {
    v15 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_5;
    v17 = 1;
    v16 = 0;
  }
  v28 = v17;
  v29 = (char *)qvector_reserve(&v29, 0, v17, 1);
  *(_QWORD *)&v30 = v28;
  memmove(v29, v15, v16);
  v29[v16] = 0;
LABEL_5:
  if ( s[0] && !_InterlockedSub((volatile signed __int32 *)s[0], 1u) )
    free(s[0]);
  v18 = sub_196F50(
          (int)&v29,
          3,
          (int)"Please enter search string",
          v10,
          v11,
          v12,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v13,
          v14,
          a9,
          a10,
          v27);
  v19 = v29;
  if ( v18 )
  {
    v20 = v30;
    if ( (unsigned __int64)v30 > 1 )
    {
      *((_DWORD *)this + 16) = 0;
      v21 = v20 - 1;
      if ( !v19 || v21 < 0 )
      {
        v21 = 0;
        if ( v19 )
          v21 = strlen(v19);
      }
      v22 = (const char *)v21;
      QT::QString::fromUtf8(s, v21, v19);
      a3 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
      v23 = *((_QWORD *)this + 7);
      v24 = v32;
      *(__m128i *)((char *)this + 40) = _mm_load_si128((const __m128i *)s);
      *((_QWORD *)this + 7) = v24;
      v32 = v23;
      *(__m128 *)s = a3;
      if ( a3.m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)a3.m128_u64[0], 1u) )
        free(s[0]);
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        *(double *)a3.m128_u64 = qfree(v29, v22);
      }
LABEL_17:
      QT::QPlainTextEdit::document(this);
      QT::QTextDocument::toPlainText((QT::QTextDocument *)s);
      v25 = QT::QString::indexOf(s, (char *)this + 40, *((int *)this + 16), 1, *(double *)a3.m128_u64);
      if ( s[0] && !_InterlockedSub((volatile signed __int32 *)s[0], 1u) )
      {
        free(s[0]);
        if ( v25 == -1 )
          return v33 - __readfsqword(0x28u);
      }
      else if ( v25 == -1 )
      {
        return v33 - __readfsqword(0x28u);
      }
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14) + v25;
      QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)s);
      QT::QTextCursor::setPosition(s, v25, 0);
      QT::QTextCursor::setPosition(s, *((unsigned int *)this + 16), 1);
      QT::QPlainTextEdit::setTextCursor(this, (const QT::QTextCursor *)s);
      QT::QPlainTextEdit::ensureCursorVisible(this);
      QT::QTextCursor::~QTextCursor((QT::QTextCursor *)s);
      return v33 - __readfsqword(0x28u);
    }
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, (_BYTE *)&dword_0 + 3);
  }
  return v33 - __readfsqword(0x28u);
}
