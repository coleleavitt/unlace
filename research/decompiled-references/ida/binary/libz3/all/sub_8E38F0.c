__int64 __fastcall sub_8E38F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v9; // [rsp+8h] [rbp-70h]
  _BYTE v10[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 1152);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (_DWORD)v4 )
    {
      v5 = 3 * v4;
      v6 = 0;
      v9 = 8 * v5;
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v2 + 1152) + v6 + 8);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v10, v7, *(_QWORD *)(v2 + 104), 2, 0, 0);
        sub_160E8B0(a2, v10);
        v6 += 24;
        sub_18572D0(v11);
      }
      while ( v9 != v6 );
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

