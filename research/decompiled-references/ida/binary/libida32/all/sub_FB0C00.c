__int64 __fastcall sub_FB0C00(__int64 a1, unsigned int a2)
{
  char v2; // al
  unsigned int v3; // edx
  char v4; // al
  unsigned int *v5; // rcx
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 2);
  v3 = 2026;
  if ( (v2 & 2) == 0 )
  {
    v3 = 2023;
    if ( (v2 & 1) == 0 )
    {
      v4 = *(_BYTE *)(a1 + 1);
      v3 = 2020;
      if ( v4 >= 0 )
      {
        v3 = 2017;
        if ( (v4 & 0x40) == 0 )
        {
          v3 = 2014;
          if ( (v4 & 0x20) == 0 )
            v3 = (v4 & 0x10) == 0 ? 1998 : 2011;
        }
      }
    }
  }
  v5 = (unsigned int *)((char *)&unk_23ED980 + 12 * a2);
  result = v5[2];
  if ( *v5 <= v3 )
    return v5[1];
  return result;
}

