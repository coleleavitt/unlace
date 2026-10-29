void __fastcall simple_edge_typer_t__::vfunc_3(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[3];
  *a1 = simple_edge_typer_t___vtable;
  while ( v2 )
  {
    sub_291150(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  operator delete(a1, 0x38u);
}
