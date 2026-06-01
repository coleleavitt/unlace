void __fastcall sub_471DA0(_QWORD *a1, const char *a2)
{
  QT::QPlainTextEdit *v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = (QT::QPlainTextEdit *)(a1 - 5);
  *(a1 - 5) = &type_editor_t___vtable;
  *(a1 - 3) = type_editor_t___vtable_at__16;
  *a1 = type_editor_t___vtable_at__40;
  v4 = a1[28];
  if ( v4 )
  {
    a1[29] = 0;
    qfree(v4, a2);
  }
  v5 = a1[25];
  if ( v5 )
  {
    a1[26] = 0;
    qfree(v5, a2);
  }
  v6 = a1[22];
  if ( v6 )
  {
    a1[23] = 0;
    qfree(v6, a2);
  }
  v7 = a1[19];
  if ( v7 )
  {
    a1[20] = 0;
    qfree(v7, a2);
  }
  clear_tinfo_t(a1 + 18);
  text_area_t__::vfunc_3(v2);
  operator delete(v2, 0x138u);
}
