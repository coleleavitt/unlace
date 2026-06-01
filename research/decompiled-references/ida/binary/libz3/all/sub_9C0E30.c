__int64 __fastcall sub_9C0E30(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v14; // [rsp+0h] [rbp-D8h]
  unsigned int *v15; // [rsp+0h] [rbp-D8h]
  _QWORD *v16; // [rsp+18h] [rbp-C0h]
  _BYTE v17[16]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v20[88]; // [rsp+80h] [rbp-58h] BYREF

  v14 = a2[3];
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_2FCE40(v4, a1 + 16);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v19, **(_QWORD **)(a2[4] + 8LL * *(unsigned int *)(a1 + 8)), v14, 0, 0, 0);
  sub_160E8B0(a3, v19);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v20);
  v5 = *(_QWORD **)(a1 + 64);
  if ( v5 )
  {
    v16 = &v5[2 * *((unsigned int *)v5 - 1)];
    while ( v16 != v5 )
    {
      v6 = (_QWORD *)*v5;
      v7 = (_QWORD *)v5[1];
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v17, *v6, v14, 0, 0, 0);
      sub_160E8B0(v8, v17);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v19, *v7, v14, 0, 0, 0);
      sub_160E8B0(v9, v19);
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 += 2;
      sub_18572D0(v20);
      sub_18572D0(v18);
    }
  }
  v10 = *(unsigned int **)(a1 + 56);
  if ( v10 )
  {
    v11 = *(v10 - 1);
    if ( &v10[v11] != v10 )
    {
      v15 = &v10[v11];
      do
      {
        v12 = *v10;
        if ( *v10 == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v10;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA4630(a3, v12, *(_QWORD *)(a2[2] + 104LL), *(_QWORD *)(a2[2] + 8840LL));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v15 != v10 );
    }
  }
  return a3;
}

