void __fastcall sub_C77470(_QWORD *a1)
{
  void *v1; // rbp

  v1 = (void *)a1[2];
  *a1 = &off_1C58A38;
  if ( v1 )
  {
    sub_C76B20((__int64)v1);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

