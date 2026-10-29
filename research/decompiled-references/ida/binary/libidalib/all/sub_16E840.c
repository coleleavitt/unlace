void __fastcall sub_16E840(_QWORD *a1)
{
  *(a1 - 20) = &off_23B840;
  *(a1 - 11) = &off_23BB10;
  *(a1 - 7) = off_23BB28;
  *a1 = off_23BB58;
  sub_F8BF0((TView *)(a1 - 20));
  operator delete(a1 - 20, 0x490u);
}

