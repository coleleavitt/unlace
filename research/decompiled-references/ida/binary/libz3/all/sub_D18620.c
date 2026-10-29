void __fastcall sub_D18620(_QWORD *a1)
{
  void *v1; // rbp

  v1 = (void *)a1[2];
  *a1 = &off_1C5A340;
  if ( v1 )
  {
    sub_D17CA0((__int64)v1);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

