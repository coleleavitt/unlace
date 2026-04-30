void __fastcall drawable_graph_t::remove_reachable(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[3];
  *a1 = graph_node_visitor_t___vtable;
  while ( v1 )
  {
    sub_292340(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
}
