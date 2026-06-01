__int64 __fastcall sub_644D80(__int64 a1, const char *a2, int a3, double a4)
{
  __int64 result; // rax
  std::ostream *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  std::ostream *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp

  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0;
  result = sub_180B130(a1);
  if ( (unsigned int)result >= *(_DWORD *)a1 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v5 = (std::ostream *)sub_180B150(a1, a2);
      if ( a2 )
      {
        strlen(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::flush(v5);
      v6 = sub_186B270((size_t)&qword_18);
      *(_QWORD *)(a1 + 8) = v6;
      v7 = v6;
      *(_BYTE *)(v6 + 16) = 0;
      *(_OWORD *)v6 = 0;
      v8 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_18);
      *(_BYTE *)(v7 + 16) = 1;
      *(_QWORD *)v7 = v8;
      return sub_186A500(&qword_18, "...");
    }
    else
    {
      v9 = (std::ostream *)sub_180B150(a1, a2);
      if ( a2 )
      {
        strlen(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::flush(v9);
      v10 = sub_186B270((size_t)&qword_18);
      *(_QWORD *)(a1 + 8) = v10;
      v11 = v10;
      *(_BYTE *)(v10 + 16) = 0;
      *(_OWORD *)v10 = 0;
      result = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_18);
      *(_BYTE *)(v11 + 16) = 1;
      *(_QWORD *)v11 = result;
    }
  }
  return result;
}

