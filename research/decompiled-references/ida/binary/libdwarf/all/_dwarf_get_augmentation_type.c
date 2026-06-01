__int64 __fastcall dwarf_get_augmentation_type(__int64 a1, char *a2, int a3)
{
  __int64 result; // rax
  char v4; // r12
  int v6; // edx
  int v7; // edx

  result = 0;
  v4 = *a2;
  if ( *a2 )
  {
    v6 = strcmp(a2, "mti v1");
    result = 3;
    if ( v6 )
    {
      if ( v4 == 122 )
      {
        result = 2;
        if ( !a3 )
        {
          result = 1;
          if ( a2[1] )
            return 6;
        }
      }
      else if ( *a2 != 101 || (result = 4, a2[1] != 104) )
      {
        v7 = strcmp(a2, "armcc+");
        result = 5;
        if ( v7 )
        {
          if ( *a2 == 72 && a2[1] == 67 && !a2[2] )
            return 7;
          return 6;
        }
      }
    }
  }
  return result;
}

