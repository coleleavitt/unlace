__int64 __fastcall sub_176E70(QT::QCoreApplication *this)
{
  __int64 result; // rax
  __int64 v3; // rdi
  void *v4; // rbp
  void (__fastcall *v5)(void *); // rdx
  int v6; // ecx
  QT::QObject *v7; // rsi
  int v8; // edx
  unsigned __int8 v9; // [rsp+Fh] [rbp-29h]

  if ( *((_BYTE *)this + 29) )
    return 1;
  if ( !*((_BYTE *)this + 30) )
  {
    v3 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(v3 + 969) )
    {
      if ( (this == (QT::QCoreApplication *)sub_1EB5B0(v3) || *((_BYTE *)this + 28)) && !*((_DWORD *)this + 6) )
      {
        v7 = *((QT::QObject **)this + 20);
        if ( v7 )
        {
          QT::QCoreApplication::postEvent(*((QT::QCoreApplication **)this + 19), v7, (QT::QEvent *)0xFFFFFFFFLL, v6);
          *((_QWORD *)this + 20) = 0;
        }
        QT::QBasicTimer::stop((QT::QCoreApplication *)((char *)this + 168));
        QT::QCoreApplication::sendPostedEvents(this, (QT::QObject *)((char *)&stru_7C0.st_size + 1), v8);
      }
      if ( *((_BYTE *)this + 29) )
        return 1;
    }
  }
  v4 = (void *)(*(__int64 (__fastcall **)(QT::QCoreApplication *))(*(_QWORD *)this + 144LL))(this);
  result = sub_175090((__int64)this, (__int64)v4);
  if ( v4 )
  {
    v9 = result;
    v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL);
    if ( v5 == renderer_model_reload_strategy_t__::vfunc_1 )
      operator delete(v4, 0x18u);
    else
      v5(v4);
    return v9;
  }
  return result;
}
