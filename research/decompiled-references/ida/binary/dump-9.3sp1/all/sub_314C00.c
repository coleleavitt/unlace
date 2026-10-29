__int64 __fastcall sub_314C00(int *a1, int *a2)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // eax

  if ( a2[1] != a1[1] )
  {
    if ( !under_debugger )
      sub_383060(51847);
    goto LABEL_23;
  }
  v2 = *a1;
  if ( *a1 == 8 )
    return 0;
  v3 = *a2;
  if ( !*a2 )
    return 0;
  if ( v3 == 8 )
  {
    sub_312B80((__int64)a1);
    *a1 = 8;
    return 1;
  }
  if ( v2 != 1 )
  {
    if ( v3 == 1 )
    {
LABEL_18:
      sub_312B80((__int64)a1);
      *a1 = 1;
      return 1;
    }
    if ( !v2 )
    {
      if ( a2 != a1 )
      {
        sub_312B80((__int64)a1);
        sub_312C40((__int64)a1, (__int64)a2, v4, v5);
      }
      return 1;
    }
    if ( (unsigned int)sub_312DC0((__int64)a1, (__int64)a2) )
    {
      if ( (*a1 & 0xF) == 2 && (*a2 & 0xF) == 2 )
      {
        v7 = sub_314610((__int64)a1, (__int64)a2);
        if ( v7 != 3 )
        {
          if ( v7 != 4 )
            return 0;
          goto LABEL_18;
        }
        return 1;
      }
      if ( !under_debugger )
        sub_383060(51978);
LABEL_23:
      BUG();
    }
  }
  return 0;
}
