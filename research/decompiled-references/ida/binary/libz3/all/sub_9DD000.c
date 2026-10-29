__int64 __fastcall sub_9DD000(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // [rsp+0h] [rbp-D8h]
  unsigned int *v14; // [rsp+0h] [rbp-D8h]
  _QWORD *v15; // [rsp+18h] [rbp-C0h]
  _BYTE v16[16]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-88h] BYREF
  void *v18; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v19[11]; // [rsp+80h] [rbp-58h] BYREF

  v13 = a2[3];
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_2FD7A0((char **)&v18, a1 + 16);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v18 != v19 )
    operator delete(v18, v19[0] + 1LL);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(&v18, **(_QWORD **)(a2[4] + 8LL * *(unsigned int *)(a1 + 8)), v13, 0, 0, 0);
  sub_160E8B0(a3, &v18);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v19);
  v4 = *(_QWORD **)(a1 + 96);
  if ( v4 )
  {
    v15 = &v4[2 * *((unsigned int *)v4 - 1)];
    while ( v15 != v4 )
    {
      v5 = (_QWORD *)*v4;
      v6 = (_QWORD *)v4[1];
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v16, *v5, v13, 0, 0, 0);
      sub_160E8B0(v7, v16);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v18, *v6, v13, 0, 0, 0);
      sub_160E8B0(v8, &v18);
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 += 2;
      sub_18572D0(v19);
      sub_18572D0(v17);
    }
  }
  v9 = *(unsigned int **)(a1 + 88);
  if ( v9 )
  {
    v10 = *(v9 - 1);
    if ( &v9[v10] != v9 )
    {
      v14 = &v9[v10];
      do
      {
        v11 = *v9;
        if ( *v9 == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v9;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA4630(a3, v11, *(_QWORD *)(a2[2] + 104LL), *(_QWORD *)(a2[2] + 8840LL));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v14 != v9 );
    }
  }
  return a3;
}

