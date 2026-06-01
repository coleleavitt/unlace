__int64 __fastcall DockArea::countDockWidgets(__int64 a1, __int64 a2)
{
  if ( !*(_DWORD *)(a2 + 40) )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( !*(_BYTE *)(a2 + 44) )
        ++*(_DWORD *)(a1 + 8);
    }
    else
    {
      ++*(_DWORD *)(a1 + 8);
    }
  }
  return 0;
}
