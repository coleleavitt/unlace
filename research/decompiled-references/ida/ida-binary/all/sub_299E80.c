unsigned __int64 __fastcall sub_299E80(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rbx
  __int64 i; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v4 = a2 + 8;
  v17 = __readfsqword(0x28u);
  v16 = drawable_graph_t::recalc_edge_widths;
  sub_298EA0(a1, &v16, 0, a4);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 != a2 + 8 )
  {
    do
    {
      v8 = *(_QWORD *)(v6 + 32);
      v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
      if ( v9 == interactive_graph_t__::vfunc_20 )
        v7 = interactive_graph_t__::vfunc_20(a1, v8);
      else
        v7 = v9(a1, v8);
      *(_DWORD *)(v7 + 4) = 2;
      v6 = std::_Rb_tree_increment(v6);
    }
    while ( v6 != v4 );
  }
  v10 = *(_QWORD *)(a3 + 24);
  for ( i = a3 + 8; i != v10; v10 = std::_Rb_tree_increment(v10) )
  {
    v13 = *(_QWORD *)(v10 + 32);
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
    if ( v14 == interactive_graph_t__::vfunc_20 )
      v12 = interactive_graph_t__::vfunc_20(a1, v13);
    else
      v12 = v14(a1, v13);
    *(_DWORD *)(v12 + 4) = 2;
  }
  return v17 - __readfsqword(0x28u);
}
