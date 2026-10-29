unsigned __int64 __fastcall sub_4CEF80(__int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, int); // rax
  const QT::QObject *v4; // rax
  __int64 v5; // rax
  const QT::QObject *v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v13 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, int))(v2 + 456);
  if ( v3 == sub_4C46C0 )
  {
    v4 = (const QT::QObject *)QT::QStackedWidget::widget((QT::QStackedWidget *)a1[9], a2);
    v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v4);
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(__int64 *))v3)(a1);
  }
  v9 = v5;
  if ( v5 )
  {
    v6 = *(const QT::QObject **)(a1[1] + 16);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v6);
        if ( v7 )
          break;
        v6 = *(const QT::QObject **)(*((_QWORD *)v6 + 1) + 16LL);
        if ( !v6 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v7 = 0;
    }
    v10[0] = 0;
    v11[1] = "BaseDockWidget *";
    v12[1] = &unk_8C3020;
    v10[1] = &v9;
    v11[0] = 0;
    v12[0] = 0;
    QT::QMetaObject::invokeMethodImpl(v7, "tabDragRequest", 1, 2, v10, v11, v12);
  }
  return v13 - __readfsqword(0x28u);
}
