__int64 __fastcall sub_C0FAB0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi

  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_C0F760(a1);
      v7 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v7, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_C0F760(a1);
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_C0EEE0(a1, 0);
  result = sub_C0F7F0(a1, (char *)(a1 + 7104), a3);
  if ( (_BYTE)result )
  {
    result = sub_C0F7F0(a1, (char *)(a1 + 7072), a3);
    if ( (_BYTE)result )
    {
      result = sub_C0F7F0(a1, (char *)(a1 + 7136), a3);
      if ( (_BYTE)result )
      {
        sub_C0EEE0(a1, 1u);
        result = sub_C0F7F0(a1, (char *)(a1 + 2216), a3);
        if ( (_BYTE)result )
        {
          result = sub_C0F7F0(a1, (char *)(a1 + 4184), a3);
          if ( (_BYTE)result )
          {
            result = sub_C0F7F0(a1, (char *)(a1 + 5888), a3);
            if ( (_BYTE)result )
            {
              v5 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 6472) = *(_DWORD *)(v5 + 40) == 1;
              *(_BYTE *)(a1 + 7064) = *(_DWORD *)(v5 + 44) == 1;
              result = sub_C0F7F0(a1, (char *)(a1 + 6480), a3);
              if ( (_BYTE)result )
              {
                result = sub_C0F7F0(a1, (char *)(a1 + 3536), a3);
                if ( (_BYTE)result )
                {
                  result = sub_C0F7F0(a1, (char *)(a1 + 4144), a3);
                  if ( (_BYTE)result )
                  {
                    result = sub_C0F7F0(a1, (char *)(a1 + 3472), a3);
                    if ( (_BYTE)result )
                    {
                      result = sub_C0F7F0(a1, (char *)(a1 + 2248), a3);
                      if ( (_BYTE)result )
                      {
                        result = sub_C0F7F0(a1, (char *)(a1 + 7072), a3);
                        if ( (_BYTE)result )
                        {
                          result = sub_C0F7F0(a1, (char *)(a1 + 7168), a3);
                          if ( (_BYTE)result )
                          {
                            result = sub_C0F7F0(a1, (char *)(a1 + 5392), a3);
                            if ( (_BYTE)result )
                            {
                              result = sub_C0F7F0(a1, (char *)(a1 + 5720), a3);
                              if ( (_BYTE)result )
                              {
                                result = sub_C0F7F0(a1, (char *)(a1 + 4800), a3);
                                if ( (_BYTE)result )
                                {
                                  result = sub_C0F7F0(a1, (char *)(a1 + 2400), a3);
                                  if ( (_BYTE)result )
                                  {
                                    result = sub_C0F7F0(a1, (char *)(a1 + 3504), a3);
                                    if ( (_BYTE)result )
                                    {
                                      result = sub_C0F7F0(a1, (char *)(a1 + 4224), a3);
                                      if ( (_BYTE)result )
                                      {
                                        result = sub_C0F7F0(a1, (char *)(a1 + 2216), a3);
                                        if ( (_BYTE)result )
                                        {
                                          v6 = a1 + 7200;
                                          result = sub_C0F7F0(a1, (char *)(a1 + 7200), a3);
                                          if ( (_BYTE)result )
                                          {
                                            if ( (unsigned int)sub_180B130(a1) > 9 )
                                            {
                                              if ( (unsigned __int8)sub_186A530(a3) )
                                              {
                                                sub_186A4C0(a3);
                                                sub_180B150(a1, v6);
                                                std::__ostream_insert<char,std::char_traits<char>>();
                                                sub_C0F760(a1);
                                                v8 = std::ostream::_M_insert<unsigned long>();
                                                std::operator<<<std::char_traits<char>>();
                                                sub_186A500(v8, ")\n");
                                              }
                                              else
                                              {
                                                sub_180B150(a1, v6);
                                                std::__ostream_insert<char,std::char_traits<char>>();
                                                sub_C0F760(a1);
                                                std::ostream::_M_insert<unsigned long>();
                                                std::operator<<<std::char_traits<char>>();
                                              }
                                            }
                                            sub_14B6450(a1 + 24);
                                            return sub_14B64E0(a1 + 24, a1 + 40);
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
    }
  }
  return result;
}

