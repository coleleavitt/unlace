void __fastcall sub_1C4960(int a1, void *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 && dword_8CAF10 <= 0 )
      mark_builtin_widgets(0x2000008000008LL, 0, 1);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
