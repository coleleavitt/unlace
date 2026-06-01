void __fastcall sub_176C30(QT::QCoreApplication *this, void *a2, char a3)
{
  void *v3; // r12
  bool v6; // zf
  void (__fastcall *v7)(void *); // rax
  QT::QObject *v8; // rbp
  int v9; // ecx
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rdi

  v3 = a2;
  if ( !(unsigned __int8)sub_1A1870() && ((a3 & 1) != 0 || *((_BYTE *)this + 29)) )
  {
    if ( a2 )
    {
      v6 = *((_QWORD *)this + 2) == 0;
      *((_BYTE *)this + 29) = 0;
      if ( v6 )
      {
        sub_459310(this);
LABEL_9:
        v7 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
        if ( v7 == renderer_model_reload_strategy_t__::vfunc_1 )
          operator delete(v3, 0x18u);
        else
          v7(v3);
        return;
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(QT::QCoreApplication *))(*(_QWORD *)this + 144LL))(this);
      v6 = *((_QWORD *)this + 2) == 0;
      *((_BYTE *)this + 29) = 0;
      v3 = (void *)v10;
      if ( v6 )
      {
LABEL_8:
        sub_459310(this);
        if ( !v3 )
          return;
        goto LABEL_9;
      }
    }
    if ( !*((_BYTE *)QT::QCoreApplication::self + 1016) )
    {
      v8 = (QT::QObject *)operator new(0x18u);
      QT::QEvent::QEvent(v8, 2001);
      *((_QWORD *)v8 + 2) = v3;
      *(_QWORD *)v8 = IRendererUpdateModel___vtable;
      QT::QCoreApplication::postEvent(this, v8, nullptr, v9);
      sub_459310(this);
      return;
    }
    if ( *((_QWORD *)this + 20) )
      goto LABEL_8;
    v11 = (_QWORD *)operator new(0x18u);
    QT::QEvent::QEvent(v11, 2001);
    v12 = *((_QWORD *)this + 20);
    v11[2] = v3;
    *v11 = IRendererUpdateModel___vtable;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    *((_QWORD *)this + 20) = v11;
    QT::QBasicTimer::start((char *)this + 168, 100, (char *)this + 136);
    sub_459310(this);
  }
}
