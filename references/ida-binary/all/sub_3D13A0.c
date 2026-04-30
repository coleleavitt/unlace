__int64 __fastcall sub_3D13A0(__int64 a1, __int64 a2)
{
  __int64 (*v3)(); // rax
  void *v4; // rdi
  double v6; // xmm0_8
  int v7; // eax
  void *v8; // rax
  int v9; // eax
  __m128i si128; // xmm0
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rdx
  __int64 v14; // rdx
  void *v15; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v16[8]; // [rsp+18h] [rbp-C0h] BYREF
  void *v17[4]; // [rsp+20h] [rbp-B8h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v19; // [rsp+50h] [rbp-88h]
  void *v20[4]; // [rsp+60h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v22; // [rsp+90h] [rbp-48h]
  unsigned __int64 v23; // [rsp+98h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v3 = *(__int64 (**)())(*QT::QCoreApplication::self + 320LL);
  if ( v3 != sub_3CFBE0 && !(unsigned __int8)v3() )
    return 0;
  v4 = *(void **)(a2 + 8);
  if ( !v4 )
    v4 = &QT::QString::_empty;
  if ( (unsigned int)QT::QString::compare_helper(v4, *(_QWORD *)(a2 + 16), "{", 1, 1) )
    return 0;
  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)&v15);
  QT::QTextCursor::movePosition(&v15, 3, 0, 1);
  QT::QTextCursor::movePosition(&v15, 13, 1, 1);
  QT::QTextCursor::selection((QT::QTextCursor *)ptr);
  QT::QTextDocumentFragment::toPlainText((QT::QTextDocumentFragment *)v17);
  QT::QTextDocumentFragment::~QTextDocumentFragment((QT::QTextDocumentFragment *)ptr);
  v6 = QT::QString::fromUtf8(ptr, 2, "\\S");
  QT::QRegularExpression::QRegularExpression(v16, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = QT::QString::indexOf((QT::QString *)v17, (const QT::QRegularExpression *)v16, 0, nullptr);
  if ( v7 == -1 )
    v7 = 0;
  QT::QString::QString(v18, v7, 32);
  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)ptr);
  v8 = v15;
  v15 = ptr[0];
  ptr[0] = v8;
  QT::QTextCursor::~QTextCursor((QT::QTextCursor *)ptr);
  QT::QString::fromUtf8(ptr, 1, "\n", v6);
  QT::QTextCursor::insertText((QT::QTextCursor *)&v15, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = reg_int_op("TabulationSpaces", 0, 4, 0);
  QT::QString::QString(v20, v9, 32);
  si128 = _mm_load_si128((const __m128i *)v18);
  v22 = v19;
  *(__m128i *)ptr = si128;
  if ( si128.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)ptr, (const QT::QString *)v20);
  QT::QTextCursor::insertText((QT::QTextCursor *)&v15, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v20[0] && !_InterlockedSub((volatile signed __int32 *)v20[0], 1u) )
    free(v20[0]);
  QT::QString::fromUtf8(v20, 1, "\n");
  QT::QString::append((QT::QString *)v20, (const QT::QString *)v18);
  v11 = QT::QString::append(v20, "}", 1);
  v12 = *(void **)v11;
  *(_QWORD *)v11 = 0;
  ptr[0] = v12;
  v13 = *(void **)(v11 + 8);
  *(_QWORD *)(v11 + 8) = 0;
  ptr[1] = v13;
  v14 = *(_QWORD *)(v11 + 16);
  *(_QWORD *)(v11 + 16) = 0;
  v22 = v14;
  QT::QTextCursor::insertText((QT::QTextCursor *)&v15, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v20[0] && !_InterlockedSub((volatile signed __int32 *)v20[0], 1u) )
    free(v20[0]);
  QT::QTextCursor::movePosition(&v15, 6, 0, 1);
  QT::QTextCursor::movePosition(&v15, 13, 0, 1);
  QT::QPlainTextEdit::setTextCursor(*(QT::QPlainTextEdit **)(a1 + 16), (const QT::QTextCursor *)&v15);
  if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
    free(v18[0]);
  QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v16);
  if ( v17[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
      free(v17[0]);
  }
  QT::QTextCursor::~QTextCursor((QT::QTextCursor *)&v15);
  return 1;
}
