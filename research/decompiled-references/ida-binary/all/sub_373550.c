double __fastcall proxim_graph_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  double v13; // xmm0_8

  v3 = a1[39];
  *a1 = proxim_graph_t___vtable;
  if ( v3 )
  {
    v4 = a1[40];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 40 * i;
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree(v7, a2);
          v3 = a1[39];
        }
      }
    }
    a1[40] = 0;
    qfree(v3, a2);
  }
  v8 = a1[34];
  if ( v8 )
  {
    v9 = a1[35];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = v8 + 40 * j;
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 24) = 0;
          qfree(v12, a2);
          v8 = a1[34];
        }
      }
    }
    a1[35] = 0;
    qfree(v8, a2);
  }
  *a1 = &unk_871348;
  v13 = interactive_graph_t__::vfunc_0(a1, a2);
  return qfree(a1, a2, v13);
}
