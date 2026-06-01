void __fastcall sub_A75450(_QWORD *a1)
{
  void *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = (void *)a1[8];
  *a1 = off_1C70F18;
  a1[7] = off_1C710C8;
  if ( v2 )
  {
    sub_A86280(v2);
    sub_186B220(v2);
  }
  v3 = a1[5];
  *a1 = off_1C70148;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[4];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(a1, 0x48u);
}

