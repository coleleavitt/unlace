void __fastcall sub_16DE70(_QWORD *a1)
{
  *(a1 - 20) = &off_23A840;
  *(a1 - 11) = &off_23AB10;
  *(a1 - 7) = off_23AB28;
  *a1 = off_23AB58;
  sub_F8830((TView *)(a1 - 20));
  operator delete(a1 - 20, 0x488u);
}

