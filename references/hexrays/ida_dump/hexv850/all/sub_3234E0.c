void __fastcall sub_3234E0(_QWORD *a1)
{
  *a1 = &off_4B6FE8;
  qfree(a1[4]);
  qfree(a1[2]);
  operator delete(a1, 0x50u);
}
