__int64 __fastcall sub_6AA0C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+10h] [rbp-88h]
  unsigned int v11; // [rsp+24h] [rbp-74h]
  _BYTE v12[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[88]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a1[1];
  if ( v2 )
  {
    v11 = 0;
    v10 = *a1;
    do
    {
      if ( v11 >= *(_DWORD *)(v2 - 4) )
        break;
      v3 = 32LL * v11;
      v4 = v3 + a1[2];
      v5 = *(_QWORD *)(v4 + 24);
      if ( v5 )
      {
        v6 = 0;
        do
        {
          if ( v6 >= *(_DWORD *)(v5 - 4) )
            break;
          v7 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL * v6);
          v8 = *(_QWORD *)(v7 + 16);
          if ( (v8 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v8 )
              strlen(*(const char **)(v7 + 16));
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v12, *(_QWORD *)(*(_QWORD *)(a1[2] + v3 + 24) + 8LL * v6), v10, 0, 0, 0);
          sub_160E8B0(a2, v12);
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v6;
          sub_18572D0(v13);
          v4 = v3 + a1[2];
          v5 = *(_QWORD *)(v4 + 24);
        }
        while ( v5 );
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v12, *(_QWORD *)(a1[1] + 8LL * v11), v10, 0, 0, 0);
      sub_160E8B0(a2, v12);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v13);
      v2 = a1[1];
      ++v11;
    }
    while ( v2 );
  }
  return a2;
}

