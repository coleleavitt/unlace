void __fastcall TextArrows__::vfunc_3(QT::QWidget *this, const char *a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 i; // r12
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  *(_QWORD *)this = &TextArrows___vtable;
  v3 = *((_QWORD *)this + 231);
  *((_QWORD *)this + 2) = TextArrows___vtable_at__16;
  *((_QWORD *)this + 5) = TextArrows___vtable_at__40;
  while ( v3 )
  {
    sub_46FB90(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v4, 0x28u);
  }
  v5 = *((_QWORD *)this + 225);
  while ( v5 )
  {
    sub_46FB90(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v6, 0x28u);
  }
  v7 = *((_QWORD *)this + 95);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 96);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = *(_QWORD *)(v7 + 72 * i + 16);
        if ( v10 )
        {
          do
          {
            sub_46F940(*(_QWORD **)(v10 + 24));
            v11 = (void *)v10;
            v10 = *(_QWORD *)(v10 + 16);
            a2 = (const char *)&dword_30;
            operator delete(v11, 0x30u);
          }
          while ( v10 );
          v7 = *((_QWORD *)this + 95);
        }
      }
    }
    *((_QWORD *)this + 96) = 0;
    qfree(v7, a2);
  }
  sub_46FB10(*((void ***)this + 91));
  v12 = *((_QWORD *)this + 86);
  if ( v12 )
  {
    *((_QWORD *)this + 87) = 0;
    qfree(v12, a2);
  }
  *((_QWORD *)this + 13) = &HintProvider___vtable;
  if ( *((_DWORD *)this + 164) )
    QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 656));
  QT::QObject::~QObject((QT::QWidget *)((char *)this + 104));
  v13 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v13 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v13, a2);
  }
  v14 = *((_QWORD *)this + 6);
  if ( v14 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v14, a2);
  }
  QT::QWidget::~QWidget(this);
}
