void __fastcall sub_55F070(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_1C675A8;
  v2 = (void *)a1[5];
  if ( v2 )
    sub_4D63E0(v2);
  v3 = a1[2];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x30u);
}

