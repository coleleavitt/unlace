char *__fastcall sub_4B5D40(__int64 *a1, unsigned int a2, int a3, __int16 a4)
{
  __int64 v6; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  char *result; // rax
  char *v11; // rdx
  unsigned __int64 v12; // rbx
  char *v13; // rax
  _QWORD v14[3]; // [rsp+0h] [rbp-108h] BYREF
  char v15; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD v16[6]; // [rsp+D8h] [rbp-30h] BYREF

  v6 = *a1;
  v16[0] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_614FB0(v6, 35) == 9 )
    return (char *)&byte_22CD811;
  v9 = a3 & 0x600;
  if ( v9 == 1536 )
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
    else
    {
      v14[0] = -1;
      v14[2] = 0;
      v14[1] = 0xFFFFFFFFLL;
      v13 = &v15;
      do
      {
        *(_WORD *)v13 = 0;
        v13 += 24;
        *((_WORD *)v13 - 11) = 0;
        *((_WORD *)v13 - 10) = 0;
        *((_DWORD *)v13 - 1) = 0;
        *((_WORD *)v13 - 9) = 0;
        *((_QWORD *)v13 - 2) = 0;
        *((_DWORD *)v13 - 2) = 0;
      }
      while ( v16 != (_QWORD *)v13 );
      if ( (int)decode_insn(v14, a2, v16, 0, 0, v8) > 0 && (unsigned __int8)sub_4B5BC0(a1, (__int64)v14, 2u) )
        return "locret";
    }
    return (char *)"loc";
  }
  result = (char *)"unk";
  if ( v9 == 1024 )
  {
    result = (char *)"off";
    v11 = (char *)(a3 & 0xF00000);
    if ( v11 != (_BYTE *)&loc_4FFFFF + 1 )
    {
      result = "seg";
      if ( v11 != (char *)&loc_400000 )
      {
        v12 = a3 & 0xF0000000;
        result = "xmmword";
        if ( v12 != 1879048192 )
        {
          if ( v12 > 0x70000000 )
          {
            result = "algn";
            if ( v12 != 2952790016 )
            {
              if ( v12 > 0xB0000000 )
              {
                result = "ymmword";
                if ( v12 != 3758096384 )
                {
                  result = "zmmword";
                  if ( v12 != 4026531840 )
                  {
                    result = (char *)"unk";
                    if ( v12 == 3489660928 )
                      return "custdata";
                  }
                }
              }
              else
              {
                result = (char *)&unk_22B1B9F;
                if ( v12 != 2415919104 )
                {
                  result = "packreal";
                  if ( v12 != 2684354560 )
                  {
                    result = (char *)"unk";
                    if ( v12 == 0x80000000 )
                      return "flt";
                  }
                }
              }
            }
          }
          else
          {
            result = "qword";
            if ( v12 != 805306368 )
            {
              if ( v12 > 0x30000000 )
              {
                result = (char *)&unk_22B1BA3;
                if ( v12 != 1342177280 )
                {
                  result = "stru";
                  if ( v12 != 1610612736 )
                  {
                    result = (char *)"unk";
                    if ( v12 == 0x40000000 )
                      return "tbyte";
                  }
                }
              }
              else
              {
                result = "word";
                if ( v12 != 0x10000000 )
                {
                  result = "dword";
                  if ( v12 != 0x20000000 )
                  {
                    result = (char *)"unk";
                    if ( !v12 )
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

