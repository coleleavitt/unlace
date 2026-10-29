void __fastcall sub_16E790(__int64 a1)
{
  TView *v1; // rdi

  v1 = (TView *)(a1 - 160);
  *(_QWORD *)v1 = &off_23B840;
  *((_QWORD *)v1 + 9) = &off_23BB10;
  *((_QWORD *)v1 + 13) = off_23BB28;
  *((_QWORD *)v1 + 20) = off_23BB58;
  sub_F8BF0(v1);
}

