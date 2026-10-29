void __fastcall sub_16E890(_QWORD *a1)
{
  *(a1 - 13) = &off_23B840;
  *(a1 - 4) = &off_23BB10;
  *a1 = off_23BB28;
  a1[7] = off_23BB58;
  sub_F8BF0((TView *)(a1 - 13));
  operator delete(a1 - 13, 0x490u);
}

