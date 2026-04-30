__int64 __fastcall sub_47B170(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  QT::QWidget *v6; // rdi
  const QT::QObject *(__fastcall *v8)(QT::QApplication *); // rax
  const QT::QObject *v9; // rax
  QT::QObject *v10; // rdi

  if ( !a2 )
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
    if ( !sub_4CF3F0(v10) )
      return 0;
  }
  if ( *(_QWORD *)(a1 + 136) )
    sub_47AFB0(a1, a3);
  v4 = operator new(0x18u);
  *(_QWORD *)v4 = 0;
  v5 = v4;
  *(_QWORD *)(v4 + 8) = 0;
  *(_BYTE *)(v4 + 16) = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 408LL))(a1, v4, 0);
  v6 = nullptr;
  if ( !*(_BYTE *)(a1 + 520) )
    v6 = *(QT::QWidget **)(a1 + 512);
  sub_4CB1F0(v6);
  *(_QWORD *)(a1 + 136) = v5;
  return 1;
}
