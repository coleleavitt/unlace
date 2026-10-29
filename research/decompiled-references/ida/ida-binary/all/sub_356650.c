unsigned __int64 __fastcall sub_356650(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rax
  const char *v9; // r13
  char *v10; // rax
  size_t v11; // rax
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  const char *v15; // rbx
  __int64 v16; // rdx
  QT::QComboBox *v17; // rdi
  const char **v18; // rdx
  QT::QAbstractButton *v19; // rbx
  char v20; // al
  QT::QAbstractButton *v21; // rbx
  char v22; // al
  int v24; // [rsp+10h] [rbp-B8h]
  int v25; // [rsp+14h] [rbp-B4h]
  char v26[8]; // [rsp+28h] [rbp-A0h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v28; // [rsp+50h] [rbp-78h] BYREF
  __int64 v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h]
  char v31[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  v32 = __readfsqword(0x28u);
  QT::QComboBox::clear(*(QT::QComboBox **)(v1 + 408));
  getinf_buf(1, v31, 16);
  v3 = *(__int64 **)(a1 + 48);
  v4 = *v3;
  if ( !**(_QWORD **)(*v3 + 32) )
    goto LABEL_21;
  v24 = -1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    v15 = *(const char **)(*(_QWORD *)(v4 + 24) + v7 * 8);
    if ( !v15 || *v15 == 45 )
      goto LABEL_12;
    v16 = *(_QWORD *)(a1 + 56);
    v29 = 0;
    v30 = 2;
    v17 = *(QT::QComboBox **)(v16 + 408);
    v28 = 0;
    v18 = *(const char ***)(*v3 + 32);
    if ( v8 )
    {
      v9 = v18[v7];
    }
    else
    {
      v9 = *v18;
      v10 = strchr(*v18, 58);
      if ( v10 )
      {
        v9 = v10 + 1;
LABEL_5:
        v11 = strlen(v9);
        goto LABEL_6;
      }
    }
    v11 = 0;
    if ( v9 )
      goto LABEL_5;
LABEL_6:
    QT::QString::fromUtf8(ptr, v11, v9);
    v25 = QT::QComboBox::count(v17);
    QT::QIcon::QIcon((QT::QIcon *)v26);
    QT::QComboBox::insertItem(v17, v25, (const QT::QIcon *)v26, (const QT::QString *)ptr, (const QT::QVariant *)&v28);
    QT::QIcon::~QIcon((QT::QIcon *)v26);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QVariant::~QVariant((QT::QVariant *)&v28);
    v12 = strcasecmp(v15, v31);
    v3 = *(__int64 **)(a1 + 48);
    v13 = v12 == 0;
    v14 = v24;
    if ( v13 )
      v14 = v6;
    ++v6;
    v24 = v14;
LABEL_12:
    v4 = *v3;
    v8 = ++v5;
    v7 = v5;
  }
  while ( *(_QWORD *)(*(_QWORD *)(*v3 + 32) + v7 * 8) );
  if ( v24 != -1 )
    QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 408LL), v24);
LABEL_21:
  sub_356240(a1);
  v19 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 480LL);
  v20 = getinf_flag(2, 1);
  QT::QAbstractButton::setChecked(v19, v20);
  v21 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 488LL);
  v22 = getinf_flag(44, 4);
  QT::QAbstractButton::setChecked(v21, v22);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 416LL), 0);
  QT::QWidget::setEnabled(
    *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 520LL),
    (*(_BYTE *)(**(_QWORD **)(a1 + 48) + 12LL) & 2) != 0);
  QT::QWidget::setEnabled(
    *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 528LL),
    *(_BYTE *)(**(_QWORD **)(a1 + 48) + 12LL) & 1);
  return v32 - __readfsqword(0x28u);
}
