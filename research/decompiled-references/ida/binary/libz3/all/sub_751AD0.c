void __fastcall sub_751AD0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 128;
  *((_QWORD *)v2 - 16) = &off_1C54218;
  *((_QWORD *)v2 - 14) = off_1C54270;
  sub_18572D0(v2);
  sub_753BE0(a1 + 16);
  operator delete(a1, 0x88u);
}

