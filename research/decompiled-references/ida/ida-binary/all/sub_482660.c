__int64 __fastcall sub_482660(__int64 a1, QT::QObject *a2, unsigned int a3)
{
  QT::QWidget *v4; // rbx
  QT::QApplication *v5; // rbp
  _BYTE v7[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v4 = (QT::QWidget *)sub_4CF3F0(a2);
  if ( !v4 )
  {
    v4 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, a2);
    if ( !v4 )
      return v8 - __readfsqword(0x28u);
  }
  v5 = (QT::QApplication *)sub_4CE6E0(v4);
  if ( v5 )
  {
    QT::QCloseEvent::QCloseEvent((QT::QCloseEvent *)v7);
    sub_4C9940(v5, v4);
    QT::QCloseEvent::~QCloseEvent((QT::QCloseEvent *)v7);
    return v8 - __readfsqword(0x28u);
  }
  if ( *((_DWORD *)v4 + 10) )
    return v8 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(_QWORD, QT::QWidget *, _QWORD))(**(_QWORD **)(a1 + 8) + 248LL))(
           *(_QWORD *)(a1 + 8),
           v4,
           a3);
}
