void __fastcall sub_10E710(_QWORD *a1)
{
  *(a1 - 20) = &off_237EF8;
  *(a1 - 11) = &off_2381C8;
  *(a1 - 7) = off_2381E0;
  *a1 = off_238210;
  sub_F8BF0((TView *)(a1 - 20));
  operator delete(a1 - 20, 0x490u);
}

