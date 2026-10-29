/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001098C
// Address: 0x000000010001098C

//----- (000000010001098C) ----------------------------------------------------
__int64 __fastcall sub_10001098C(__int64 a1, unsigned int a2)
{
  __int64 v3; // x24
  __int64 v5; // x25
  __int64 v6; // x27
  __int64 v7; // x26
  const char *v8; // x23
  __int64 v9; // x21
  const char *v10; // x28
  const char *v11; // x0
  const char *v12; // x8
  const char *v13; // x8
  int v14; // t1
  __int64 v16; // [xsp+8h] [xbp-58h]

  v16 = *(_QWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 480) & 1) != 0 && (v5 = 72LL * *(_QWORD *)(a1 + 232)) != 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = *(const char **)(a1 + 224);
    v9 = *(_QWORD *)(a1 + 448);
    v10 = v8;
    do
    {
      if ( v9 != -1 || !*(_QWORD *)&v8[v6 + 48] )
        goto LABEL_8;
      if ( !*(_QWORD *)&v8[v6 + 40] )
        goto LABEL_4;
      v11 = &v8[v6 + 8];
      if ( *v11 == 95 )
      {
        if ( v8[v6 + 9] == 95 )
        {
          if ( v8[v6 + 10] == 95 )
          {
            if ( v8[v6 + 11] == 95 )
            {
              if ( v8[v6 + 12] == 95 )
              {
                if ( v8[v6 + 13] == 95 )
                {
                  if ( v8[v6 + 14] == 95 )
                  {
                    if ( v8[v6 + 15] == 95 )
                    {
                      if ( v8[v6 + 16] == 95 )
                      {
                        if ( v8[v6 + 17] == 95 )
                        {
                          if ( v8[v6 + 18] == 95 )
                          {
                            if ( v8[v6 + 19] == 95 )
                            {
                              if ( v8[v6 + 20] == 95 )
                              {
                                if ( v8[v6 + 21] == 95 )
                                {
                                  v12 = &v8[v6];
                                  if ( v8[v6 + 22] == 95 )
                                  {
                                    v14 = *((unsigned __int8 *)v12 + 23);
                                    v13 = v12 + 23;
                                    if ( v14 == 95 )
                                      v11 = &v8[v6 + 24];
                                    else
                                      v11 = v13;
                                  }
                                  else
                                  {
                                    v11 = v10 + 22;
                                  }
                                }
                                else
                                {
                                  v11 = v10 + 21;
                                }
                              }
                              else
                              {
                                v11 = v10 + 20;
                              }
                            }
                            else
                            {
                              v11 = v10 + 19;
                            }
                          }
                          else
                          {
                            v11 = v10 + 18;
                          }
                        }
                        else
                        {
                          v11 = v10 + 17;
                        }
                      }
                      else
                      {
                        v11 = v10 + 16;
                      }
                    }
                    else
                    {
                      v11 = v10 + 15;
                    }
                  }
                  else
                  {
                    v11 = v10 + 14;
                  }
                }
                else
                {
                  v11 = v10 + 13;
                }
              }
              else
              {
                v11 = v10 + 12;
              }
            }
            else
            {
              v11 = v10 + 11;
            }
          }
          else
          {
            v11 = v10 + 10;
          }
        }
        else
        {
          v11 = v10 + 9;
        }
      }
      if ( !strncasecmp(v11, "TEXT", 4u) )
      {
LABEL_4:
        v9 = *(_QWORD *)&v8[v6 + 24];
        *(_QWORD *)(a1 + 448) = v9;
      }
      else
      {
LABEL_8:
        if ( !strncasecmp(&v8[v6 + 8], "__LINKEDIT", 0xAu) && !v7 )
          v7 = *(_QWORD *)&v8[v6 + 24] - (v9 + *(_QWORD *)&v8[v6 + 40]);
      }
      v10 += 72;
      v6 += 72;
    }
    while ( v5 != v6 );
  }
  else
  {
    v7 = 0;
  }
  return v16 + a2 + v3 + v7;
}
