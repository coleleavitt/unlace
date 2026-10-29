__int64 __fastcall sub_7AE050(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rsi

  v3 = *(__int64 **)(a1 + 744);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    while ( v4 != v3 )
    {
      v5 = *v3++;
      sub_7E42B0(a2, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v6 = *(_QWORD *)(a1 + 752);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 - 4) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = *(__int64 **)(a1 + 752);
      if ( v7 )
      {
        v8 = &v7[*((unsigned int *)v7 - 1)];
        while ( v8 != v7 )
        {
          v9 = *v7++;
          sub_7E42B0(a2, v9);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
    }
  }
  return a2;
}

