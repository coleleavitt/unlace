unsigned __int64 __fastcall sub_363FF0(__int64 a1)
{
  char *v1; // rbp
  char *v2; // r13
  QT::QAbstractButton *v3; // rbp
  char v4; // al
  QT::QLineEdit *v5; // r12
  int v6; // ebp
  char v7; // dl
  int v8; // eax
  QT::QLineEdit *v9; // r12
  unsigned __int8 v10; // al
  QT::QLineEdit *v11; // r12
  unsigned __int8 v12; // al
  QT::QLineEdit *v13; // r12
  unsigned __int16 v14; // ax
  QT::QLineEdit *v15; // r12
  QT::QLineEdit *v16; // r15
  unsigned __int64 v17; // rax
  double v18; // xmm0_8
  QT::QLineEdit *v19; // r15
  unsigned __int64 v20; // rax
  QT::QAbstractButton *v21; // rbp
  char v22; // al
  QT::QAbstractButton *v23; // rbp
  char v24; // al
  QT::QAbstractButton *v25; // rbp
  char v26; // al
  QT::QAbstractButton *v27; // rbp
  char v28; // al
  QT::QAbstractButton *v29; // rbp
  char v30; // al
  QT::QAbstractButton *v31; // rbp
  char v32; // al
  QT::QAbstractButton *v33; // rbp
  char v34; // al
  QT::QAbstractButton *v35; // rbp
  char v36; // al
  QT::QAbstractButton *v37; // rbp
  char v38; // al
  QT::QAbstractButton *v39; // rbp
  char v40; // al
  QT::QAbstractButton *v41; // rbp
  char v42; // al
  QT::QAbstractButton *v43; // rbp
  char v44; // al
  __int64 v45; // rax
  QT::QWidget *v46; // rbp
  char isChecked; // al
  __int64 v48; // rax
  QT::QWidget *v49; // rbp
  char v50; // al
  __int64 v51; // rax
  QT::QWidget *v52; // rbp
  char v53; // al
  void *ptr[4]; // [rsp+0h] [rbp-98h] BYREF
  void *v56[4]; // [rsp+20h] [rbp-78h] BYREF
  void *v57[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = " (graph)";
  v2 = " (graph)";
  v57[3] = (void *)__readfsqword(0x28u);
  if ( !(unsigned __int8)getinf_flag(2, 128) )
    v2 = " (non-graph)";
  if ( (unsigned __int8)getinf_flag(2, 128) )
    v1 = " (non-graph)";
  sub_356EA0(v2, v1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 112LL));
  sub_356EA0(v2, v1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 120LL));
  sub_356EA0(v2, v1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 232LL));
  sub_357060(v2, v1, *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 776LL));
  sub_357060(v2, v1, *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 304LL));
  sub_357060(v2, v1, *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 320LL));
  sub_357060(v2, v1, *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 336LL));
  sub_357060(v2, v1, *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 280LL));
  v3 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 232LL);
  v4 = getinf_flag(44, 32);
  QT::QAbstractButton::setChecked(v3, v4);
  v5 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 288LL);
  v6 = getinf(47);
  v7 = getinf_flag(48, 8);
  v8 = -v6;
  if ( !v7 )
    LOWORD(v8) = v6;
  QT::QString::number((QT::QString *)v57, (__int16)v8, 10);
  QT::QLineEdit::setText(v5, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  v9 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 312LL);
  v10 = getinf(40);
  QT::QString::number((QT::QString *)v57, v10, 10);
  QT::QLineEdit::setText(v9, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  v11 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 328LL);
  v12 = getinf(41);
  QT::QString::number((QT::QString *)v57, v12, 10);
  QT::QLineEdit::setText(v11, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  v13 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 344LL);
  v14 = getinf(42);
  QT::QString::number((QT::QString *)v57, v14, 10);
  QT::QLineEdit::setText(v13, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  v15 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 360LL);
  QT::QString::number((QT::QString *)v57, unk_8BA540, 10);
  QT::QLineEdit::setText(v15, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  v16 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 168LL);
  v17 = getinf(23);
  QT::QString::number((QT::QString *)ptr, v17, 16);
  QT::QString::toUpper_helper((QT::QString *)v56, (QT::QString *)ptr);
  v18 = QT::QString::fromUtf8(v57, 2, "0x");
  QT::QString::append((QT::QString *)v57, (const QT::QString *)v56);
  QT::QLineEdit::setText(v16, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    free(v56[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v19 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 184LL);
  v20 = getinf(24);
  QT::QString::number((QT::QString *)ptr, v20, 16);
  QT::QString::toUpper_helper((QT::QString *)v56, (QT::QString *)ptr);
  QT::QString::fromUtf8(v57, 2, "0x", v18);
  QT::QString::append((QT::QString *)v57, (const QT::QString *)v56);
  QT::QLineEdit::setText(v19, (const QT::QString *)v57);
  if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
    free(v57[0]);
  if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    free(v56[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v21 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 80LL);
  v22 = getinf_flag(44, 64);
  QT::QAbstractButton::setChecked(v21, v22);
  v23 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 72LL);
  v24 = getinf_flag(48, 1);
  QT::QAbstractButton::setChecked(v23, v24);
  v25 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 64LL);
  v26 = getinf_flag(48, 2);
  QT::QAbstractButton::setChecked(v25, v26);
  v27 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 240LL);
  v28 = getinf_flag(48, 4);
  QT::QAbstractButton::setChecked(v27, v28);
  v29 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 104LL);
  v30 = getinf_flag(44, 16);
  QT::QAbstractButton::setChecked(v29, v30);
  v31 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 136LL);
  v32 = getinf_flag(44, 1024);
  QT::QAbstractButton::setChecked(v31, v32);
  v33 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 112LL);
  v34 = getinf_flag(46, 1);
  QT::QAbstractButton::setChecked(v33, v34);
  v35 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 120LL);
  v36 = getinf_flag(46, 4);
  QT::QAbstractButton::setChecked(v35, v36);
  v37 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 248LL);
  v38 = getinf_flag(45, 4);
  QT::QAbstractButton::setChecked(v37, v38 != 1);
  v39 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 256LL);
  v40 = getinf_flag(45, 1);
  QT::QAbstractButton::setChecked(v39, v40);
  v41 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 264LL);
  v42 = getinf_flag(45, 2);
  QT::QAbstractButton::setChecked(v41, v42);
  v43 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 128LL);
  v44 = getinf_flag(45, 8);
  QT::QAbstractButton::setChecked(v43, v44);
  v45 = *(_QWORD *)(a1 + 56);
  v46 = *(QT::QWidget **)(v45 + 256);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v45 + 248));
  QT::QWidget::setEnabled(v46, isChecked);
  v48 = *(_QWORD *)(a1 + 56);
  v49 = *(QT::QWidget **)(v48 + 264);
  v50 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v48 + 248));
  QT::QWidget::setEnabled(v49, v50);
  v51 = *(_QWORD *)(a1 + 56);
  v52 = *(QT::QWidget **)(v51 + 72);
  v53 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v51 + 64));
  QT::QWidget::setEnabled(v52, v53 != 1);
  return sub_3618E0(a1);
}
