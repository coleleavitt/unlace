__int64 __fastcall sub_5FC030(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+8h] [rbp-430h] BYREF
  _BYTE src[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+418h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_748330(&v4, a1, a2, 0, 64, 0) )
  {
    if ( (unsigned __int8)sub_7480A0(a1, a2) )
    {
      if ( *(_WORD *)(a2 + 24) == 58 )
      {
        dword_2CCC2D0 = v4;
        if ( (unsigned __int8)sub_7480A0(a1, a2) )
        {
          if ( (unsigned __int8)sub_748330(&v4, a1, a2, 0xFFFFFFFF80000000LL, 0x7FFFFFFF, 0) )
          {
            if ( (unsigned __int8)sub_7480A0(a1, a2) )
            {
              if ( *(_WORD *)(a2 + 24) == 58 )
              {
                if ( (unsigned __int8)sub_7480A0(a1, a2) )
                {
                  dword_2CCC2D4 = v4;
                  if ( (unsigned __int8)sub_748250(src, 1024, a1, a2) )
                  {
                    qword_2CCC2D8 = qsem_create(src, 0);
                    if ( !qword_2CCC2D8 )
                    {
                      if ( !under_debugger )
                        interr(199);
                      goto LABEL_23;
                    }
                    if ( (unsigned __int8)sub_7480A0(a1, a2) )
                    {
                      if ( *(_WORD *)(a2 + 24) == 58 )
                      {
                        if ( (unsigned __int8)sub_7480A0(a1, a2) )
                        {
                          v2 = sub_748250(src, 1024, a1, a2);
                          if ( (_BYTE)v2 )
                          {
                            qword_2CCC2E0 = qsem_create(src, 0);
                            if ( qword_2CCC2E0 )
                            {
                              qatexit(sub_5FB6F0);
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
