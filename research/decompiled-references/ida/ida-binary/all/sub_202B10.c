__int64 __fastcall sub_202B10(QT::QWidget **a1)
{
  QT::QStatusBar *v2; // rbx
  QT::QLayout *v3; // rax
  QT::QWidget *v4; // r12
  const char *v5; // rbx
  size_t v6; // rax
  double v7; // xmm0_8
  const char **v8; // r12
  QT::QWidget *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  const char *v12; // r14
  size_t v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  QT::QWidget *v16; // rax
  QT::QWidget *v17; // r14
  QT::QWidget *v18; // rcx
  QT::QWidget *v19; // rdx
  QT::QWidget **v20; // rsi
  int *v21; // rax
  QT::QWidget *v23; // rdi
  unsigned __int64 v24; // rdx
  QT::QWidget *v25; // rax
  QT::QWidget *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  QT::QWidget *v29; // rax
  char *v30; // [rsp+0h] [rbp-78h]
  _BYTE v31[16]; // [rsp+10h] [rbp-68h] BYREF
  void *ptr[11]; // [rsp+20h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = (QT::QStatusBar *)operator new(0x28u);
  QT::QStatusBar::QStatusBar(v2, (QT::QWidget *)a1);
  a1[95] = v2;
  QT::QWidget::setAutoFillBackground(v2, 1);
  v3 = (QT::QLayout *)QT::QWidget::layout(a1[95]);
  QT::QLayout::setContentsMargins(v3, 0, 0, 0, 0);
  QT::QWidget::setContentsMargins(a1[95], 0, 0, 0, 0);
  QT::QStatusBar::setSizeGripEnabled(a1[95], 0);
  v4 = a1[95];
  v5 = (const char *)sub_47A3E0(QT::QCoreApplication::self);
  v6 = 0;
  if ( v5 )
    v6 = strlen(v5);
  v7 = QT::QString::fromUtf8(ptr, v6, v5);
  QT::QFont::QFont((QT::QFont *)v31, (const QT::QString *)ptr, -1, -1, 0);
  QT::QWidget::setFont(v4, (const QT::QFont *)v31);
  QT::QFont::~QFont((QT::QFont *)v31);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = (const char **)off_85DD00;
  v30 = (char *)(a1 + 122);
  do
  {
    v9 = (QT::QWidget *)operator new(0x28u);
    sub_53B9D0(v9, 0);
    v10 = QT::QWidget::sizePolicy(v9);
    QT::QWidget::setSizePolicy(v9, v10 & 0xF00000);
    v11 = *(_DWORD *)(*((_QWORD *)v9 + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)v9 + 4) + 24LL);
    LODWORD(ptr[0]) = 70;
    HIDWORD(ptr[0]) = v11;
    QT::QWidget::resize(v9, ptr);
    v12 = *v8;
    v13 = 0;
    if ( *v8 )
      v13 = strlen(*v8);
    v7 = QT::QString::fromUtf8(ptr, v13, v12, v7);
    QT::QWidget::setToolTip(v9, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QWidget::setContentsMargins(v9, 0, 0, 0, 0);
    QT::QWidget::setFont(v9, (const QT::QFont *)(*((_QWORD *)a1[95] + 4) + 56LL));
    v16 = a1[122];
    v17 = a1[124];
    if ( !v16 )
      goto LABEL_15;
    if ( *(int *)v16 <= 1 )
    {
      v23 = a1[123];
      v24 = ((unsigned __int64)v16 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( (QT::QWidget *)(*((_QWORD *)v16 + 1) - ((__int64)((__int64)v23 - v24) >> 3)) != v17 )
      {
        *((_QWORD *)v23 + (_QWORD)v17) = v9;
        a1[124] = (QT::QWidget *)((char *)a1[124] + 1);
        goto LABEL_20;
      }
      if ( !v17 && (QT::QWidget *)v24 != v23 )
      {
        *((_QWORD *)v23 - 1) = v9;
        a1[123] = (QT::QWidget *)((char *)a1[123] - 8);
        a1[124] = (QT::QWidget *)((char *)a1[124] + 1);
        goto LABEL_20;
      }
    }
    if ( *(int *)v16 > 1 )
      goto LABEL_15;
    v25 = a1[122];
    if ( !v25 )
      goto LABEL_15;
    v26 = a1[123];
    v27 = *((_QWORD *)v25 + 1);
    v19 = a1[124];
    v15 = (__int64)v26 - (((unsigned __int64)v25 + 31) & 0xFFFFFFFFFFFFFFF0LL);
    v28 = v15 >> 3;
    if ( v27 - (__int64)v19 - (v15 >> 3) > 0 )
    {
      v20 = (QT::QWidget **)((char *)v26 + 8 * (_QWORD)v17);
      goto LABEL_17;
    }
    if ( v15 > 0 && (v15 = 0, 3 * (__int64)v19 < 2 * v27) )
    {
      v18 = (QT::QWidget *)((char *)v26 - 8 * v28);
      if ( v19 && v18 != v26 && v26 && v18 )
      {
        v29 = (QT::QWidget *)memmove((char *)v26 - 8 * v28, v26, 8LL * (_QWORD)v19);
        v19 = a1[124];
        v15 = 0;
        v18 = v29;
      }
      a1[123] = v18;
    }
    else
    {
LABEL_15:
      sub_178660((__int64)v30, 0, 1, 0, v14, 0);
      v18 = a1[123];
      v15 = 0;
      v19 = a1[124];
    }
    v20 = (QT::QWidget **)((char *)v18 + 8 * (_QWORD)v17);
LABEL_17:
    if ( (__int64)v17 < (__int64)v19 )
    {
      memmove(v20 + 1, v20, 8 * (v19 - v17));
      v19 = a1[124];
    }
    a1[124] = (QT::QWidget *)((char *)v19 + 1);
    *v20 = v9;
LABEL_20:
    v21 = (int *)a1[122];
    if ( !v21 || *v21 > 1 )
      sub_178660((__int64)v30, 0, 0, 0, v14, v15);
    ++v8;
    QT::QStatusBar::addWidget(a1[95], v9, 0);
  }
  while ( v8 != (const char **)algn_85DD30 );
  return (*(__int64 (__fastcall **)(QT::QWidget *, bool, double))(*(_QWORD *)a1[95] + 104LL))(
           a1[95],
           (*((_DWORD *)a1 + 141) & 1) == 0,
           v7);
}
