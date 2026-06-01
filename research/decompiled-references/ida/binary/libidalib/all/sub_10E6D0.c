void __fastcall sub_10E6D0(TView *a1)
{
  *(_QWORD *)a1 = &off_237EF8;
  *((_QWORD *)a1 + 9) = &off_2381C8;
  *((_QWORD *)a1 + 13) = off_2381E0;
  *((_QWORD *)a1 + 20) = off_238210;
  sub_F8BF0(a1);
  operator delete(a1, 0x490u);
}

