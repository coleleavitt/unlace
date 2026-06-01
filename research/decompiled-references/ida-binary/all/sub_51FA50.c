double __fastcall standalone_dirtree_widget_t::do_load_cached_list(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi

  *a1 = &standalone_dirtree_widget_t::do_load_cached_list;
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    return qfree(v6, a2);
  }
  return result;
}
