void __fastcall sub_8359D0(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[13] == 0;
  *a1 = &off_2B3CAB8;
  if ( !v1 )
    sub_7505D0(a1 + 6);
  sub_837F20(a1);
  operator delete(a1, 0x80A8u);
}
