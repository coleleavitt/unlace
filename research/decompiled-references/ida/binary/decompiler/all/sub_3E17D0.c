void __fastcall sub_3E17D0(_QWORD *a1)
{
  *a1 = &off_4E8D40;
  if ( a1[107] )
  {
    a1[108] = 0;
    qfree();
  }
  *a1 = &unk_4EB190;
  sub_1D5490(a1);
  operator delete(a1, 0x388u);
}
