void __fastcall sub_64D00(_QWORD *a1)
{
  *a1 = off_4D61D8;
  qfree(a1[1]);
  operator delete(a1, 0x20u);
}
