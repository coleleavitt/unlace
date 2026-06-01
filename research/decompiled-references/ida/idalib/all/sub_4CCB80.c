char *__fastcall sub_4CCB80(_QWORD *a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v6; // rdx
  char *result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx

  if ( (unsigned __int8)sub_631AD0(*a1, 35) == 9 )
    return (char *)&byte_22F0C30;
  v6 = a3 & 0x600;
  if ( v6 == 1536 )
  {
    if ( (a3 & 0x10000000) != 0 )
      return "sub";
    if ( (a4 & 0x180) != 0 )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( (a4 & 0x100) != 0 )
        {
          if ( !under_debugger )
            interr(1426);
          BUG();
        }
        return "locret";
      }
    }
    else if ( (unsigned __int8)sub_4CCA80(a1, a2, 2u) )
    {
      return "locret";
    }
    return (char *)"loc";
  }
  result = (char *)"unk";
  if ( v6 == 1024 )
  {
    result = (char *)"off";
    v8 = a3 & 0xF00000;
    if ( v8 != 5242880 )
    {
      result = "seg";
      if ( v8 != 0x400000 )
      {
        v9 = a3 & 0xF0000000;
        result = "xmmword";
        if ( v9 != 1879048192 )
        {
          if ( v9 > 0x70000000 )
          {
            result = "algn";
            if ( v9 != 2952790016 )
            {
              if ( v9 > 0xB0000000 )
              {
                result = "ymmword";
                if ( v9 != 3758096384 )
                {
                  result = "zmmword";
                  if ( v9 != 4026531840 )
                  {
                    result = (char *)"unk";
                    if ( v9 == 3489660928 )
                      return "custdata";
                  }
                }
              }
              else
              {
                result = (char *)&unk_22D5047;
                if ( v9 != 2415919104 )
                {
                  result = "packreal";
                  if ( v9 != 2684354560 )
                  {
                    result = (char *)"unk";
                    if ( v9 == 0x80000000 )
                      return "flt";
                  }
                }
              }
            }
          }
          else
          {
            result = "qword";
            if ( v9 != 805306368 )
            {
              if ( v9 > 0x30000000 )
              {
                result = (char *)&unk_22D504B;
                if ( v9 != 1342177280 )
                {
                  result = "stru";
                  if ( v9 != 1610612736 )
                  {
                    result = (char *)"unk";
                    if ( v9 == 0x40000000 )
                      return "tbyte";
                  }
                }
              }
              else
              {
                result = "word";
                if ( v9 != 0x10000000 )
                {
                  result = "dword";
                  if ( v9 != 0x20000000 )
                  {
                    result = (char *)"unk";
                    if ( !v9 )
                      return "byte";
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
