void __fastcall standalone_dirtree_item_model_t::lazy_loader_t__::vfunc_1(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 v4; // rax
  void *v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rsi

  v2 = (_QWORD *)a1[3];
  *a1 = &off_86FDF8;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x10u);
  }
  v4 = a1[2];
  v5 = (void *)a1[1];
  v6 = a1 + 7;
  memset(v5, 0, 8 * v4);
  v7 = (_QWORD *)*(v6 - 6);
  v8 = *(v6 - 5);
  *(v6 - 3) = 0;
  *(v6 - 4) = 0;
  if ( v7 != v6 )
    operator delete(v7, 8 * v8);
}
