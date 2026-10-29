__int64 __fastcall sub_10BAA90(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 16) == 2 )
    goto LABEL_2;
  v4 = 0;
  v5 = sub_10B8FF0(a2, 0x185u);
  if ( !v5 )
  {
    v5 = sub_10B8FF0(a2, 0x16Du);
    if ( !v5 )
    {
      v5 = sub_10BA920(a2, 0xBAEu, 0x9C8u);
      if ( !v5 )
      {
        v5 = sub_10B8FF0(a2, 0xC6Du);
        if ( !v5 )
        {
          if ( (*(_BYTE *)(a1 + 920) & 2) != 0 )
          {
LABEL_2:
            v4 = 0;
            v5 = 0;
            goto LABEL_3;
          }
          v4 = 1;
          v5 = sub_10B8FF0(a2, 0xC44u);
          if ( !v5 )
          {
            v5 = sub_10B8FF0(a2, 0x183u);
            if ( !v5 )
            {
              v5 = sub_10BA920(a2, 0x3AAu, 0x3A9u);
              if ( !v5 )
              {
                v4 = 2;
                v5 = sub_10B8FF0(a2, 0x738u);
                if ( !v5 )
                {
                  v5 = sub_10B8FF0(a2, 0xC62u);
                  if ( !v5 )
                  {
                    v5 = sub_10B8FF0(a2, 0xC4Eu);
                    if ( !v5 )
                    {
                      v5 = sub_10B8FF0(a2, 0xAE3u);
                      if ( !v5 )
                      {
                        v5 = sub_10B8FF0(a2, 0xD34u);
                        if ( !v5 )
                        {
                          v5 = sub_10B8FF0(a2, 0xC96u);
                          if ( !v5 )
                          {
                            v5 = sub_10B8FF0(a2, 0xC94u);
                            if ( !v5 )
                            {
                              v5 = sub_10B8FF0(a2, 0x7Bu);
                              if ( !v5 )
                              {
                                v5 = sub_10B8FF0(a2, 0x14Eu);
                                if ( !v5 )
                                {
                                  v5 = sub_10B8FF0(a2, 0x14Du);
                                  if ( !v5 )
                                  {
                                    v4 = 3;
                                    v5 = sub_10B8FF0(a2, 0xCF8u);
                                    if ( !v5 )
                                    {
                                      v4 = 4;
                                      v5 = sub_10B8FF0(a2, 0xF9u);
                                      if ( !v5 )
                                      {
                                        v5 = sub_10B8FF0(a2, 0x155u);
                                        v4 = 6 - (v5 == 0);
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
LABEL_3:
  if ( a3 )
    *a3 = v5;
  return v4;
}

