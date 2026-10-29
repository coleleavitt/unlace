__int64 __fastcall sub_4AB900(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // [rsp+8h] [rbp-70h]
  __int64 *v7; // [rsp+10h] [rbp-68h]
  __int64 *v8; // [rsp+18h] [rbp-60h]
  void *v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
  {
    v8 = &v2[*((unsigned int *)v2 - 1)];
    if ( v8 != v2 )
    {
      v7 = *(__int64 **)(a1 + 8);
      do
      {
        v3 = *v7;
        if ( *v7 )
        {
          v4 = 32LL * *(unsigned int *)(v3 - 4);
          v6 = v3 + v4;
          while ( v6 != v3 )
          {
            sub_1850940(&v9, qword_1C7F2C0, v3);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v9 != &v10 )
              operator delete(v9, v10 + 1);
            v3 += 32;
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v7;
      }
      while ( v8 != v7 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

