unsigned __int64 __fastcall sub_190730(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r13d
  char isChecked; // bl
  unsigned __int16 word; // r15
  __int64 qword; // r14
  QT::QLineEdit *v8; // r15
  QT::QLineEdit *v9; // r15
  QT::QLineEdit *v10; // r13
  QT::QLineEdit *v11; // r13
  QT::QLineEdit *v13; // r15
  QT::QLineEdit *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  char *v17; // rax
  QT::QLineEdit *v18; // r14
  _BYTE *v19; // rdx
  __int64 v20; // rax
  QT::QLineEdit *v21; // r14
  size_t v22; // rax
  QT::QLineEdit *v23; // r14
  QT::QLineEdit *v24; // [rsp+0h] [rbp-B8h]
  QT::QLineEdit *v25; // [rsp+0h] [rbp-B8h]
  QT::QLineEdit *v26; // [rsp+0h] [rbp-B8h]
  unsigned int dword; // [rsp+8h] [rbp-B0h]
  unsigned __int8 byte; // [rsp+Fh] [rbp-A9h]
  void *ptr[4]; // [rsp+10h] [rbp-A8h] BYREF
  char16_t s[36]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  v31 = __readfsqword(0x28u);
  v4 = (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v2 + 144)) == 0 ? 10 : 16;
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 136LL));
  byte = get_byte(a2);
  word = get_word(a2);
  dword = get_dword(a2);
  qword = get_qword(a2);
  if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 152LL)) )
  {
    word = __ROL2__(word, 8);
    *(float *)&dword = COERCE_FLOAT(_byteswap_ulong(dword));
    qword = swap64(qword);
  }
  v24 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 64LL);
  if ( isChecked )
  {
    QT::QString::number((QT::QString *)ptr, (char)byte, v4);
    QT::QLineEdit::setText(v24, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v25 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 72LL);
    QT::QString::number((QT::QString *)ptr, (__int16)word, v4);
    QT::QLineEdit::setText(v25, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v8 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 48LL);
    QT::QString::number((QT::QString *)ptr, dword, v4);
    QT::QLineEdit::setText(v8, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v9 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 40LL);
    QT::QString::number((QT::QString *)ptr, qword, v4);
    QT::QLineEdit::setText(v9, (const QT::QString *)ptr);
  }
  else
  {
    QT::QString::number((QT::QString *)ptr, byte, v4);
    QT::QLineEdit::setText(v24, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v26 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 72LL);
    QT::QString::number((QT::QString *)ptr, word, v4);
    QT::QLineEdit::setText(v26, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v13 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 48LL);
    QT::QString::number((QT::QString *)ptr, dword, v4);
    QT::QLineEdit::setText(v13, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v14 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 40LL);
    QT::QString::number((QT::QString *)ptr, qword, v4);
    QT::QLineEdit::setText(v14, (const QT::QString *)ptr);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 96LL);
  QT::QString::number((QT::QString *)ptr, *(float *)&dword, 103, 6);
  QT::QLineEdit::setText(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 112LL);
  QT::QString::number((QT::QString *)ptr, *(double *)&qword, 103, 6);
  QT::QLineEdit::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( *(_QWORD *)(a1 + 48) == a2 )
      return v31 - __readfsqword(0x28u);
  }
  else if ( *(_QWORD *)(a1 + 48) == a2 )
  {
    return v31 - __readfsqword(0x28u);
  }
  v15 = getseg(a2);
  v16 = 64;
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 8) - a2;
    if ( v16 > 0x40 )
      v16 = 64;
  }
  v17 = (char *)s + get_bytes(s, v16, a2, 0, 0);
  *(_WORD *)v17 = 0;
  v17[2] = 0;
  v18 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 176LL);
  v19 = memchr(s, 0, 0x43u);
  v20 = v19 - (_BYTE *)s;
  if ( !v19 )
    v20 = 67;
  QT::QString::fromLatin1(ptr, v20, s);
  QT::QLineEdit::setText(v18, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v21 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 192LL);
  v22 = strlen((const char *)s);
  QT::QString::fromUtf8(ptr, v22, (const char *)s);
  QT::QLineEdit::setText(v21, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v23 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 208LL);
  QT::QString::fromUtf16((QT::QString *)ptr, s, -1);
  QT::QLineEdit::setText(v23, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = a2;
  }
  return v31 - __readfsqword(0x28u);
}
