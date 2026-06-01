char __fastcall sub_15D29D0(__int64 a1, _DWORD *a2)
{
  int v2; // edx
  char result; // al
  int v4; // ecx
  int v5; // edi

  v2 = a2[67];
  result = 1;
  if ( v2 != 5 )
  {
    v4 = a2[65];
    v5 = a2[62];
    if ( v4 != 15 || (unsigned int)(v5 - 3) > 2 )
    {
      result = 1;
      if ( v5 != 7 )
      {
        result = 0;
        if ( v2 == 3 )
        {
          result = v4 == 3;
          if ( v4 == 7 )
            return a2[66] != 49 && (unsigned int)(a2[66] - 18) > 7;
        }
      }
    }
  }
  return result;
}
