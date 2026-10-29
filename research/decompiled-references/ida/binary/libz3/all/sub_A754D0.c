void __fastcall sub_A754D0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void *v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi

  v1 = a1 - 7;
  v2 = (void *)a1[1];
  *(a1 - 7) = off_1C70F18;
  *a1 = off_1C710C8;
  if ( v2 )
  {
    sub_A86280(v2);
    sub_186B220(v2);
  }
  v4 = *(a1 - 2);
  *(a1 - 7) = off_1C70148;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(a1 - 3);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  operator delete(v1, 0x48u);
}

