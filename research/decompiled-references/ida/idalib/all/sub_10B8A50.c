__int64 __fastcall sub_10B8A50(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 result; // rax
  int v6; // eax
  int v7; // eax
  unsigned __int8 *v9[17]; // [rsp+10h] [rbp-88h] BYREF

  v3 = a2[1];
  if ( *a2 != v3 )
  {
    v4 = *a2;
    while ( sub_9B4AA0(v4, "+atomics") )
    {
      if ( sub_9B4AA0(v4, "-atomics") )
      {
        if ( sub_9B4AA0(v4, "+bulk-memory") )
        {
          if ( sub_9B4AA0(v4, "-bulk-memory") )
          {
            if ( sub_9B4AA0(v4, "+bulk-memory-opt") )
            {
              if ( sub_9B4AA0(v4, "-bulk-memory-opt") )
              {
                if ( sub_9B4AA0(v4, "+call-indirect-overlong") )
                {
                  if ( sub_9B4AA0(v4, "-call-indirect-overlong") )
                  {
                    if ( sub_9B4AA0(v4, "+exception-handling") )
                    {
                      if ( sub_9B4AA0(v4, "-exception-handling") )
                      {
                        if ( sub_9B4AA0(v4, "+extended-const") )
                        {
                          if ( sub_9B4AA0(v4, "-extended-const") )
                          {
                            if ( !sub_9B4AA0(v4, "+fp16") )
                            {
                              v6 = *(_DWORD *)(a1 + 512);
                              *(_BYTE *)(a1 + 522) = 1;
                              if ( v6 <= 0 )
                                v6 = 1;
                              *(_DWORD *)(a1 + 512) = v6;
                              goto LABEL_4;
                            }
                            if ( sub_9B4AA0(v4, "-fp16") )
                            {
                              if ( sub_9B4AA0(v4, "+multimemory") )
                              {
                                if ( sub_9B4AA0(v4, "-multimemory") )
                                {
                                  if ( sub_9B4AA0(v4, "+multivalue") )
                                  {
                                    if ( sub_9B4AA0(v4, "-multivalue") )
                                    {
                                      if ( sub_9B4AA0(v4, "+mutable-globals") )
                                      {
                                        if ( sub_9B4AA0(v4, "-mutable-globals") )
                                        {
                                          if ( sub_9B4AA0(v4, "+nontrapping-fptoint") )
                                          {
                                            if ( sub_9B4AA0(v4, "-nontrapping-fptoint") )
                                            {
                                              if ( sub_9B4AA0(v4, "+reference-types") )
                                              {
                                                if ( sub_9B4AA0(v4, "-reference-types") )
                                                {
                                                  if ( !sub_9B4AA0(v4, "+relaxed-simd") )
                                                  {
                                                    v7 = *(_DWORD *)(a1 + 512);
                                                    if ( v7 <= 1 )
                                                      v7 = 2;
                                                    goto LABEL_62;
                                                  }
                                                  if ( !sub_9B4AA0(v4, "-relaxed-simd") )
                                                  {
                                                    v7 = *(_DWORD *)(a1 + 512);
                                                    if ( v7 > 1 )
                                                      goto LABEL_65;
                                                    goto LABEL_62;
                                                  }
                                                  if ( !sub_9B4AA0(v4, "+sign-ext") )
                                                  {
                                                    *(_BYTE *)(a1 + 528) = 1;
                                                    goto LABEL_4;
                                                  }
                                                  if ( !sub_9B4AA0(v4, "-sign-ext") )
                                                  {
                                                    *(_BYTE *)(a1 + 528) = 0;
                                                    goto LABEL_4;
                                                  }
                                                  if ( !sub_9B4AA0(v4, "+simd128") )
                                                  {
                                                    v7 = *(_DWORD *)(a1 + 512);
                                                    if ( v7 <= 0 )
LABEL_65:
                                                      v7 = 1;
LABEL_62:
                                                    *(_DWORD *)(a1 + 512) = v7;
                                                    goto LABEL_4;
                                                  }
                                                  if ( !sub_9B4AA0(v4, "-simd128") )
                                                  {
                                                    v7 = *(_DWORD *)(a1 + 512);
                                                    if ( v7 > 0 )
                                                      v7 = 0;
                                                    goto LABEL_62;
                                                  }
                                                  if ( sub_9B4AA0(v4, "+tail-call") )
                                                  {
                                                    if ( sub_9B4AA0(v4, "-tail-call") )
                                                    {
                                                      if ( sub_9B4AA0(v4, "+wide-arithmetic") )
                                                      {
                                                        if ( sub_9B4AA0(v4, "-wide-arithmetic") )
                                                        {
                                                          sub_FC70B0((__int64)v9, a3, 0, 52);
                                                          sub_AEC220(v9, *(_BYTE **)v4, *(_QWORD *)(v4 + 8));
                                                          sub_AE9DF0(v9, (__int64)"-target-feature", 1u);
                                                          sub_AEA040((__int64)v9);
                                                          return 0;
                                                        }
                                                        *(_BYTE *)(a1 + 530) = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_BYTE *)(a1 + 530) = 1;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      *(_BYTE *)(a1 + 529) = 0;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    *(_BYTE *)(a1 + 529) = 1;
                                                  }
                                                }
                                                else
                                                {
                                                  *(_BYTE *)(a1 + 527) = 0;
                                                }
                                              }
                                              else
                                              {
                                                *(_BYTE *)(a1 + 527) = 1;
                                              }
                                            }
                                            else
                                            {
                                              *(_BYTE *)(a1 + 526) = 0;
                                            }
                                          }
                                          else
                                          {
                                            *(_BYTE *)(a1 + 526) = 1;
                                          }
                                        }
                                        else
                                        {
                                          *(_BYTE *)(a1 + 525) = 0;
                                        }
                                      }
                                      else
                                      {
                                        *(_BYTE *)(a1 + 525) = 1;
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(a1 + 524) = 0;
                                    }
                                  }
                                  else
                                  {
                                    *(_BYTE *)(a1 + 524) = 1;
                                  }
                                }
                                else
                                {
                                  *(_BYTE *)(a1 + 523) = 0;
                                }
                              }
                              else
                              {
                                *(_BYTE *)(a1 + 523) = 1;
                              }
                            }
                            else
                            {
                              *(_BYTE *)(a1 + 522) = 0;
                            }
                          }
                          else
                          {
                            *(_BYTE *)(a1 + 521) = 0;
                          }
                        }
                        else
                        {
                          *(_BYTE *)(a1 + 521) = 1;
                        }
                      }
                      else
                      {
                        *(_BYTE *)(a1 + 520) = 0;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 520) = 1;
                    }
                  }
                  else
                  {
                    *(_BYTE *)(a1 + 519) = 0;
                  }
                }
                else
                {
                  *(_BYTE *)(a1 + 519) = 1;
                }
              }
              else
              {
                *(_BYTE *)(a1 + 518) = 0;
              }
            }
            else
            {
              *(_BYTE *)(a1 + 518) = 1;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 517) = 0;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 517) = 1;
        }
LABEL_4:
        v4 += 32;
        if ( v3 == v4 )
          goto LABEL_8;
      }
      else
      {
        v4 += 32;
        *(_BYTE *)(a1 + 516) = 0;
        if ( v3 == v4 )
          goto LABEL_8;
      }
    }
    *(_BYTE *)(a1 + 516) = 1;
    goto LABEL_4;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 517) )
    *(_BYTE *)(a1 + 518) = 1;
  result = *(unsigned __int8 *)(a1 + 527);
  if ( !(_BYTE)result )
    return 1;
  *(_BYTE *)(a1 + 519) = 1;
  return result;
}
