void __fastcall sub_16C80(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[4];
  *a1 = off_8BAC8;
  while ( v1 )
  {
    sub_16AB0(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x30u);
  }
}
