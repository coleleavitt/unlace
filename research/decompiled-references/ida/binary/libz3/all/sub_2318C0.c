void __fastcall sub_2318C0(char *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 32;
  *(v2 - 4) = &off_1C4C140;
  *v2 = &off_1C4C120;
  sub_2317C0(v2);
  operator delete(a1, 0x250u);
}

