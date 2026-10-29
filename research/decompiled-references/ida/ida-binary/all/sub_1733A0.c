__int64 __fastcall sub_1733A0(QT::QCoreApplication **a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  QT::QObject *v5; // rsi

  if ( *(_DWORD *)(a2 + 16) == *((_DWORD *)a1 + 8) )
  {
    v5 = a1[3];
    if ( v5 )
    {
      QT::QCoreApplication::postEvent(a1[2], v5, (QT::QEvent *)0xFFFFFFFFLL, a4);
      a1[3] = nullptr;
    }
    return QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 4));
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(40483, a2, a3, a4, a5);
    return IRendererUpdateModel__::vfunc_0((QT::QEvent *)((char *)&stru_9E20.st_name + 3));
  }
}
