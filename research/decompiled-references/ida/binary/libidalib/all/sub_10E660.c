void __fastcall sub_10E660(__int64 a1)
{
  TView *v1; // rdi

  v1 = (TView *)(a1 - 160);
  *(_QWORD *)v1 = &off_237EF8;
  *((_QWORD *)v1 + 9) = &off_2381C8;
  *((_QWORD *)v1 + 13) = off_2381E0;
  *((_QWORD *)v1 + 20) = off_238210;
  sub_F8BF0(v1);
}

