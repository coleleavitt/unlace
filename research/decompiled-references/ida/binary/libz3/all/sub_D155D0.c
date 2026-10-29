void __fastcall sub_D155D0(_QWORD *a1)
{
  char *v1; // rbp

  v1 = (char *)a1[2];
  *a1 = &off_1C5A268;
  if ( v1 )
  {
    sub_14B63F0(v1 + 8);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

