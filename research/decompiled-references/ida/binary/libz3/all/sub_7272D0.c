void __fastcall sub_7272D0(_QWORD *a1)
{
  void *v1; // rbp

  v1 = (void *)a1[4];
  *a1 = &off_1C53978;
  if ( v1 )
  {
    sub_1230A80(v1);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x28u);
}

