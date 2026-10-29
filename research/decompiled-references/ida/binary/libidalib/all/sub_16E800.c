void __fastcall sub_16E800(TView *a1)
{
  *(_QWORD *)a1 = &off_23B840;
  *((_QWORD *)a1 + 9) = &off_23BB10;
  *((_QWORD *)a1 + 13) = off_23BB28;
  *((_QWORD *)a1 + 20) = off_23BB58;
  sub_F8BF0(a1);
  operator delete(a1, 0x490u);
}

