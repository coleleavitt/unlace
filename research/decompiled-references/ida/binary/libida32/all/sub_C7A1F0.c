char __fastcall sub_C7A1F0(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ecx
  char result; // al
  unsigned int v5; // ecx
  __int64 v6; // rdx
  int v7; // edx
  bool v8; // cl
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // al
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax

  switch ( a1[2] )
  {
    case 0:
      return 1;
    case 1:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      v5 = a1[16];
      goto LABEL_7;
    case 2:
      v5 = a1[16];
      if ( (*(_BYTE *)(a3 + 47) & 0x20) != 0 && v5 - 13 <= 7 )
        return a1[21] != 3;
      result = 1;
      if ( v5 - 29 <= 3 )
        return result;
      if ( a2[65] == 15 && ((v17 = a2[66], v17 - 27 <= 1) || v17 <= 1) && v5 <= 0x1C )
      {
        result = 1;
        v6 = 1LL << v5;
        if ( ((1LL << v5) & 0x16200002) != 0 )
          return result;
      }
      else
      {
LABEL_7:
        result = 0;
        if ( v5 > 0x25 )
          return result;
        v6 = 1LL << v5;
      }
      result = 1;
      if ( (v6 & 0x801FFC) != 0 )
        return result;
      goto LABEL_10;
    case 3:
      if ( (*(_BYTE *)(a3 + 47) & 0x20) != 0 )
        return a1[21] != 3;
      return 0;
    case 4:
      v3 = a1[16];
      if ( v3 - 13 > 7 )
      {
        result = 1;
        if ( v3 - 29 > 3 )
        {
          result = 0;
          if ( v3 <= 0x27 )
          {
            result = 1;
            v6 = 1LL << v3;
            if ( ((1LL << v3) & 0x8010A01FFELL) == 0 )
            {
LABEL_10:
              result = 0;
              if ( (v6 & 0x3000000000LL) != 0 )
              {
                v7 = a2[65];
                result = 1;
                if ( v7 != 3 )
                {
                  result = 0;
                  if ( a2[62] == 38 )
                  {
                    v8 = a2[64] == 3;
                    result = v8 && v7 == 24;
                    if ( !result )
                      return v8 && v7 == 25;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        return (*(_BYTE *)(a3 + 47) & 0x20) == 0 || a1[21] != 3;
      }
      return result;
    case 0xA:
    case 0xB:
    case 0xC:
      v9 = a1[16];
      result = 0;
      if ( v9 <= 0xC && ((1LL << v9) & 0x1A94) != 0 )
        goto LABEL_22;
      return result;
    case 0xD:
      v11 = a1[16];
      result = 0;
      if ( v11 <= 0x14 )
      {
        if ( ((1LL << v11) & 0x1A94) != 0 )
        {
          v12 = a2[65];
          v13 = 1;
          if ( v12 <= 0x1F )
            v13 = ((0xF8000222uLL >> v12) & 1) == 0;
          return v12 != 15 && v13;
        }
        else
        {
          return ((1LL << v11) & 0x1FE000) != 0;
        }
      }
      return result;
    case 0xE:
      v16 = a1[16];
      result = 0;
      if ( v16 <= 0x27 )
        return ((1LL << v16) & 0x8004200000LL) != 0;
      return result;
    case 0xF:
      v14 = a1[16];
      result = 0;
      if ( v14 <= 0x27 )
        return ((1LL << v14) & 0x8006200002LL) != 0;
      return result;
    case 0x10:
      v15 = a1[16];
      result = 0;
      if ( v15 > 0x1C || ((1LL << v15) & 0x16200002) == 0 )
        return result;
LABEL_22:
      if ( a2[65] == 15 )
      {
        v10 = a2[66];
        result = 1;
        if ( v10 - 27 > 1 )
          return v10 <= 1;
      }
      return result;
  }
}

