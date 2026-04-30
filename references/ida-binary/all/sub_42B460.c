__int64 __fastcall sub_42B460(QT::QTreeView *this, const char *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = &files_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = &unk_876628;
  *((_QWORD *)this + 30) = &unk_876678;
  *((_QWORD *)this + 38) = &unk_8766B8;
  *((_QWORD *)this + 311) = &unk_876848;
  sub_48F1B0();
  *((_QWORD *)this + 311) = &unk_8729E8;
  unbind_event_handler_all((char *)this + 2488);
  v3 = *((_QWORD *)this + 312);
  if ( v3 )
  {
    *((_QWORD *)this + 313) = 0;
    qfree(v3, a2);
  }
  return ida_dirtree_widget_t__::vfunc_3(this);
}
