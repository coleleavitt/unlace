void __fastcall colorize_selected_nodes(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = colorize_selected_nodes;
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x50u);
}
