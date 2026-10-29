void __fastcall sub_1FE00(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[47];
  *a1 = &off_88658;
  while ( v2 )
  {
    sub_1FBF0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  operator delete(a1, 0x19Cu);
}

