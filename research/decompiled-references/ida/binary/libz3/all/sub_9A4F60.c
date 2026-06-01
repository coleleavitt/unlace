__int64 __fastcall sub_9A4F60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD **v5; // rbx
  _QWORD **v6; // r15
  __int64 v7; // r14
  _BYTE v9[16]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v10[88]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a1 )
    v4 = *(unsigned int *)(*a1 - 4LL);
  else
    v4 = 0;
  sub_AA55A0(*(_QWORD *)(a2 + 16), a3, v4);
  if ( *a1 && *(_DWORD *)(*a1 - 4LL) )
    std::__ostream_insert<char,std::char_traits<char>>();
  v5 = (_QWORD **)a1[1];
  if ( v5 )
  {
    v6 = &v5[2 * *((unsigned int *)v5 - 1)];
    if ( v6 != v5 )
    {
      v7 = *(_QWORD *)(a2 + 24);
      do
      {
        sub_1606360(v9, **v5, v7, 0, 0, 0);
        sub_160E8B0(a3, v9);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v10);
        sub_1606360(v9, *v5[1], v7, 0, 0, 0);
        sub_160E8B0(a3, v9);
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 += 2;
        sub_18572D0(v10);
      }
      while ( v6 != v5 );
    }
  }
  return a3;
}

