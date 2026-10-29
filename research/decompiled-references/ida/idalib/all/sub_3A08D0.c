void __fastcall sub_3A08D0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[3];
  *a1 = &off_2B25CB8;
  while ( v2 )
  {
    sub_3A0680(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  operator delete(a1, 0x50u);
}
