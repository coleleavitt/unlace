void __fastcall IRendererUpdateModel__::vfunc_0(QT::QEvent *this)
{
  void *v2; // rdi
  void (__fastcall *v3)(void *); // rax

  *(_QWORD *)this = IRendererUpdateModel___vtable;
  v2 = *((void **)this + 2);
  if ( !v2 )
    goto LABEL_4;
  v3 = *(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL);
  if ( v3 == renderer_model_reload_strategy_t__::vfunc_1 )
  {
    operator delete(v2, 0x18u);
LABEL_4:
    QT::QEvent::~QEvent(this);
    return;
  }
  ((void (*)(void))v3)();
  QT::QEvent::~QEvent(this);
}
