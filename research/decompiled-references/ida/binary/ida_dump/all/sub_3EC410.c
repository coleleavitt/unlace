void __fastcall sub_3EC410(_QWORD *a1)
{
  *a1 = &off_4E9CC0;
  if ( a1[107] )
  {
    a1[108] = 0;
    qfree();
  }
  *a1 = &unk_4EC0A8;
  sub_1D8010((__int64)a1);
  operator delete(a1, 0x388u);
}
