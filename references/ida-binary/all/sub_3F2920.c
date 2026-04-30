unsigned __int64 __fastcall sub_3F2920(__int64 a1)
{
  char v1; // al
  unsigned __int64 v3; // rdi
  int v4; // r13d
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-60h]
  _QWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(v11, a1, 258);
    v9 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !(unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v9) )
      goto LABEL_3;
    v3 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
      goto LABEL_14;
    if ( !v3 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
      goto LABEL_18;
    v4 = *(_DWORD *)&byte_9[4 * (v12 >> 2) + 3];
    if ( !v4 )
      v4 = QT::QMetaType::registerHelper(v3);
    v5 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
    if ( !v5 )
      v5 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType);
    if ( v4 == v5 )
    {
LABEL_14:
      v6 = v11[0];
    }
    else
    {
LABEL_18:
      v9 = 0;
      v7 = v11;
      if ( (v12 & 1) != 0 )
        v7 = (_QWORD *)(*(int *)(v11[0] + 4LL) + v11[0]);
      v8 = QT::QVariant::metaType((QT::QVariant *)v11);
      QT::QMetaType::convert(v8, v7, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, &v9);
      v6 = v9;
    }
    if ( v6 == -1 )
    {
LABEL_3:
      v1 = 0;
    }
    else
    {
      v9 = v6;
      v1 = 1;
    }
    LOBYTE(v10) = v1;
    QT::QVariant::~QVariant((QT::QVariant *)v11);
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  return v9;
}
