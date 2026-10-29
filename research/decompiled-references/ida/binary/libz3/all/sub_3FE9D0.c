__int64 __fastcall sub_3FE9D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+8h] [rbp-50h]
  int v13; // [rsp+10h] [rbp-48h] BYREF
  char v14; // [rsp+18h] [rbp-40h]

  v2 = a1[14];
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 - 4) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v6 = a1[14];
      v7 = *(_QWORD *)(a1[2] + 160LL) + 656LL;
      if ( v6 )
      {
        v8 = 0;
        do
        {
          if ( v8 >= *(_DWORD *)(v6 - 4) )
            break;
          v9 = v8++;
          sub_62F730(v7, *(_QWORD *)(v6 + 8 * v9), a2, v3, v4, v5, v11, v12, v13, v14);
          std::__ostream_insert<char,std::char_traits<char>>();
          v6 = a1[14];
        }
        while ( v6 );
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(&v11, a1[31], a1[1], 0, 0, 0);
  sub_160E8B0(a2, &v11);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(&v13);
  return a2;
}

