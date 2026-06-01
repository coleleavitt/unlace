double __fastcall colorize_selected_nodes(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  *a1 = colorize_selected_nodes;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    return qfree(v2, a2);
  }
  return result;
}
