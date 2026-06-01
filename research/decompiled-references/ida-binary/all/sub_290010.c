__int64 __fastcall drawable_graph_t::clear_layout_info(__int64 a1, const char *a2, _QWORD *a3)
{
  __int64 v3; // rdi

  v3 = a3[2];
  a3[1] = -1;
  if ( v3 )
  {
    a3[3] = 0;
    qfree(v3, a2);
    a3[2] = 0;
    a3[4] = 0;
  }
  return 0;
}
