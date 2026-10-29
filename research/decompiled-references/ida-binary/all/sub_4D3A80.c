__int64 __fastcall sub_4D3A80(__int64 a1, const QT::QTableWidgetItem *a2)
{
  QT::QTableWidget *v3; // rdi
  const QT::QTableWidgetItem *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx
  QT::QTableWidget *v8; // rdi
  __int64 v9; // r12
  int *v10; // r12
  unsigned __int64 v11; // rdi
  int v12; // r14d
  int v13; // eax
  int v14; // ebx
  _QWORD *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  QT::QTableWidget *v19; // rdi
  QT::QTableWidget *v20; // r13
  int v21; // esi
  int v22; // [rsp+Ch] [rbp-5Ch] BYREF
  _QWORD v23[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v3 = *((QT::QTableWidget **)a2 + 5);
  if ( !v3 )
    return v25 - __readfsqword(0x28u);
  v4 = a2;
  v5 = QT::QTableWidget::row(v3, a2);
  if ( v5 == -1 )
    return v25 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1856LL);
  if ( v5 >= v6 )
    return v25 - __readfsqword(0x28u);
  v8 = *((QT::QTableWidget **)a2 + 5);
  v9 = v6 - 1 - v5;
  if ( !v8 )
  {
    v21 = -1;
    v20 = *(QT::QTableWidget **)(*(_QWORD *)(a1 + 96) + 88LL);
LABEL_27:
    v4 = (const QT::QTableWidgetItem *)QT::QTableWidget::item(v20, v21, 0);
    goto LABEL_7;
  }
  if ( (unsigned int)QT::QTableWidget::column(v8, a2) )
  {
    v19 = *((QT::QTableWidget **)a2 + 5);
    v20 = *(QT::QTableWidget **)(*(_QWORD *)(a1 + 96) + 88LL);
    if ( v19 )
      v21 = QT::QTableWidget::row(v19, a2);
    else
      v21 = -1;
    goto LABEL_27;
  }
LABEL_7:
  v10 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1848LL) + 80 * v9);
  (*(void (__fastcall **)(_QWORD *, const QT::QTableWidgetItem *, __int64))(*(_QWORD *)v4 + 24LL))(v23, v4, 10);
  v11 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (_UNKNOWN *)(v24 & 0xFFFFFFFFFFFFFFFCLL) == &unk_8BCA80 )
    goto LABEL_15;
  if ( !v11 || !&unk_8BCA80 )
    goto LABEL_16;
  v12 = *(_DWORD *)&byte_9[4 * (v24 >> 2) + 3];
  if ( !v12 )
    v12 = QT::QMetaType::registerHelper(v11);
  v13 = dword_8BCA8C;
  if ( !dword_8BCA8C )
    v13 = QT::QMetaType::registerHelper(&unk_8BCA80);
  if ( v12 == v13 )
  {
LABEL_15:
    v14 = v23[0];
  }
  else
  {
LABEL_16:
    v22 = 0;
    v15 = v23;
    if ( (v24 & 1) != 0 )
      v15 = (_QWORD *)(*(int *)(v23[0] + 4LL) + v23[0]);
    v16 = QT::QVariant::metaType((QT::QVariant *)v23);
    QT::QMetaType::convert(v16, v15, &unk_8BCA80, &v22);
    v14 = v22;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v23);
  v17 = *v10;
  v18 = *v10 & 0x40;
  if ( v14 )
  {
    if ( v18 )
    {
      *v10 = v17 & 0xFFFFFFBF;
      return sub_4D39D0(a1);
    }
    return v25 - __readfsqword(0x28u);
  }
  if ( v18 )
    return v25 - __readfsqword(0x28u);
  *v10 = v17 | 0x40;
  return sub_4D39D0(a1);
}
