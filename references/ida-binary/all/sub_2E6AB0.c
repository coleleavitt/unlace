QT::QIcon *__fastcall sub_2E6AB0(QT::QIcon *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int8 v5; // dl

  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 != 2 )
  {
    if ( v2 == 4 )
    {
      v3 = 1;
      goto LABEL_5;
    }
    if ( v2 == 1 )
    {
      v3 = 0;
      goto LABEL_5;
    }
LABEL_12:
    QT::QIcon::QIcon(this);
    return this;
  }
  v5 = *(_BYTE *)(a2 + 68);
  if ( v5 == 45 )
  {
    v3 = 3;
    goto LABEL_5;
  }
  if ( v5 > 0x2Du )
  {
    v3 = 2;
    if ( v5 == 61 )
      goto LABEL_5;
    goto LABEL_12;
  }
  if ( v5 == 13 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  v3 = 5;
  if ( v5 != 29 )
    goto LABEL_12;
LABEL_5:
  (*(void (__fastcall **)(QT::QIcon *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 136LL))(
    this,
    QT::QCoreApplication::self,
    *((unsigned int *)&qword_8CD440 + v3));
  return this;
}
