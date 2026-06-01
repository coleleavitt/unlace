void __fastcall graph_node_visitor_t__::vfunc_3(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[3];
  *a1 = graph_node_visitor_t___vtable;
  while ( v2 )
  {
    sub_292340(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  operator delete(a1, 0x38u);
}
