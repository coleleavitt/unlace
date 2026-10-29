void __fastcall sub_7BFC50(char *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 2) = &off_2B11920;
  sub_7B1530(v2);
  operator delete(a1, 0x110u);
}

