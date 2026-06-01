__int64 __fastcall sub_DDFE10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD v8[8]; // [rsp+8h] [rbp-40h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(_QWORD *)(a1 + 24);
  if ( (v2 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v2 )
      strlen(*(const char **)(a1 + 24));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  sub_DDF470(a2, *(_DWORD *)(a1 + 12));
  v3 = *(__int64 **)(a1 + 48);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v4 != v3 )
    {
      v5 = *v3;
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 56);
        if ( v6 )
        {
          ++v3;
          sub_DDFB80(v5, a2, *(_QWORD *)(v6 + 24));
          if ( v3 == v4 )
            break;
        }
        else
        {
          ++v3;
          v8[0] = a1;
          sub_DDFB80(v5, a2, (__int64)v8);
          if ( v3 == v4 )
            break;
        }
        v5 = *v3;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

