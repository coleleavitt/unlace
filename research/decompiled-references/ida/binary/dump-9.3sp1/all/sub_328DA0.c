void __fastcall sub_328DA0(_QWORD *a1)
{
  *a1 = &off_4E3668;
  qfree(a1[4]);
  qfree(a1[2]);
  operator delete(a1, 0x50u);
}
