__int64 __fastcall sub_7FF6B0(__int64 a1, double a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax

  v2 = *(unsigned int *)(a1 + 60);
  v3 = a1;
  if ( !(_DWORD)v2 )
  {
    v2 = 0;
    if ( (unsigned __int8)sub_7FB2D0(a1 + 72, 0) )
      return 1;
    if ( !*(_DWORD *)(a1 + 60) )
    {
      if ( *(_BYTE *)(a1 + 40) )
      {
        v2 = 0;
        if ( (unsigned __int8)sub_753DF0(a1 + 72, 0) )
          return 1;
      }
    }
  }
  if ( !(unsigned __int8)sub_7FF320(a1) )
    return 1;
  if ( !*(_DWORD *)(a1 + 60) )
  {
    v2 = 0;
    a1 += 72;
    if ( (unsigned __int8)sub_7FB2D0(v3 + 72, 0) )
      return 1;
    if ( !*(_DWORD *)(v3 + 60) )
    {
      if ( *(_BYTE *)(v3 + 40) )
      {
        v2 = 0;
        a1 = v3 + 72;
        if ( (unsigned __int8)sub_753DF0(v3 + 72, 0) )
          return 1;
      }
    }
  }
  if ( (unsigned int)sub_180B130(a1) <= 2 )
    return 0;
  if ( (unsigned __int8)sub_186A530(a2) )
  {
    sub_186A4C0(a2);
    v5 = sub_180B150(a1, v2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v6 = sub_7FBC20(v3, v5, v3 + 48);
    sub_7F5300(v6, "\n");
    sub_186A500(v6, "\n");
  }
  else
  {
    v7 = sub_180B150(a1, v2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = sub_7FBC20(v3, v7, v3 + 48);
    sub_7F5300(v8, "\n");
  }
  return 0;
}

