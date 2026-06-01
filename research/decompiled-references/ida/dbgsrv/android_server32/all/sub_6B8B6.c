/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B8B6
// Address: 0x0006B8B6

//----- (0006B8B6) --------------------------------------------------------
int __fastcall sub_6B8B6(_DWORD *a1)
{
  int v1; // r1
  int v2; // r0

  v1 = 0;
  if ( a1[1] )
  {
    v1 = 1;
    if ( a1[2] )
    {
      v1 = 2;
      if ( a1[3] )
      {
        v1 = 3;
        if ( a1[4] )
        {
          v1 = 4;
          if ( a1[5] )
          {
            v1 = 5;
            if ( a1[6] )
            {
              v1 = 6;
              if ( a1[7] )
              {
                v1 = 7;
                if ( a1[8] )
                {
                  v1 = 8;
                  if ( a1[9] )
                  {
                    v1 = 9;
                    if ( a1[10] )
                    {
                      v1 = 10;
                      if ( a1[11] )
                      {
                        v1 = 11;
                        if ( a1[12] )
                        {
                          v1 = 12;
                          if ( a1[13] )
                          {
                            v1 = 13;
                            if ( a1[14] )
                            {
                              v1 = 14;
                              if ( a1[15] )
                              {
                                v2 = a1[16];
                                v1 = 15;
                                if ( v2 )
                                {
                                  *(_DWORD *)_errno(v2) = 23;
                                  return -1;
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
  return v1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
