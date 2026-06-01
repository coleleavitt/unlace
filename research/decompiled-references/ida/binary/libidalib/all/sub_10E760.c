void __fastcall sub_10E760(_QWORD *a1)
{
  *(a1 - 13) = &off_237EF8;
  *(a1 - 4) = &off_2381C8;
  *a1 = off_2381E0;
  a1[7] = off_238210;
  sub_F8BF0((TView *)(a1 - 13));
  operator delete(a1 - 13, 0x490u);
}

