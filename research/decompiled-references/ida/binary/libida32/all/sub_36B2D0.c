__int64 __fastcall sub_36B2D0(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 2 )
    callui();
  if ( v2 > 2 )
  {
    if ( v2 == 4 )
      callui();
  }
  else
  {
    if ( !v2 )
      callui();
    if ( v2 == 1 )
      callui();
  }
  *(_DWORD *)(a2 + 8) = 0;
  return 0;
}

