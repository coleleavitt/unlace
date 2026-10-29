void __fastcall sub_1C43D0(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_3D5B50();
      sub_3B8B30();
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
