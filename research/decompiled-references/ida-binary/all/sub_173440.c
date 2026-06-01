void __fastcall IRendererUpdateModel__::vfunc_1(QT::QEvent *this)
{
  void *v2; // rdi
  void (*v3)(void); // rax

  *(_QWORD *)this = IRendererUpdateModel___vtable;
  v2 = *((void **)this + 2);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)renderer_model_reload_strategy_t__::vfunc_1 )
      operator delete(v2, 0x18u);
    else
      v3();
  }
  QT::QEvent::~QEvent(this);
  operator delete(this, 0x18u);
}
