__int64 __fastcall sub_38BC70(__int64 a1, char a2)
{
  QT::QTableWidget *v3; // rdi
  int v4; // eax
  int v5; // r14d
  int i; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  int v9; // r15d
  int v10; // eax
  int v11; // r15d
  _QWORD *v13; // r15
  __int64 v14; // rax
  unsigned int v15; // [rsp+8h] [rbp-80h]
  int v16; // [rsp+1Ch] [rbp-6Ch] BYREF
  _QWORD v17[3]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v3 = *(QT::QTableWidget **)(a1 + 88);
  v19 = __readfsqword(0x28u);
  v4 = QT::QTableWidget::rowCount(v3);
  if ( v4 <= 0 )
  {
    return 0;
  }
  else
  {
    v15 = 0;
    v5 = v4;
    for ( i = 0; i != v5; ++i )
    {
      v7 = QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), i, 0);
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v17, v7, 10);
        v8 = v18 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (_UNKNOWN *)(v18 & 0xFFFFFFFFFFFFFFFCLL) == &unk_8BCA80 )
          goto LABEL_13;
        if ( !v8 || !&unk_8BCA80 )
          goto LABEL_17;
        v9 = *(_DWORD *)&byte_9[4 * (v18 >> 2) + 3];
        if ( !v9 )
          v9 = QT::QMetaType::registerHelper(v8);
        v10 = dword_8BCA8C;
        if ( !dword_8BCA8C )
          v10 = QT::QMetaType::registerHelper(&unk_8BCA80);
        if ( v9 == v10 )
        {
LABEL_13:
          v11 = v17[0];
        }
        else
        {
LABEL_17:
          v16 = 0;
          v13 = v17;
          if ( (v18 & 1) != 0 )
            v13 = (_QWORD *)(*(int *)(v17[0] + 4LL) + v17[0]);
          v14 = QT::QVariant::metaType((QT::QVariant *)v17);
          QT::QMetaType::convert(v14, v13, &unk_8BCA80, &v16);
          v11 = v16;
        }
        QT::QVariant::~QVariant((QT::QVariant *)v17);
        if ( v11 == 2 )
        {
          ++v15;
          if ( a2 )
            break;
        }
      }
    }
  }
  return v15;
}
