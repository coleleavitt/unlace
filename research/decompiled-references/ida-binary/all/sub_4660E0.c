void __fastcall sub_4660E0(__int64 a1, char *a2)
{
  void (__fastcall *v2)(QT::QWidget *, const char *); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = *(void (__fastcall **)(QT::QWidget *, const char *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == GraphMiniView__::vfunc_3 )
  {
    *(_QWORD *)a2 = &GraphMiniView___vtable;
    *((_QWORD *)a2 + 2) = GraphMiniView___vtable_at__16;
    *((_QWORD *)a2 + 5) = GraphMiniView___vtable_at__40;
    sub_2A6D90((__int64)a2);
    v3 = *((_QWORD *)a2 + 9);
    *((_QWORD *)a2 + 5) = &stylable_widget_mixin_t___vtable;
    if ( v3 )
    {
      *((_QWORD *)a2 + 10) = 0;
      qfree(v3, a2);
    }
    v4 = *((_QWORD *)a2 + 6);
    if ( v4 )
    {
      *((_QWORD *)a2 + 7) = 0;
      qfree(v4, a2);
    }
    QT::QWidget::~QWidget((QT::QWidget *)a2);
  }
  else
  {
    ((void (__fastcall *)(char *))v2)(a2);
  }
}
