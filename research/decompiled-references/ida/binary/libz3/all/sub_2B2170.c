void __fastcall sub_2B2170(_QWORD *a1)
{
  void *v1; // rbp

  v1 = (void *)a1[1];
  *a1 = &off_1C4CC70;
  if ( v1 )
  {
    sub_251920((__int64)v1);
    sub_186B220(v1);
  }
  operator delete(a1, 0x10u);
}

