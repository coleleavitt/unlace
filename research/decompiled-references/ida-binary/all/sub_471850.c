__int64 __fastcall sub_471850(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  *(a1 - 2) = &type_editor_t___vtable;
  *a1 = type_editor_t___vtable_at__16;
  a1[3] = type_editor_t___vtable_at__40;
  v3 = a1[31];
  if ( v3 )
  {
    a1[32] = 0;
    qfree(v3, a2);
  }
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
  clear_tinfo_t(a1 + 21);
  return text_area_t__::vfunc_3((QT::QPlainTextEdit *)(a1 - 2));
}
