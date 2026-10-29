void __fastcall sub_2305B0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 48;
  *((_QWORD *)v2 - 6) = &off_1C4C570;
  sub_14B63F0(v2);
  sub_18572D0(a1 + 40);
  operator delete(a1, 0x40u);
}

