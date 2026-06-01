__int64 __fastcall sub_6B3A20(__int64 a1, _BYTE *a2, int *a3)
{
  unsigned int v3; // ecx
  char v5; // al
  char *v6; // rdi
  int v7; // ecx

  v3 = 0;
  if ( a2 )
  {
    if ( *a2 == 35 )
    {
      v5 = a2[1];
      v6 = a2 + 1;
      if ( v5 )
      {
        v7 = 0;
        while ( 1 )
        {
          ++v6;
          if ( v5 >= 0 )
            break;
          v7 = v5 & 0x7F | (v7 << 7);
          v5 = *v6;
          if ( !*v6 )
            return 0;
        }
        if ( a3 )
          *a3 = (v7 << 6) | v5 & 0x3F;
        return 1;
      }
    }
  }
  return v3;
}
