void __fastcall sub_1B3F90(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  QT::QWidget *v7; // rbx
  void (__fastcall *v8)(QT::QWidget *, const char *); // rax
  __int64 v9; // rdi
  __int64 v10; // rdi

  v3 = a1[3];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v4 = a1[4];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  v5 = a1[5];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  v6 = a1[6];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  v7 = (QT::QWidget *)a1[8];
  if ( v7 )
  {
    v8 = *(void (__fastcall **)(QT::QWidget *, const char *))(*(_QWORD *)v7 + 32LL);
    if ( v8 == GraphMiniView__::vfunc_4 )
    {
      *(_QWORD *)v7 = &GraphMiniView___vtable;
      *((_QWORD *)v7 + 5) = GraphMiniView___vtable_at__40;
      *((_QWORD *)v7 + 2) = GraphMiniView___vtable_at__16;
      sub_2A6D90(v7);
      v9 = *((_QWORD *)v7 + 9);
      *((_QWORD *)v7 + 5) = &stylable_widget_mixin_t___vtable;
      if ( v9 )
      {
        *((_QWORD *)v7 + 10) = 0;
        qfree(v9, a2);
      }
      v10 = *((_QWORD *)v7 + 6);
      if ( v10 )
      {
        *((_QWORD *)v7 + 7) = 0;
        qfree(v10, a2);
      }
      QT::QWidget::~QWidget(v7);
      operator delete(v7, 0xB8u);
    }
    else
    {
      ((void (__fastcall *)(QT::QWidget *))v8)(v7);
    }
  }
}
