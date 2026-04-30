unsigned __int64 __fastcall sub_4EC870(
        QT::QFontDialog *this,
        __int64 a2,
        const QT::QFont *a3,
        const QT::QFont *a4,
        QT::QWidget *a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rax
  const char *v10; // rbx
  size_t v11; // rdx
  double v12; // xmm0_8
  double v13; // xmm0_8
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r15
  int v18; // eax
  void *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // r15
  QT::QLabel *v24; // r13
  void *v25; // rdi
  __int64 v26; // rax
  __int64 Child_helper; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  int v31; // [rsp+4h] [rbp-B4h]
  void *v33[4]; // [rsp+20h] [rbp-98h] BYREF
  void *v34[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35; // [rsp+50h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  void *v37; // [rsp+68h] [rbp-50h]
  __int64 v38; // [rsp+70h] [rbp-48h]
  unsigned __int64 v39; // [rsp+78h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  QT::QFontDialog::QFontDialog(this, a5);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 2) = font_picker_t___vtable_at__16;
  *(_QWORD *)this = &font_picker_t___vtable;
  QT::QFont::QFont((QT::QFontDialog *)((char *)this + 48), a4);
  QT::QFontDialog::setOption(this, 2, 1);
  v7 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
  {
    QT::QFontDialog::setOption(this, 16, 1);
    v7 = *((_QWORD *)this + 5);
  }
  v8 = *(_QWORD *)(v7 + 32);
  if ( v8 )
  {
    v9 = v8 - 1;
    v10 = *(const char **)(v7 + 24);
    v11 = v9 >> 63;
  }
  else
  {
    LOBYTE(v11) = 0;
    v9 = 0;
    v10 = &s1;
  }
  if ( !v10 || (_BYTE)v11 )
  {
    v9 = 0;
    if ( v10 )
      v9 = strlen(v10);
  }
  v12 = QT::QString::fromUtf8(v33, v9, v10);
  v13 = QT::QString::fromUtf8(&ptr, 19, "Select font for: %1", v12);
  QT::QString::arg(v34, &ptr, v33, 0, 32, v13);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)v34);
  if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
    free(v34[0]);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  *(_OWORD *)v34 = 0;
  v35 = 0;
  QT::qt_qFindChildren_helper(this, 0, 0, &QT::QGroupBox::staticMetaObject, v34, 1);
  if ( (int)v35 > 0 )
  {
    v16 = 0;
    v17 = 8LL * (unsigned int)(v35 - 1) + 8;
    while ( 1 )
    {
      if ( !v34[0] || *(int *)v34[0] > 1 )
        sub_4EC0B0((__int64)v34, 0, 0, 0, v14, v15);
      QT::QGroupBox::title((QT::QGroupBox *)&ptr);
      v19 = v37;
      if ( !v37 )
        v19 = &QT::QString::_empty;
      v18 = QT::QString::compare_helper(v19, v38, "Effects", 7, 1);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v31 = v18;
        free(ptr);
        v18 = v31;
      }
      if ( !v18 )
        break;
      v16 += 8;
      if ( v17 == v16 )
        goto LABEL_31;
    }
    if ( !v34[0] || *(int *)v34[0] > 1 )
      sub_4EC0B0((__int64)v34, 0, 0, 0, v14, v15);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)((char *)v34[1] + v16) + 104LL))(
      *(_QWORD *)((char *)v34[1] + v16),
      0);
  }
LABEL_31:
  if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
    free(v34[0]);
  *(_OWORD *)v34 = 0;
  v35 = 0;
  QT::qt_qFindChildren_helper(this, 0, 0, &QT::QLabel::staticMetaObject, v34, 1);
  if ( (int)v35 > 0 )
  {
    v22 = 0;
    v23 = 8LL * (unsigned int)(v35 - 1) + 8;
    while ( 1 )
    {
      if ( !v34[0] || *(int *)v34[0] > 1 )
        sub_4EC490((__int64)v34, 0, 0, 0, v20, v21);
      v24 = *(QT::QLabel **)((char *)v34[1] + v22);
      QT::QLabel::text((QT::QLabel *)&ptr);
      v25 = v37;
      if ( !v37 )
        v25 = &QT::QString::_empty;
      if ( !(unsigned int)QT::QString::compare_helper(v25, v38, "Wr&iting System", 15, 1) )
        break;
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v22 += 8;
      if ( v23 == v22 )
        goto LABEL_49;
    }
    (*(void (__fastcall **)(QT::QLabel *, _QWORD))(*(_QWORD *)v24 + 104LL))(v24, 0);
    v26 = QT::QLabel::buddy(v24);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 104LL))(v26, 0);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
LABEL_49:
  if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
    free(v34[0]);
  Child_helper = QT::qt_qFindChild_helper(this, "qt_fontDialog_sampleEdit", 24, &QT::QLineEdit::staticMetaObject, 1);
  QT::QWidget::setSizePolicy(Child_helper, sub_550000);
  v28 = QT::qt_qFindChild_helper(this, 0, 0, &QT::QDialogButtonBox::staticMetaObject, 1);
  v29 = v28;
  if ( v28 )
  {
    QT::QDialogButtonBox::addButton(v28, 0x4000000);
    QT::QDialogButtonBox::addButton(v29, 0x2000000);
    QT::QObject::connect(
      &ptr,
      v29,
      "2clicked(QAbstractButton *)",
      this,
      "1on_dialog_button_clicked(QAbstractButton *)",
      0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  }
  QT::QFontDialog::setCurrentFont(this, a3);
  if ( v33[0] && !_InterlockedSub((volatile signed __int32 *)v33[0], 1u) )
    free(v33[0]);
  return v39 - __readfsqword(0x28u);
}
