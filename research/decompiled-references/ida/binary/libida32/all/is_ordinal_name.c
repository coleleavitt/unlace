__int64 __fastcall is_ordinal_name(_BYTE *a1, int *a2)
{
  unsigned int v2; // edx
  char v4; // al
  char *v5; // rcx
  int v6; // edx

  v2 = 0;
  if ( a1 )
  {
    if ( *a1 == 35 )
    {
      v4 = a1[1];
      v5 = a1 + 1;
      if ( v4 )
      {
        v6 = 0;
        while ( 1 )
        {
          ++v5;
          if ( v4 >= 0 )
            break;
          v6 = v4 & 0x7F | (v6 << 7);
          v4 = *v5;
          if ( !*v5 )
            return 0;
        }
        if ( a2 )
          *a2 = (v6 << 6) | v4 & 0x3F;
        return 1;
      }
    }
  }
  return v2;
}

