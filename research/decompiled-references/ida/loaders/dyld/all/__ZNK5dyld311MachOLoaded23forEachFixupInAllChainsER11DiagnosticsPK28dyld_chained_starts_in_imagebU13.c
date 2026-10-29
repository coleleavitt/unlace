__int64 __fastcall dyld3::MachOLoaded::forEachFixupInAllChains(__int64 result, int a2, unsigned int *a3)
{
  unsigned int v3; // w8
  int v6; // w23
  unsigned __int64 v7; // x24
  _DWORD *v8; // x25

  v3 = *a3;
  if ( *a3 )
  {
    v6 = result;
    v7 = 0;
    v8 = a3 + 1;
    do
    {
      if ( v8[v7] )
      {
        result = dyld3::MachOLoaded::forEachFixupInSegmentChains(v6, a2);
        v3 = *a3;
      }
      ++v7;
    }
    while ( v7 < v3 );
  }
  return result;
}
