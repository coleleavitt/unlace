__int64 __fastcall sub_38AF30(__int64 a1)
{
  int v1; // ebx
  int v3; // r14d
  int v4; // eax
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // rax
  int v10; // r14d
  int v12; // [rsp+Ch] [rbp-5Ch] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v1 = 0;
  v15 = __readfsqword(0x28u);
  while ( v1 < (int)QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1 + 88)) )
  {
    v6 = QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), v1, 0);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v6 + 24LL))(v13, v6, 10);
    v7 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (_UNKNOWN *)(v14 & 0xFFFFFFFFFFFFFFFCLL) == &unk_8BCA80 )
      goto LABEL_7;
    if ( !v7 || !&unk_8BCA80 )
      goto LABEL_13;
    v3 = *(_DWORD *)&byte_9[4 * (v14 >> 2) + 3];
    if ( !v3 )
      v3 = QT::QMetaType::registerHelper(v7);
    v4 = dword_8BCA8C;
    if ( !dword_8BCA8C )
      v4 = QT::QMetaType::registerHelper(&unk_8BCA80);
    if ( v3 == v4 )
    {
LABEL_7:
      v5 = v13[0];
      QT::QVariant::~QVariant((QT::QVariant *)v13);
      if ( v5 != 2 )
        return 0;
    }
    else
    {
LABEL_13:
      v12 = 0;
      v8 = v13;
      if ( (v14 & 1) != 0 )
        v8 = (_QWORD *)(*(int *)(v13[0] + 4LL) + v13[0]);
      v9 = QT::QVariant::metaType((QT::QVariant *)v13);
      QT::QMetaType::convert(v9, v8, &unk_8BCA80, &v12);
      v10 = v12;
      QT::QVariant::~QVariant((QT::QVariant *)v13);
      if ( v10 != 2 )
        return 0;
    }
    ++v1;
  }
  return 1;
}
