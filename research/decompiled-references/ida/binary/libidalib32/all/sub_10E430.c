void __fastcall sub_10E430(_QWORD *a1)
{
  *(a1 - 20) = &off_236EF8;
  *(a1 - 11) = &off_2371C8;
  *(a1 - 7) = off_2371E0;
  *a1 = off_237210;
  sub_F8830((TView *)(a1 - 20));
  operator delete(a1 - 20, 0x488u);
}

