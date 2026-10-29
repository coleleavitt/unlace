void __fastcall diff_source_panel_t__::vfunc_3(QT::QSplitter *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  *(_QWORD *)this = &diff_source_panel_t___vtable;
  *((_QWORD *)this + 2) = diff_source_panel_t___vtable_at__16;
  v2 = sub_277DF0();
  sub_278D20(v2, 0, 0);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v3, nullptr);
  }
  QT::QSplitter::~QSplitter(this);
}
