void __fastcall sub_16DE30(TView *a1)
{
  *(_QWORD *)a1 = &off_23A840;
  *((_QWORD *)a1 + 9) = &off_23AB10;
  *((_QWORD *)a1 + 13) = off_23AB28;
  *((_QWORD *)a1 + 20) = off_23AB58;
  sub_F8830(a1);
  operator delete(a1, 0x488u);
}

