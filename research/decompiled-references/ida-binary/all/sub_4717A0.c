__int64 __fastcall type_editor_t__::vfunc_3(QT::QPlainTextEdit *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  *(_QWORD *)this = &type_editor_t___vtable;
  *((_QWORD *)this + 2) = type_editor_t___vtable_at__16;
  *((_QWORD *)this + 5) = type_editor_t___vtable_at__40;
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    *((_QWORD *)this + 34) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
  {
    *((_QWORD *)this + 31) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
  {
    *((_QWORD *)this + 28) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    *((_QWORD *)this + 25) = 0;
    qfree(v6, a2);
  }
  clear_tinfo_t((char *)this + 184);
  return text_area_t__::vfunc_3(this);
}
