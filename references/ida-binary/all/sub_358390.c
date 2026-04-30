unsigned __int64 __fastcall sub_358390(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  QT::QAbstractButton *v10; // rbp
  char v11; // al
  QT::QAbstractButton *v12; // rbp
  char v13; // al
  QT::QAbstractButton *v14; // rbp
  char v15; // al
  QT::QAbstractButton *v16; // rbp
  char v17; // al
  QT::QAbstractButton *v18; // rbp
  char v19; // al
  QT::QLineEdit *v20; // rbp
  size_t v21; // rax
  size_t v22; // r14
  size_t v23; // r12
  unsigned __int64 v24; // rdx
  size_t v25; // rax
  const char *v26; // r12
  double v27; // xmm0_8
  QT::QLineEdit *v28; // rbp
  unsigned __int8 v29; // al
  QT::QLineEdit *v30; // rbp
  __int64 v31; // rax
  QT::QLineEdit *v32; // rbp
  char v33; // al
  __int64 v34; // rbp
  double v35; // xmm0_8
  size_t v36; // rax
  double v37; // xmm0_8
  size_t v38; // rax
  double v39; // xmm0_8
  __int64 v40; // rsi
  __int64 v41; // rax
  QT::QWidget *v42; // rbp
  char isChecked; // al
  __int64 v44; // rax
  QT::QWidget *v45; // rbp
  char v46; // al
  double v47; // xmm4_8
  double v48; // xmm5_8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  QT::QLineEdit *v56; // [rsp+8h] [rbp-A0h]
  QT::QLineEdit *v57; // [rsp+8h] [rbp-A0h]
  void *v58; // [rsp+10h] [rbp-98h] BYREF
  __int128 v59; // [rsp+18h] [rbp-90h]
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  char s[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 56);
  v62 = __readfsqword(0x28u);
  v10 = *(QT::QAbstractButton **)(v9 + 840);
  v11 = getinf_flag(49, 1);
  QT::QAbstractButton::setChecked(v10, v11);
  v12 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1048LL);
  v13 = getinf_flag(49, 2);
  QT::QAbstractButton::setChecked(v12, v13);
  v14 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1064LL);
  v15 = getinf_flag(49, 4);
  QT::QAbstractButton::setChecked(v14, v15);
  v16 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 848LL);
  v17 = getinf_flag(49, 16);
  QT::QAbstractButton::setChecked(v16, v17);
  v18 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1056LL);
  v19 = getinf_flag(49, 32);
  QT::QAbstractButton::setChecked(v18, v19);
  v20 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1040LL);
  if ( !getinf_buf(53, s, 16) )
    s[0] = 0;
  v58 = nullptr;
  v59 = 0;
  v21 = strlen(s);
  v22 = v21 + 1;
  v23 = v21;
  v58 = (void *)qvector_reserve(&v58, 0, v21 + 1, 1);
  *(_QWORD *)&v59 = v22;
  memmove(v58, s, v23);
  LOBYTE(v24) = 0;
  *((_BYTE *)v58 + v23) = 0;
  v25 = v59;
  v26 = &s1;
  if ( (_QWORD)v59 )
  {
    v25 = v59 - 1;
    v26 = (const char *)v58;
    v24 = (unsigned __int64)(v59 - 1) >> 63;
  }
  if ( !v26 || (_BYTE)v24 )
  {
    v25 = 0;
    if ( v26 )
      v25 = strlen(v26);
  }
  v27 = QT::QString::fromUtf8(ptr, v25, v26);
  QT::QLineEdit::setText(v20, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58, (const char *)ptr, v27);
  }
  v28 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 872LL);
  v29 = getinf(50);
  QT::QString::number((QT::QString *)ptr, v29, 10);
  QT::QLineEdit::setText(v28, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v30 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1096LL);
  v31 = getinf(54);
  QT::QString::number((QT::QString *)ptr, v31, 10);
  QT::QLineEdit::setText(v30, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v32 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1104LL);
  v33 = getinf(51);
  QT::QString::number((QT::QString *)ptr, v33, 10);
  QT::QLineEdit::setText(v32, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v34 = getinf(52);
  v56 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 920LL);
  v35 = qsnprintf(s, 16, "0x%02X", BYTE1(v34));
  v36 = strlen(s);
  QT::QString::fromUtf8(ptr, v36, s, v35);
  QT::QLineEdit::setText(v56, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v57 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 936LL);
  v37 = qsnprintf(s, 16, "0x%02X", BYTE2(v34));
  v38 = strlen(s);
  v39 = QT::QString::fromUtf8(ptr, v38, s, v37);
  QT::QLineEdit::setText(v57, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( (v34 & 0xFF00) != 0 )
    LOBYTE(v34) = -1;
  v40 = 0;
  while ( byte_5E84D0[v40] != (_BYTE)v34 )
  {
    if ( ++v40 == 10 )
    {
      LODWORD(v40) = 0;
      break;
    }
  }
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 896LL), v40);
  v41 = *(_QWORD *)(a1 + 56);
  v42 = *(QT::QWidget **)(v41 + 1008);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v41 + 840));
  QT::QWidget::setEnabled(v42, isChecked);
  v44 = *(_QWORD *)(a1 + 56);
  v45 = *(QT::QWidget **)(v44 + 1072);
  v46 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v44 + 1064));
  QT::QWidget::setEnabled(v45, v46);
  QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 896LL));
  sub_358260(a1, v39, a3, a4, a5, v47, v48, a8, a9);
  sub_34FF90(a1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 960LL), v49, v50, v39);
  sub_34FF90(a1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 976LL), v51, v52, v39);
  return sub_34FF90(a1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 992LL), v53, v54, v39);
}
