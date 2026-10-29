void __fastcall sub_10E380(__int64 a1)
{
  TView *v1; // rdi

  v1 = (TView *)(a1 - 160);
  *(_QWORD *)v1 = &off_236EF8;
  *((_QWORD *)v1 + 9) = &off_2371C8;
  *((_QWORD *)v1 + 13) = off_2371E0;
  *((_QWORD *)v1 + 20) = off_237210;
  sub_F8830(v1);
}

