void __fastcall sub_CF54E0(char *a1)
{
  char *v2; // rdi
  void *v3; // rbp

  v2 = a1 + 112;
  *((_QWORD *)v2 - 14) = &off_1C59DB0;
  sub_18572D0(v2);
  sub_1670470(a1 + 56);
  v3 = *((void **)a1 + 5);
  if ( v3 )
  {
    sub_1695230(*((_QWORD *)a1 + 5));
    sub_186B220(v3);
  }
  sub_14B63F0(a1 + 24);
  operator delete(a1, 0x78u);
}

