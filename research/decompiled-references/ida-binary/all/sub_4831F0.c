unsigned __int64 __fastcall sub_4831F0(__int64 a1, QT::QObject *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  const QT::QObject *(__fastcall *v8)(QT::QApplication *); // rax
  const QT::QObject *v9; // rax
  QT::QObject *v10; // rdi
  _BYTE v11[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (a3 & 2) == 0 )
  {
    v8 = *(const QT::QObject *(__fastcall **)(QT::QApplication *))(*(_QWORD *)(a1 + 16) + 48LL);
    if ( v8 == IDAApplication__::vfunc_6 )
    {
      v9 = (const QT::QObject *)QT::QApplication::focusWidget((QT::QApplication *)a1);
      v10 = sub_479220(a1 + 16, v9);
    }
    else
    {
      v10 = v8((QT::QApplication *)(a1 + 16));
    }
    if ( a2 == (QT::QObject *)sub_4CF3F0(v10) )
      sub_531B30(8, 0, 0);
  }
  QT::QEvent::QEvent(v11, 2002);
  v5 = sub_4CD6B0(a2, 0);
  sub_51B5E0(v5, v11);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 520) )
    v6 = *(_QWORD *)(a1 + 512);
  sub_4C9F90(v6, a2);
  if ( (a3 & 8) != 0 )
  {
    QT::QObject::deleteLater(a2);
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(QT::QObject *))(*(_QWORD *)a2 + 32LL))(a2);
  }
  QT::QEvent::~QEvent((QT::QEvent *)v11);
  return v12 - __readfsqword(0x28u);
}
