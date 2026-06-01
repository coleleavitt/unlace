void __fastcall chooser_dirtree_item_model_t::lazy_loader_t__::vfunc_2(char *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  char *v4; // rdi

  v2 = *((_QWORD **)a1 + 3);
  *(_QWORD *)a1 = &off_86FDF8;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x10u);
  }
  memset(*((void **)a1 + 1), 0, 8LL * *((_QWORD *)a1 + 2));
  v4 = *((char **)a1 + 1);
  *((_QWORD *)a1 + 4) = 0;
  *((_QWORD *)a1 + 3) = 0;
  if ( v4 != a1 + 56 )
    operator delete(v4, 8LL * *((_QWORD *)a1 + 2));
  operator delete(a1, 0x50u);
}
