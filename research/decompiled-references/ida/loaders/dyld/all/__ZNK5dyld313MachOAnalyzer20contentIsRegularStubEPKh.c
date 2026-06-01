bool __fastcall dyld3::MachOAnalyzer::contentIsRegularStub(dyld3::MachOAnalyzer *this, const unsigned __int8 *a2)
{
  _BOOL8 result; // x0
  int v4; // w8
  int v5; // w8
  __int64 v6; // x9

  result = 0;
  v4 = *((_DWORD *)this + 1);
  if ( v4 > 16777222 )
  {
    if ( v4 == 16777228 )
    {
      if ( *a2 == 80 && !a2[1] && !a2[2] )
      {
        v5 = 24;
        goto LABEL_20;
      }
      return 0;
    }
    if ( v4 != 16777223 )
      return result;
    if ( *a2 != 104 )
      return 0;
    v5 = 233;
    v6 = 5;
  }
  else
  {
    if ( v4 != 7 )
    {
      if ( v4 != 12 )
        return result;
      if ( !*a2 && a2[1] == 192 && a2[2] == 159 )
      {
        v5 = 229;
LABEL_20:
        v6 = 3;
        return a2[v6] == v5;
      }
      return 0;
    }
    if ( *a2 != 104 || a2[5] != 255 )
      return 0;
    v5 = 38;
    v6 = 2;
  }
  return a2[v6] == v5;
}
