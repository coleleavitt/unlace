unsigned __int64 __fastcall sub_517320(QT::QWidget *this, __int64 a2, const char *a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  const char *v8; // r14
  size_t v9; // rdx
  double v10; // xmm0_8
  unsigned int v11; // eax
  size_t v12; // rax
  double v13; // xmm0_8
  QT::QCheckBox *v15; // r12
  int v16; // eax
  __int64 v17; // rax
  void *v18; // rdx
  void *v19; // rdx
  void *v20; // rdx
  void *v21[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v22[4]; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  QT::QMessageBox::QMessageBox(this, nullptr);
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 64) = 1;
  *((_OWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = message_box_t___vtable_at__16;
  *(_QWORD *)this = &message_box_t___vtable;
  v4 = QT::QCoreApplication::self;
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
  QT::QWidget::setParent(this, v5, 3);
  (*(void (__fastcall **)(void **, _QWORD *, _QWORD))(*v4 + 160LL))(ptr, v4, 0);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v7 = v6 - 1;
    v8 = *(const char **)a2;
    v9 = v7 >> 63;
  }
  else
  {
    LOBYTE(v9) = 0;
    v7 = 0;
    v8 = &s1;
  }
  if ( !v8 || (_BYTE)v9 )
  {
    v7 = 0;
    if ( v8 )
      v7 = strlen(v8);
  }
  v10 = QT::QString::fromUtf8(ptr, v7, v8);
  QT::QMessageBox::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 )
  {
    if ( v11 == 3 )
    {
      QT::QMessageBox::setIcon(this, 2, v10);
      v10 = QT::QString::fromUtf8(ptr, 13, "MsgBoxWarning");
    }
    else if ( v11 > 3 )
    {
      if ( v11 != 4 )
      {
        QT::QMessageBox::setIcon(this, 0, v10);
        goto LABEL_16;
      }
      QT::QMessageBox::setIcon(this, 3, v10);
      v10 = QT::QString::fromUtf8(ptr, 14, "MsgBoxCritical");
    }
    else if ( v11 == 1 )
    {
      QT::QMessageBox::setIcon(this, 1, v10);
      v10 = QT::QString::fromUtf8(ptr, 17, "MsgBoxInformation");
    }
    else
    {
      QT::QMessageBox::setIcon(this, 4, v10);
      v10 = QT::QString::fromUtf8(ptr, 14, "MsgBoxQuestion");
    }
    QT::QObject::doSetObjectName(this, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
LABEL_16:
  QT::QMessageBox::setTextFormat(this, *(unsigned __int8 *)(a2 + 121), v10);
  v12 = 0;
  if ( a3 )
    v12 = strlen(a3);
  v13 = QT::QString::fromUtf8(ptr, v12, a3);
  QT::QMessageBox::setText(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !*(_DWORD *)(a2 + 84) )
      return v24 - __readfsqword(0x28u);
  }
  else if ( !*(_DWORD *)(a2 + 84) )
  {
    return v24 - __readfsqword(0x28u);
  }
  v15 = (QT::QCheckBox *)operator new(0x28u);
  QT::QMetaObject::tr(
    (QT::QMetaObject *)ptr,
    (const char *)&QT::QObject::staticMetaObject,
    "&Don't display this message again",
    0);
  QT::QCheckBox::QCheckBox(v15, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QMessageBox::setCheckBox(this, v15);
  QT::QAbstractButton::setChecked(v15, *(_BYTE *)(a2 + 88));
  v16 = *(_DWORD *)(a2 + 84);
  if ( v16 == 1 )
  {
    QT::QString::fromUtf8(ptr, 25, " (for this database only)", v13);
  }
  else
  {
    if ( v16 != 3 )
      return v24 - __readfsqword(0x28u);
    QT::QString::fromUtf8(ptr, 24, " (for this session only)", v13);
  }
  QT::QAbstractButton::text((QT::QAbstractButton *)v22);
  v17 = QT::QString::append((QT::QString *)v22, (const QT::QString *)ptr);
  v18 = *(void **)v17;
  *(_QWORD *)v17 = 0;
  v21[0] = v18;
  v19 = *(void **)(v17 + 8);
  *(_QWORD *)(v17 + 8) = 0;
  v21[1] = v19;
  v20 = *(void **)(v17 + 16);
  *(_QWORD *)(v17 + 16) = 0;
  v21[2] = v20;
  QT::QAbstractButton::setText(v15, (const QT::QString *)v21);
  if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
    free(v21[0]);
  if ( v22[0] && !_InterlockedSub((volatile signed __int32 *)v22[0], 1u) )
    free(v22[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v24 - __readfsqword(0x28u);
}
