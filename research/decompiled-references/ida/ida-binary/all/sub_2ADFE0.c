double __fastcall user_graph_t__::vfunc_1(_QWORD *a1)
{
  double v1; // xmm0_8

  *a1 = user_graph_t___vtable;
  sub_293760((__int64)a1, 18, a1);
  v1 = interactive_graph_t__::vfunc_0(a1, (const char *)&word_12);
  return qfree(a1, (const char *)&word_12, v1);
}
