/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012870
// Address: 0x0000000100012870

//----- (0000000100012870) ----------------------------------------------------
__int64 __fastcall sub_100012870(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  const char *v3; // r13
  __int64 v4; // r15
  const char *v5; // rbx
  __int64 v6; // r14
  const char *v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-48h]
  __int64 v10; // [rsp+10h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 480) & 1) != 0 && (v2 = 72LL * *(_QWORD *)(a1 + 232)) != 0 )
  {
    v3 = *(const char **)(a1 + 224);
    v4 = *(_QWORD *)(a1 + 448);
    v5 = v3 + 24;
    v6 = 0;
    do
    {
      if ( v4 != -1 || !*((_QWORD *)v5 + 3) )
        goto LABEL_8;
      if ( !*((_QWORD *)v5 + 2) )
        goto LABEL_4;
      if ( *(v5 - 16) == 95 )
      {
        if ( *(v5 - 15) == 95 )
        {
          if ( *(v5 - 14) == 95 )
          {
            if ( *(v5 - 13) == 95 )
            {
              if ( *(v5 - 12) == 95 )
              {
                if ( *(v5 - 11) == 95 )
                {
                  if ( *(v5 - 10) == 95 )
                  {
                    if ( *(v5 - 9) == 95 )
                    {
                      if ( *(v5 - 8) == 95 )
                      {
                        if ( *(v5 - 7) == 95 )
                        {
                          if ( *(v5 - 6) == 95 )
                          {
                            if ( *(v5 - 5) == 95 )
                            {
                              if ( *(v5 - 4) == 95 )
                              {
                                if ( *(v5 - 3) == 95 )
                                {
                                  if ( *(v5 - 2) == 95 )
                                  {
                                    v7 = v5;
                                    if ( *(v5 - 1) != 95 )
                                      v7 = v5 - 1;
                                  }
                                  else
                                  {
                                    v7 = v3 + 22;
                                  }
                                }
                                else
                                {
                                  v7 = v3 + 21;
                                }
                              }
                              else
                              {
                                v7 = v3 + 20;
                              }
                            }
                            else
                            {
                              v7 = v3 + 19;
                            }
                          }
                          else
                          {
                            v7 = v3 + 18;
                          }
                        }
                        else
                        {
                          v7 = v3 + 17;
                        }
                      }
                      else
                      {
                        v7 = v3 + 16;
                      }
                    }
                    else
                    {
                      v7 = v3 + 15;
                    }
                  }
                  else
                  {
                    v7 = v3 + 14;
                  }
                }
                else
                {
                  v7 = v3 + 13;
                }
              }
              else
              {
                v7 = v3 + 12;
              }
            }
            else
            {
              v7 = v3 + 11;
            }
          }
          else
          {
            v7 = v3 + 10;
          }
        }
        else
        {
          v7 = v3 + 9;
        }
      }
      else
      {
        v7 = v5 - 16;
      }
      if ( !strncasecmp(v7, "TEXT", 4u) )
      {
LABEL_4:
        v4 = *(_QWORD *)v5;
        *(_QWORD *)(a1 + 448) = *(_QWORD *)v5;
      }
      else
      {
LABEL_8:
        if ( !strncasecmp(v5 - 16, "__LINKEDIT", 0xAu) && !v6 )
          v6 = *(_QWORD *)v5 - (v4 + *((_QWORD *)v5 + 2));
      }
      v3 += 72;
      v5 += 72;
      v2 -= 72;
    }
    while ( v2 );
  }
  else
  {
    v6 = 0;
  }
  return v6 + v10 + a2 + v9;
}
