void __fastcall sub_346040(QT::QObject *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rax
  QT::QWidget *v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  bool v7; // cf
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rax
  QT::QWidget *v11; // rdi

  v10 = QT::QObject::sender(a1);
  v11 = *((QT::QWidget **)a1 + 87);
  if ( !*((_QWORD *)v11 + 15) )
    goto LABEL_14;
  v1 = *((_QWORD *)v11 + 25);
  v2 = *((_QWORD *)v11 + 42);
  if ( *(_BYTE *)(v10 + 44) )
  {
    if ( v2 >= v1 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    v9 = v1 - v2;
    if ( v9 != -1 )
    {
LABEL_11:
      if ( *((_QWORD *)v11 + 21) )
      {
        sub_341920(v11, v9);
        return;
      }
    }
LABEL_14:
    nullsub_342();
    return;
  }
  v3 = sub_33EF60((__int64)v11);
  if ( v3 > v6 )
    v3 = v6;
  v7 = __CFADD__(v3, v5);
  v8 = v3 + v5;
  if ( !v7 && v8 != -1 )
  {
    if ( *((_QWORD *)v4 + 21) )
      sub_341920(v4, v8);
  }
}
