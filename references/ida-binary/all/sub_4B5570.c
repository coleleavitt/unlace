char *__fastcall sub_4B5570(char *a1)
{
  char *v1; // r13
  char *v2; // rbx
  int v3; // ebp
  char isValid; // r14
  unsigned __int64 v6; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v7[24]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h]
  unsigned __int64 v9; // [rsp+48h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v1 = a1;
  if ( a1 )
  {
    v2 = a1;
    v3 = 4;
    while ( 1 )
    {
      QT::QObject::property((QT::QObject *)v7, v2);
      v6 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      isValid = QT::QMetaType::isValid((QT::QMetaType *)&v6);
      QT::QVariant::~QVariant((QT::QVariant *)v7);
      if ( isValid )
        break;
      v2 = *(char **)(*((_QWORD *)v2 + 1) + 16LL);
      if ( v2 )
      {
        if ( --v3 )
          continue;
      }
      return v1;
    }
    return v2;
  }
  return v1;
}
