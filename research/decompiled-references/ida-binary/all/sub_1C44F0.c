void __fastcall sub_1C44F0(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      mark_builtin_widgets(0x2000000000008LL, 0, 1);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
