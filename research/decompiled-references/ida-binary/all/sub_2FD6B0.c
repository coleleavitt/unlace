unsigned __int64 __fastcall sub_2FD6B0(__int64 a1, __int64 a2)
{
  QT::QVBoxLayout **v3; // rdi
  QT::QAbstractButton *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  QT::QObject *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  QT::QWidget *v12; // rax
  QT::QWidget *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v23; // rbx
  __int64 v24; // r12
  size_t v25; // r15
  size_t v26; // r15
  size_t v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r14
  size_t v31; // r15
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  void *v35; // rax
  _BYTE v37[8]; // [rsp+18h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h] BYREF
  __int128 v40; // [rsp+38h] [rbp-48h]
  unsigned __int64 v41; // [rsp+48h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  sub_53A8A0(a1, a2, 0);
  *(_QWORD *)a1 = &LoadFileDialog___vtable;
  *(_QWORD *)(a1 + 16) = LoadFileDialog___vtable_at__16;
  *(_QWORD *)(a1 + 64) = operator new(0x100u);
  *(_QWORD *)(a1 + 80) = get_module_data((unsigned int)dword_8CD7F0);
  v3 = *(QT::QVBoxLayout ***)(a1 + 64);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  sub_2FCA60(v3, (QT::QWidget *)a1);
  v4 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 248LL), 0x1000000);
  sub_17F3A0((QT::QAction *)&v39);
  QT::QAbstractButton::setShortcut(v4, (const QT::QKeySequence *)&v39);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&v39);
  v5 = QT::QCoreApplication::self;
  v6 = QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 248LL), 0x1000000);
  sub_47C670(v5, v6, "2clicked()", "/user-guide/user-interface/menu-bar/windows/various-dialog-help-messages");
  QT::QWidget::setWindowFlags(a1, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 12LL) & 0xFFFEFFFF);
  v7 = xmmword_8CD518;
  v39 = 0;
  v40 = 0;
  if ( (_QWORD)xmmword_8CD518 )
  {
    v39 = qalloc_or_throw(96 * xmmword_8CD518);
    v23 = v39;
    v24 = 0;
    *((_QWORD *)&v40 + 1) = v7;
    while ( 1 )
    {
      v28 = 96 * v24 + v23;
      v29 = qword_8CD510 + 96 * v24;
      *(_OWORD *)(v28 + 8) = 0;
      v30 = v29;
      *(_QWORD *)v28 = 0;
      v31 = *(_QWORD *)(v29 + 8);
      if ( v31 )
      {
        v32 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 8));
        *(_QWORD *)v28 = v32;
        *(_QWORD *)(v28 + 16) = v31;
        memcpy(v32, *(const void **)v30, v31);
        *(_QWORD *)(v28 + 8) = v31;
      }
      *(_QWORD *)(v28 + 24) = 0;
      *(_OWORD *)(v28 + 32) = 0;
      v25 = *(_QWORD *)(v30 + 32);
      if ( v25 )
      {
        v35 = (void *)qalloc_or_throw(*(_QWORD *)(v30 + 32));
        *(_QWORD *)(v28 + 24) = v35;
        *(_QWORD *)(v28 + 40) = v25;
        memcpy(v35, *(const void **)(v30 + 24), v25);
        *(_QWORD *)(v28 + 32) = v25;
      }
      *(_QWORD *)(v28 + 48) = 0;
      *(_OWORD *)(v28 + 56) = 0;
      v26 = *(_QWORD *)(v30 + 56);
      if ( v26 )
      {
        v34 = (void *)qalloc_or_throw(*(_QWORD *)(v30 + 56));
        *(_QWORD *)(v28 + 48) = v34;
        *(_QWORD *)(v28 + 64) = v26;
        memcpy(v34, *(const void **)(v30 + 48), v26);
        *(_QWORD *)(v28 + 56) = v26;
      }
      *(_QWORD *)(v28 + 72) = 0;
      *(_OWORD *)(v28 + 80) = 0;
      v27 = *(_QWORD *)(v30 + 80);
      if ( v27 )
      {
        v33 = (void *)qalloc_or_throw(*(_QWORD *)(v30 + 80));
        *(_QWORD *)(v28 + 72) = v33;
        ++v24;
        *(_QWORD *)(v28 + 88) = v27;
        memcpy(v33, *(const void **)(v30 + 72), v27);
        *(_QWORD *)(v28 + 80) = v27;
        if ( v7 == v24 )
        {
LABEL_27:
          *(_QWORD *)&v40 = v7;
          break;
        }
      }
      else if ( v7 == ++v24 )
      {
        goto LABEL_27;
      }
      v23 = v39;
    }
  }
  v8 = a1;
  v9 = sub_2E4380("Choose processor", &v39);
  v38[1] = 0;
  *(_QWORD *)(a1 + 72) = v9;
  v38[0] = sub_468800;
  v10 = operator new(0x18u);
  *(_DWORD *)v10 = 1;
  *(_QWORD *)(v10 + 16) = a1;
  *(_QWORD *)(v10 + 8) = sub_2F7230;
  QT::QObject::connectImpl(v37, v9, v38, a1, 0, v10, 0, 0, &off_888DC0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v37);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL);
  v12 = sub_2DBE50();
  QT::QBoxLayout::addWidget(v11, v12, 0, 0);
  QT::QLabel::setBuddy(*(QT::QLabel **)(*(_QWORD *)(v8 + 64) + 24LL), *(QT::QWidget **)(v8 + 72));
  QT::QWidget::setTabOrder(*(QT::QWidget **)(*(_QWORD *)(v8 + 64) + 16LL), *(QT::QWidget **)(v8 + 72), v13);
  QT::QTreeView::setHeaderHidden(*(QT::QTreeView **)(a1 + 72), 1);
  sub_53A8F0(a1);
  v14 = v39;
  if ( v39 )
  {
    v15 = v40;
    if ( (_QWORD)v40 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 96 * v16);
        v18 = v17[9];
        if ( v18 )
        {
          v17[10] = 0;
          qfree(v18, (_BYTE *)&dword_0 + 1);
        }
        v19 = v17[6];
        if ( v19 )
        {
          v17[7] = 0;
          qfree(v19, (_BYTE *)&dword_0 + 1);
        }
        v20 = v17[3];
        if ( v20 )
        {
          v17[4] = 0;
          qfree(v20, (_BYTE *)&dword_0 + 1);
        }
        v21 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v21, (_BYTE *)&dword_0 + 1);
        }
        v14 = v39;
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v14, (_BYTE *)&dword_0 + 1);
  }
  return v41 - __readfsqword(0x28u);
}
