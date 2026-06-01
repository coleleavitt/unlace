__int64 __fastcall sub_8A81B0(char *s1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  result = 0;
  if ( s1 )
  {
    v2 = strcmp(s1, "IDAPRO");
    result = 1;
    if ( v2 )
    {
      v3 = strcmp(s1, "IDAHOME");
      result = 2;
      if ( v3 )
      {
        v4 = strcmp(s1, "IDAFREE");
        result = 3;
        if ( v4 )
        {
          v5 = strcmp(s1, "TEAMS_SERVER");
          result = 4;
          if ( v5 )
          {
            v6 = strcmp(s1, "LUMINA_SERVER");
            result = 5;
            if ( v6 )
              return strcmp(s1, "LICENSE_SERVER") == 0 ? 6 : 0;
          }
        }
      }
    }
  }
  return result;
}
