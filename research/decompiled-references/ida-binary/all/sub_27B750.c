double __fastcall disasm_graph_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  double v10; // xmm0_8

  *a1 = disasm_graph_t___vtable;
  a1[35] = qflow_chart_t___vtable;
  v3 = a1[44];
  if ( v3 )
  {
    v4 = a1[45];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7, a2);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8, a2);
        }
        v3 = a1[44];
      }
    }
    a1[45] = 0;
    qfree(v3, a2);
  }
  v9 = a1[37];
  if ( v9 )
  {
    a1[38] = 0;
    qfree(v9, a2);
  }
  *a1 = &unk_871348;
  v10 = interactive_graph_t__::vfunc_0(a1, a2);
  return qfree(a1, a2, v10);
}
