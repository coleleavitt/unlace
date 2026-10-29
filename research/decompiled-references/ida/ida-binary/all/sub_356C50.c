__int64 __fastcall sub_356C50(__int64 a1)
{
  QT::QAbstractButton *v1; // rbp
  char v2; // al
  QT::QAbstractButton *v3; // rbp
  char v4; // al
  QT::QAbstractButton *v5; // rbp
  char v6; // al
  QT::QAbstractButton *v7; // rbp
  char v8; // al
  QT::QLineEdit *v9; // r12
  unsigned __int16 v10; // ax
  QT::QLineEdit *v11; // r12
  unsigned __int8 v12; // al
  QT::QLineEdit *v13; // r12
  unsigned __int8 v14; // al
  QT::QLineEdit *v15; // r12
  __int64 v16; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v1 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 600LL);
  v2 = getinf_flag(33, 8);
  QT::QAbstractButton::setChecked(v1, v2);
  v3 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 608LL);
  v4 = getinf_flag(33, 2);
  QT::QAbstractButton::setChecked(v3, v4);
  v5 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 616LL);
  v6 = getinf_flag(33, 4);
  QT::QAbstractButton::setChecked(v5, v6);
  v7 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 624LL);
  v8 = getinf_flag(33, 1);
  QT::QAbstractButton::setChecked(v7, v8);
  v9 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 720LL);
  v10 = getinf(43);
  QT::QString::number((QT::QString *)ptr, v10, 10);
  QT::QLineEdit::setText(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 760LL);
  v12 = getinf(30);
  QT::QString::number((QT::QString *)ptr, v12, 10);
  QT::QLineEdit::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v13 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 768LL);
  v14 = getinf(31);
  QT::QString::number((QT::QString *)ptr, v14, 10);
  QT::QLineEdit::setText(v13, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v15 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 712LL);
  v16 = getinf(25);
  QT::QString::number((QT::QString *)ptr, v16, 10);
  QT::QLineEdit::setText(v15, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return sub_356A00(a1);
}
