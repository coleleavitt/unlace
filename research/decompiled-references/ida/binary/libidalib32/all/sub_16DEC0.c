void __fastcall sub_16DEC0(_QWORD *a1)
{
  *(a1 - 13) = &off_23A840;
  *(a1 - 4) = &off_23AB10;
  *a1 = off_23AB28;
  a1[7] = off_23AB58;
  sub_F8830((TView *)(a1 - 13));
  operator delete(a1 - 13, 0x488u);
}

