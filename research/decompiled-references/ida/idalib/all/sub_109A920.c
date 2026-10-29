__int64 __fastcall sub_109A920(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 i; // r15
  const char *v7; // rsi
  __int64 v8; // rdi

  v2 = *a2;
  v3 = a2[1];
  *(_DWORD *)(a1 + 552) = 0;
  if ( v2 != v3 )
  {
    for ( i = v2; v3 != i; i += 32 )
    {
      while ( !sub_9B4AA0(i, "+altivec") )
      {
        *(_BYTE *)(a1 + 556) = 1;
LABEL_4:
        i += 32;
        if ( v3 == i )
          return 1;
      }
      if ( sub_9B4AA0(i, "+vsx") )
      {
        if ( sub_9B4AA0(i, "+power8-vector") )
        {
          if ( sub_9B4AA0(i, "+crypto") )
          {
            if ( sub_9B4AA0(i, "+htm") )
            {
              if ( sub_9B4AA0(i, "+float128") )
              {
                if ( sub_9B4AA0(i, "+power9-vector") )
                {
                  if ( sub_9B4AA0(i, "+power10-vector") )
                  {
                    if ( sub_9B4AA0(i, "+pcrelative-memops") )
                    {
                      v7 = "+spe";
                      v8 = i;
                      if ( sub_9B4AA0(i, "+spe") && (v7 = "+efpu2", v8 = i, sub_9B4AA0(i, "+efpu2")) )
                      {
                        if ( sub_9B4AA0(i, "+frsqrte") )
                        {
                          if ( sub_9B4AA0(i, "+frsqrtes") )
                          {
                            if ( sub_9B4AA0(i, "-hard-float") )
                            {
                              if ( sub_9B4AA0(i, "+mma") )
                              {
                                if ( sub_9B4AA0(i, "+rop-protect") )
                                {
                                  if ( sub_9B4AA0(i, "+quadword-atomics") )
                                  {
                                    if ( !sub_9B4AA0(i, "+longcall") )
                                      *(_BYTE *)(a1 + 570) = 1;
                                  }
                                  else
                                  {
                                    *(_BYTE *)(a1 + 569) = 1;
                                  }
                                }
                                else
                                {
                                  *(_BYTE *)(a1 + 558) = 1;
                                }
                              }
                              else
                              {
                                *(_BYTE *)(a1 + 557) = 1;
                              }
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 552) = 1;
                            }
                          }
                          else
                          {
                            *(_BYTE *)(a1 + 566) = 1;
                          }
                        }
                        else
                        {
                          *(_BYTE *)(a1 + 565) = 1;
                        }
                      }
                      else
                      {
                        *(_BYTE *)(a1 + 285) = 0;
                        *(_BYTE *)(a1 + 564) = 1;
                        *(_WORD *)(a1 + 24) = 16448;
                        *(_QWORD *)(a1 + 112) = sub_21F90B0(v8, v7);
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 568) = 1;
                    }
                  }
                  else
                  {
                    *(_BYTE *)(a1 + 567) = 1;
                  }
                }
                else
                {
                  *(_BYTE *)(a1 + 563) = 1;
                }
              }
              else
              {
                *(_BYTE *)(a1 + 278) = *(_DWORD *)(a1 + 260) != 20;
              }
            }
            else
            {
              *(_BYTE *)(a1 + 562) = 1;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 561) = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 560) = 1;
        }
        goto LABEL_4;
      }
      *(_BYTE *)(a1 + 559) = 1;
    }
  }
  return 1;
}
