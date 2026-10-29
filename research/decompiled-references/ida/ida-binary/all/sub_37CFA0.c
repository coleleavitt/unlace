unsigned __int64 __fastcall sub_37CFA0(_QWORD *a1)
{
  QT::QLabel *v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  QT::QTableWidget *v7; // rdi
  __int64 v8; // rbx
  const char *v9; // rcx
  double v10; // xmm0_8
  QT::QLabel *v11; // r13
  size_t v12; // rax
  double v13; // xmm0_8
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  QT::QListWidget *v19; // r14
  QT::QListWidgetItem *v20; // rbx
  int v21; // eax
  void (__fastcall *v22)(QT::QListWidgetItem *, __int64, char *, double); // [rsp+8h] [rbp-4C0h]
  __int64 v23; // [rsp+18h] [rbp-4B0h]
  void *v24[4]; // [rsp+20h] [rbp-4A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-488h] BYREF
  const QT::QTableWidgetItem **v26; // [rsp+48h] [rbp-480h]
  __int64 v27; // [rsp+50h] [rbp-478h]
  char v28[32]; // [rsp+60h] [rbp-468h] BYREF
  char s[1032]; // [rsp+80h] [rbp-448h] BYREF
  unsigned __int64 v30; // [rsp+488h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  QT::QListWidget::clear(*(QT::QListWidget **)(a1[6] + 112LL));
  QT::QListWidget::clear(*(QT::QListWidget **)(a1[6] + 64LL));
  v2 = *(QT::QLabel **)(a1[6] + 104LL);
  QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25);
  QT::QLabel::setText(v2, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QTableWidget::selectedItems((QT::QTableWidget *)&ptr);
  v3 = v27;
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    free(ptr);
    if ( !v3 )
      return v30 - __readfsqword(0x28u);
  }
  else if ( !v3 )
  {
    return v30 - __readfsqword(0x28u);
  }
  QT::QTableWidget::selectedItems((QT::QTableWidget *)&ptr);
  if ( !ptr || *(int *)ptr > 1 )
    sub_37CBB0((__int64)&ptr, 0, 0, 0, v5, v6);
  v7 = *((QT::QTableWidget **)*v26 + 5);
  if ( v7 )
    v8 = (int)QT::QTableWidget::row(v7, *v26);
  else
    v8 = -1;
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  sub_37B010((QT::QVariant *)v24, (__int64)a1, v8);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v24);
  v9 = (const char *)v26;
  if ( !v26 )
    v9 = (const char *)&QT::QByteArray::_empty;
  v10 = qsnprintf(s, 1024, "Visible from %s:", v9);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v24[0] && !_InterlockedSub((volatile signed __int32 *)v24[0], 1u) )
    free(v24[0]);
  v11 = *(QT::QLabel **)(a1[6] + 104LL);
  v12 = strlen(s);
  v13 = QT::QString::fromUtf8(&ptr, v12, s, v10);
  QT::QLabel::setText(v11, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  LODWORD(v14) = 0;
  v23 = a1[13] + 48 * v8;
  if ( a1[14] )
  {
    do
    {
      v15 = *(_QWORD *)(v23 + 16);
      if ( !v15 )
        goto LABEL_36;
      v16 = v23 + 8;
      do
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v15 + 16);
          v18 = *(_QWORD *)(v15 + 24);
          if ( (int)v14 <= *(_DWORD *)(v15 + 32) )
            break;
          v15 = *(_QWORD *)(v15 + 24);
          if ( !v18 )
            goto LABEL_34;
        }
        v16 = v15;
        v15 = *(_QWORD *)(v15 + 16);
      }
      while ( v17 );
LABEL_34:
      if ( v23 + 8 != v16 && (int)v14 >= *(_DWORD *)(v16 + 32) )
        v19 = *(QT::QListWidget **)(a1[6] + 112LL);
      else
LABEL_36:
        v19 = *(QT::QListWidget **)(a1[6] + 64LL);
      v20 = (QT::QListWidgetItem *)operator new(0x28u);
      sub_37B010((QT::QVariant *)&ptr, (__int64)a1, v14);
      QT::QListWidgetItem::QListWidgetItem(v20, (const QT::QString *)&ptr, nullptr, 0);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v22 = *(void (__fastcall **)(QT::QListWidgetItem *, __int64, char *, double))(*(_QWORD *)v20 + 32LL);
      QT::QVariant::QVariant((QT::QVariant *)v28, v14);
      v22(v20, 256, v28, v13);
      QT::QVariant::~QVariant((QT::QVariant *)v28);
      v21 = QT::QListWidget::count(v19);
      QT::QListWidget::insertItem(v19, v21, v20);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( v14 < a1[14] );
  }
  return v30 - __readfsqword(0x28u);
}
