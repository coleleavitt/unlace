__int64 __fastcall sub_C6E7F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  __int64 v9; // [rsp+0h] [rbp-78h]
  __int64 v10; // [rsp+8h] [rbp-70h]
  _BYTE v11[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = a1[5];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v9 = 0;
      v10 = 8 * v3;
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v4 = *(_QWORD *)(a1[5] + v9);
        v5 = *(_QWORD *)(v4 + 16);
        if ( (v5 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v5 )
            strlen(*(const char **)(v4 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v6 = *(_QWORD **)(a1[6] + v9);
        if ( v6 )
        {
          v7 = &v6[*((unsigned int *)v6 - 1)];
          while ( v7 != v6 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v11, *v6, a1[4], 2, 0, 0);
            sub_160E8B0(a2, v11);
            ++v6;
            sub_18572D0(v12);
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 += 8;
      }
      while ( v10 != v9 );
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

