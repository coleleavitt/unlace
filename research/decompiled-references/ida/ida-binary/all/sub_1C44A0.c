void __fastcall sub_1C44A0(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      mark_builtin_widgets(0x400000000040000LL, 0, 1);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
