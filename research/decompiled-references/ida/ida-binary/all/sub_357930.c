unsigned __int64 __fastcall sub_357930(__int64 a1)
{
  QT::QAbstractButton *v1; // rbp
  int v2; // eax
  QT::QLineEdit *v3; // r12
  size_t v4; // rax
  char *v5; // rbp
  unsigned __int64 v6; // rdx
  double v7; // xmm0_8
  QT::QLineEdit *v8; // r12
  QT::QLineEdit *v9; // r12
  QT::QLineEdit *v10; // r12
  QT::QLineEdit *v11; // r13
  QT::QLineEdit *v12; // r13
  QT::QLineEdit *v13; // r12
  QT::QAbstractButton **v14; // rax
  QT::QAbstractButton *v15; // rbp
  char v16; // al
  QT::QAbstractButton *v17; // rbp
  int v18; // eax
  QT::QAbstractButton *v19; // rbp
  int v20; // eax
  QT::QAbstractButton *v21; // rbp
  int v22; // eax
  QT::QAbstractButton *v23; // rbp
  int v24; // eax
  QT::QAbstractButton *v25; // rbp
  int v26; // eax
  QT::QAbstractButton *v27; // rbp
  int v28; // eax
  QT::QAbstractButton *v29; // rbp
  bool v30; // al
  __int64 v32; // rax
  char *s; // [rsp+0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+8h] [rbp-60h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1232LL), byte_8BA8E5);
  v1 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1240LL);
  v2 = reg_int_op("ShowEcfringe", 0, 1, 0);
  QT::QAbstractButton::setChecked(v1, v2 != 0);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1248LL), unk_8BCE18);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1224LL), unk_8BCE19);
  v3 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1848LL);
  sub_31A1D0((__int64 *)&s);
  if ( v34 )
  {
    v4 = v34 - 1;
    v5 = s;
    v6 = (unsigned __int64)(v34 - 1) >> 63;
  }
  else
  {
    LOBYTE(v6) = 0;
    v4 = 0;
    v5 = (char *)&s1;
  }
  if ( !v5 || (_BYTE)v6 )
  {
    v4 = 0;
    if ( v5 )
      v4 = strlen(v5);
  }
  v7 = QT::QString::fromUtf8(ptr, v4, v5);
  QT::QLineEdit::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( s )
  {
    v34 = 0;
    v7 = qfree(s, (const char *)ptr, v7);
  }
  v8 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1872LL);
  QT::QString::number((QT::QString *)ptr, *(_DWORD *)(*((_QWORD *)qword_8CF010 + 87) + 404LL), 10);
  QT::QLineEdit::setText(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1296LL);
  QT::QString::number((QT::QString *)ptr, word_8BCE1C, 10);
  QT::QLineEdit::setText(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1312LL);
  QT::QString::number((QT::QString *)ptr, dword_8BA8D4, 10);
  QT::QLineEdit::setText(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1184LL);
  QT::QString::number((QT::QString *)ptr, dword_8BA8F4, 10);
  QT::QLineEdit::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1200LL);
  QT::QString::number((QT::QString *)ptr, dword_8BA8F0, 10);
  QT::QLineEdit::setText(v12, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 1208LL), dword_8BA8F4 != 0);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1208LL), byte_8BA8ED);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1216LL), byte_8BA8EC != 1);
  v13 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1280LL);
  QT::QString::number((QT::QString *)ptr, dword_8BA8E8, 10);
  QT::QLineEdit::setText(v13, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QSpinBox::setValue(*(QT::QSpinBox **)(*(_QWORD *)(a1 + 56) + 1328LL), (int)*(double *)&qword_8CB470);
  QT::QSpinBox::setValue(*(QT::QSpinBox **)(*(_QWORD *)(a1 + 56) + 1344LL), (int)unk_8CB468);
  v14 = *(QT::QAbstractButton ***)(a1 + 56);
  if ( dword_8BA8E0 )
  {
    if ( dword_8BA8E0 == 1 )
    {
      QT::QAbstractButton::setChecked(v14[237], 1);
      v14 = *(QT::QAbstractButton ***)(a1 + 56);
    }
    else if ( dword_8BA8E0 == -1 )
    {
      QT::QAbstractButton::setChecked(v14[238], 1);
      v14 = *(QT::QAbstractButton ***)(a1 + 56);
    }
  }
  else
  {
    QT::QAbstractButton::setChecked(v14[239], 1);
    v14 = *(QT::QAbstractButton ***)(a1 + 56);
  }
  v15 = v14[240];
  v16 = sub_3D5F90(v7);
  QT::QAbstractButton::setChecked(v15, v16);
  v17 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1928LL);
  v18 = reg_int_op("FormsAutoappend", 0, 1, 0);
  QT::QAbstractButton::setChecked(v17, v18 != 0);
  v19 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1936LL);
  v20 = reg_int_op("SetTypeRenames", 0, 0, 0);
  QT::QAbstractButton::setChecked(v19, v20 != 0);
  v21 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1992LL);
  v22 = reg_int_op("TypesAutoappend", 0, 1, 0);
  QT::QAbstractButton::setChecked(v21, v22 != 0);
  v23 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 2000LL);
  v24 = reg_int_op("TypesAutoappendCaseSens", 0, 0, 0);
  QT::QAbstractButton::setChecked(v23, v24 != 0);
  v25 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 2008LL);
  v26 = reg_int_op("TypesAutoappendCurlyBr", 0, 1, 0);
  QT::QAbstractButton::setChecked(v25, v26 != 0);
  v27 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 2016LL);
  v28 = reg_int_op("TypesAutoappendHints", 0, 1, 0);
  QT::QAbstractButton::setChecked(v27, v28 != 0);
  v29 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1256LL);
  if ( !qword_8CAC18 )
  {
    v32 = operator new(0x18u);
    *(_QWORD *)v32 = 0;
    qword_8CAC18 = (_QWORD *)v32;
    *(_OWORD *)(v32 + 8) = 0;
  }
  v30 = sub_193C10();
  QT::QAbstractButton::setChecked(v29, v30);
  return sub_356930(a1);
}
