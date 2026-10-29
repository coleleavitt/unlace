char __fastcall sub_15D2910(__int64 a1, _DWORD *a2)
{
  int v2; // edx
  char result; // al
  bool v4; // cl

  v2 = a2[65];
  result = 1;
  if ( v2 != 15 )
  {
    result = 0;
    if ( a2[62] == 38 )
    {
      v4 = a2[64] == 3;
      result = v4 && v2 == 24;
      if ( !result )
        return v4 && v2 == 25;
    }
  }
  return result;
}
