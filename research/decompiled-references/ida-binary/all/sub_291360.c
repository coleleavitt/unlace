_QWORD *__fastcall simple_edge_typer_t__::vfunc_0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[3];
  while ( v2 )
  {
    sub_291150(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  a1[3] = 0;
  a1[4] = a1 + 2;
  a1[5] = a1 + 2;
  a1[6] = 0;
  return a1 + 2;
}
