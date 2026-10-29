void __fastcall sub_10E3F0(TView *a1)
{
  *(_QWORD *)a1 = &off_236EF8;
  *((_QWORD *)a1 + 9) = &off_2371C8;
  *((_QWORD *)a1 + 13) = off_2371E0;
  *((_QWORD *)a1 + 20) = off_237210;
  sub_F8830(a1);
  operator delete(a1, 0x488u);
}

