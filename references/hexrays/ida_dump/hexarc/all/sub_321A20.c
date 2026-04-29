void __fastcall sub_321A20(_QWORD *a1)
{
  *a1 = &off_4AFE68;
  qfree(a1[4]);
  qfree(a1[2]);
  operator delete(a1, 0x50u);
}
