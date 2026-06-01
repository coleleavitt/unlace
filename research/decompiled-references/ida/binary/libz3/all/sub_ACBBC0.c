__int64 __fastcall sub_ACBBC0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // r12

  sub_137F260(a1, a2, a3, a4, a5, a6);
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *(__int64 **)(a1 + 112);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    while ( v7 != v6 )
    {
      v8 = *v6;
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v6;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return a2;
}

