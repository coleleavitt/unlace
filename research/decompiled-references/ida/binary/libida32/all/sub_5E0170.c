__int64 __fastcall sub_5E0170(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // [rsp+Ch] [rbp-42Ch] BYREF
  _BYTE src[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+418h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_728190(&v4, a1, a2, 0, 64) )
  {
    if ( (unsigned __int8)sub_727B60(a1, a2) )
    {
      if ( *(_WORD *)(a2 + 24) == 58 )
      {
        dword_2CA23D0 = v4;
        if ( (unsigned __int8)sub_727B60(a1, a2) )
        {
          if ( (unsigned __int8)sub_728190(&v4, a1, a2, 0x80000000LL, 0x7FFFFFFF) )
          {
            if ( (unsigned __int8)sub_727B60(a1, a2) )
            {
              if ( *(_WORD *)(a2 + 24) == 58 )
              {
                if ( (unsigned __int8)sub_727B60(a1, a2) )
                {
                  dword_2CA23D4 = v4;
                  if ( (unsigned __int8)sub_727D10(src, 1024, a1, a2) )
                  {
                    qword_2CA23D8 = qsem_create(src, 0);
                    if ( !qword_2CA23D8 )
                    {
                      if ( !under_debugger )
                        interr(199);
                      goto LABEL_23;
                    }
                    if ( (unsigned __int8)sub_727B60(a1, a2) )
                    {
                      if ( *(_WORD *)(a2 + 24) == 58 )
                      {
                        if ( (unsigned __int8)sub_727B60(a1, a2) )
                        {
                          v2 = sub_727D10(src, 1024, a1, a2);
                          if ( (_BYTE)v2 )
                          {
                            qword_2CA23E0 = qsem_create(src, 0);
                            if ( qword_2CA23E0 )
                            {
                              qatexit(sub_5DF830);
                              return v2;
                            }
                            if ( !under_debugger )
                              interr(200);
LABEL_23:
                            BUG();
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
  return 0;
}

