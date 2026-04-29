__int64 __fastcall sub_3E9B60(_DWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // kr08_4
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // ecx

  v3 = a2;
  if ( (_DWORD)v3 == 8 )
  {
    result = 16;
    if ( a3 != 1 )
    {
      result = 0;
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return (unsigned int)-(a1[20] != a3);
    }
  }
  else
  {
    if ( a1[97] == (_DWORD)v3 )
    {
      result = 17;
      if ( a3 == 1 )
        return result;
      result = 1;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    else if ( a1[95] == (_DWORD)v3 )
    {
      result = 18;
      if ( a3 == 1 )
        return result;
      result = 2;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    else if ( a1[99] == (_DWORD)v3 )
    {
      result = 19;
      if ( a3 == 1 )
        return result;
      result = 3;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    else if ( a1[15] == (_DWORD)v3 )
    {
      result = 24;
      if ( a3 == 1 )
        return result;
      result = 4;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    else if ( a1[100] == (_DWORD)v3 )
    {
      result = 25;
      if ( a3 == 1 )
        return result;
      result = 5;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    else if ( a1[102] == (_DWORD)v3 )
    {
      result = 26;
      if ( a3 == 1 )
        return result;
      result = 6;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    else
    {
      if ( a1[101] != (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 9 )
        {
          result = 20;
          if ( a3 != 1 )
            return 0xFFFFFFFFLL;
        }
        else if ( a1[96] == (_DWORD)v3 )
        {
          result = 21;
          if ( a3 != 1 )
            return 0xFFFFFFFFLL;
        }
        else if ( a1[94] == (_DWORD)v3 )
        {
          result = 22;
          if ( a3 != 1 )
            return 0xFFFFFFFFLL;
        }
        else if ( a1[98] == (_DWORD)v3 )
        {
          result = 23;
          if ( a3 != 1 )
            return 0xFFFFFFFFLL;
        }
        else
        {
          switch ( v3 )
          {
            case 0LL:
              result = 35;
              if ( a3 != 1 )
                result = 0xFFFFFFFFLL;
              break;
            case 1LL:
              result = 36;
              if ( a3 != 1 )
                result = 0xFFFFFFFFLL;
              break;
            case 2LL:
              result = 37;
              if ( a3 != 1 )
                result = 0xFFFFFFFFLL;
              break;
            case 3LL:
              result = 38;
              if ( a3 != 1 )
                result = 0xFFFFFFFFLL;
              break;
            case 4LL:
              result = 39;
              if ( a3 != 1 )
                result = 0xFFFFFFFFLL;
              break;
            default:
              if ( a1[111] == (_DWORD)v3 )
              {
                result = 54;
              }
              else
              {
                v6 = a1[21];
                v7 = a1[20];
                if ( v6 != 8 )
                  goto LABEL_69;
                v15 = a1[103];
                if ( v15 > (int)v3 || a1[110] < (int)v3 )
                  goto LABEL_69;
                if ( (a3 & (a3 - 1)) != 0 || v7 < a3 )
                  return 0xFFFFFFFFLL;
                LODWORD(v3) = v3 - v15;
                if ( (int)v3 % v7 )
                {
LABEL_69:
                  v8 = a1[120];
                  if ( v8 > (int)v3 || a1[122] < (int)v3 )
                  {
                    v9 = a1[123];
                    if ( v9 > (int)v3 || a1[130] < (int)v3 )
                    {
                      if ( a1[131] == (_DWORD)v3 )
                      {
                        result = 44;
                      }
                      else
                      {
                        v13 = a1[132];
                        if ( v13 > (int)v3 || a1[139] < (int)v3 )
                        {
                          v14 = a1[140];
                          if ( v14 > (int)v3 || a1[155] < (int)v3 )
                          {
                            if ( v6 != 8 )
                              return 0xFFFFFFFFLL;
                            v16 = a1[156];
                            if ( v16 > (int)v3 )
                              return 0xFFFFFFFFLL;
                            if ( a1[171] < (int)v3 )
                              return 0xFFFFFFFFLL;
                            if ( (a3 & (a3 - 1)) != 0 )
                              return 0xFFFFFFFFLL;
                            if ( a3 > 32 )
                              return 0xFFFFFFFFLL;
                            v17 = v3 - v16;
                            if ( (v17 & 0x1F) != 0 )
                              return 0xFFFFFFFFLL;
                            result = (unsigned int)(v17 / 32 + 81);
                          }
                          else
                          {
                            if ( (a3 & (a3 - 1)) != 0 || a3 > 16 || (((_BYTE)v3 - (_BYTE)v14) & 0xF) != 0 )
                              return 0xFFFFFFFFLL;
                            result = (unsigned int)(((int)v3 - v14) / 16 + 64);
                          }
                        }
                        else
                        {
                          if ( (a3 & (a3 - 1)) != 0 || a3 > 8 || (((_BYTE)v3 - (_BYTE)v13) & 7) != 0 )
                            return 0xFFFFFFFFLL;
                          result = (unsigned int)(((int)v3 - v13) / 8 + 56);
                        }
                      }
                    }
                    else
                    {
                      v10 = a1[112];
                      if ( v10 < a3 )
                        return 0xFFFFFFFFLL;
                      v12 = v3 - v9;
                      v11 = ((int)v3 - v9) >> 31;
                      result = 0xFFFFFFFFLL;
                      if ( !(unsigned int)(__SPAIR64__(v11, v12) % v10) )
                        result = 52 - (unsigned int)(__SPAIR64__(v11, v12) / v10);
                    }
                  }
                  else
                  {
                    if ( (a3 & (a3 - 1)) != 0 || v7 < a3 )
                      return 0xFFFFFFFFLL;
                    result = (unsigned int)(((int)v3 - v8) / v7 + 29);
                    if ( ((int)v3 - v8) % v7 )
                      result = 0xFFFFFFFFLL;
                  }
                }
                else
                {
                  result = (unsigned int)((int)v3 / v7 + 8);
                }
              }
              break;
          }
        }
        return result;
      }
      result = 27;
      if ( a3 == 1 )
        return result;
      result = 7;
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
        return result;
    }
    if ( a1[20] != a3 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
