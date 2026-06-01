void __fastcall sub_1C4420(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      sub_3D5E20(a2);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
