void __fastcall sub_1FDC0(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[47];
  *a1 = &off_88658;
  while ( v1 )
  {
    sub_1FBF0(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x30u);
  }
}

