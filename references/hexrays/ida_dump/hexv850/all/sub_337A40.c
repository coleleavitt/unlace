__int64 __fastcall sub_337A40(char *s1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx

  result = 0;
  if ( s1 )
  {
    v2 = strcmp(s1, "HEXX86");
    result = 1;
    if ( v2 )
    {
      v3 = strcmp(s1, "HEXX64");
      result = 2;
      if ( v3 )
      {
        v4 = strcmp(s1, "HEXARM");
        result = 3;
        if ( v4 )
        {
          v5 = strcmp(s1, "HEXARM64");
          result = 4;
          if ( v5 )
          {
            v6 = strcmp(s1, "HEXMIPS");
            result = 5;
            if ( v6 )
            {
              v7 = strcmp(s1, "HEXMIPS64");
              result = 6;
              if ( v7 )
              {
                v8 = strcmp(s1, "HEXPPC");
                result = 7;
                if ( v8 )
                {
                  v9 = strcmp(s1, "HEXPPC64");
                  result = 8;
                  if ( v9 )
                  {
                    v10 = strcmp(s1, "HEXRV");
                    result = 9;
                    if ( v10 )
                    {
                      v11 = strcmp(s1, "HEXRV64");
                      result = 10;
                      if ( v11 )
                      {
                        v12 = strcmp(s1, "HEXARC");
                        result = 11;
                        if ( v12 )
                        {
                          v13 = strcmp(s1, "HEXARC64");
                          result = 12;
                          if ( v13 )
                          {
                            v14 = strcmp(s1, "HEXV850");
                            result = 27;
                            if ( v14 )
                            {
                              v15 = strcmp(s1, "HEXCX86");
                              result = 13;
                              if ( v15 )
                              {
                                v16 = strcmp(s1, "HEXCX64");
                                result = 14;
                                if ( v16 )
                                {
                                  v17 = strcmp(s1, "HEXCARM");
                                  result = 15;
                                  if ( v17 )
                                  {
                                    v18 = strcmp(s1, "HEXCARM64");
                                    result = 16;
                                    if ( v18 )
                                    {
                                      v19 = strcmp(s1, "HEXCMIPS");
                                      result = 17;
                                      if ( v19 )
                                      {
                                        v20 = strcmp(s1, "HEXCMIPS64");
                                        result = 18;
                                        if ( v20 )
                                        {
                                          v21 = strcmp(s1, "HEXCPPC");
                                          result = 23;
                                          if ( v21 )
                                          {
                                            v22 = strcmp(s1, "HEXCPPC64");
                                            result = 24;
                                            if ( v22 )
                                            {
                                              v23 = strcmp(s1, "HEXCRV");
                                              result = 21;
                                              if ( v23 )
                                              {
                                                v24 = strcmp(s1, "HEXCRV64");
                                                result = 22;
                                                if ( v24 )
                                                {
                                                  v25 = strcmp(s1, "HEXCARC");
                                                  result = 19;
                                                  if ( v25 )
                                                  {
                                                    v26 = strcmp(s1, "HEXCARC64");
                                                    result = 20;
                                                    if ( v26 )
                                                    {
                                                      v27 = strcmp(s1, "HEXCV850");
                                                      result = 28;
                                                      if ( v27 )
                                                      {
                                                        v28 = strcmp(s1, "LUMINA");
                                                        result = 25;
                                                        if ( v28 )
                                                          return strcmp(s1, "TEAMS") == 0 ? 0x1A : 0;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
