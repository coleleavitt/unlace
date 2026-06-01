void __fastcall sub_16DDC0(__int64 a1)
{
  TView *v1; // rdi

  v1 = (TView *)(a1 - 160);
  *(_QWORD *)v1 = &off_23A840;
  *((_QWORD *)v1 + 9) = &off_23AB10;
  *((_QWORD *)v1 + 13) = off_23AB28;
  *((_QWORD *)v1 + 20) = off_23AB58;
  sub_F8830(v1);
}

