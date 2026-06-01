void __fastcall standalone_dirtree_widget_t::do_load_cached_list(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = &standalone_dirtree_widget_t::do_load_cached_list;
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3, a2);
  }
  v4 = a1[5];
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4, a2);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5, a2);
  }
  operator delete(a1, 0xA8u);
}
