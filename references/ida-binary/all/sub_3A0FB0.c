void __fastcall sub_3A0FB0(int a1, _QWORD *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      sub_4A4600(a2[2], 0, 7, 0);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
