void __fastcall sub_7E3030(char *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 2) = &off_2B3BB30;
  sub_7D4A10(v2);
  operator delete(a1, 0x110u);
}
