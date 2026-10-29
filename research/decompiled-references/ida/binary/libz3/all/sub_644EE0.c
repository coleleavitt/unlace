__int64 __fastcall sub_644EE0(std::chrono::_V2::steady_clock *a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  void *v5; // rdi
  __int64 v6; // rax
  std::ostream *v7; // rbp
  std::ostream *v8; // rbp
  __int64 v9; // rax

  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 16) )
    {
      v6 = std::chrono::_V2::steady_clock::now(a1);
      *(_BYTE *)(v3 + 16) = 0;
      *(_QWORD *)(v3 + 8) += v6 - *(_QWORD *)v3;
      v3 = *((_QWORD *)a1 + 1);
      if ( !v3 )
        goto LABEL_9;
      if ( *(_BYTE *)(v3 + 16) )
      {
        *(_QWORD *)(v3 + 8) += std::chrono::_V2::steady_clock::now(a1) - *(_QWORD *)v3;
        *(_BYTE *)(v3 + 16) = 0;
        v9 = std::chrono::_V2::steady_clock::now(a1);
        *(_BYTE *)(v3 + 16) = 1;
        *(_QWORD *)v3 = v9;
      }
    }
    a3 = 0.001;
    if ( (double)(int)(*(_QWORD *)(v3 + 8) / 1000000LL) / 1000.0 >= 0.001 )
    {
      result = sub_180B130(a1);
      if ( (unsigned int)result < *(_DWORD *)a1 )
        goto LABEL_5;
LABEL_10:
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(a1, a2);
        v7 = (std::ostream *)std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::flush(v7);
        result = sub_186A500(v7, "s\n");
      }
      else
      {
        sub_180B150(a1, a2);
        v8 = (std::ostream *)std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        result = std::ostream::flush(v8);
      }
      goto LABEL_5;
    }
  }
LABEL_9:
  result = sub_180B130(a1);
  if ( (unsigned int)result >= *(_DWORD *)a1 )
    goto LABEL_10;
LABEL_5:
  v5 = *((void **)a1 + 1);
  if ( v5 )
    return sub_186B220(v5);
  return result;
}

