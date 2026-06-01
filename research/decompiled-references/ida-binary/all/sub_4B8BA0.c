__int64 __fastcall sub_4B8BA0(char *a1)
{
  char *v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  int v6; // ebx
  int v7; // r12d
  int v8; // eax
  unsigned __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v10[24]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = sub_4B5570(a1);
  if ( !v1 )
    return 0;
  QT::QObject::property((QT::QObject *)v10, v1);
  v9 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !(unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v9) )
    goto LABEL_3;
  QT::QMetaType::QMetaType((QT::QMetaType *)&v9, 2);
  v4 = QT::QVariant::metaType((QT::QVariant *)v10);
  v5 = v9;
  if ( v4 == v9 )
  {
LABEL_15:
    v2 = QT::QVariant::toInt((QT::QVariant *)v10, nullptr);
    goto LABEL_4;
  }
  if ( v4 && v9 )
  {
    v6 = *(_DWORD *)(v4 + 12);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v4 + 12);
    }
    else
    {
      v8 = QT::QMetaType::registerHelper(v4);
      v5 = v9;
      v7 = v8;
      if ( !v9 )
        goto LABEL_14;
    }
    v6 = *(_DWORD *)(v5 + 12);
    if ( !v6 )
      v6 = QT::QMetaType::registerHelper(v9);
LABEL_14:
    if ( v7 == v6 )
      goto LABEL_15;
  }
LABEL_3:
  v2 = 0;
LABEL_4:
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  return v2;
}
