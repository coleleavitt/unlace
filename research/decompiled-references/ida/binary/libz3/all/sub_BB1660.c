__int64 __fastcall sub_BB1660(__int64 a1, __int64 a2, unsigned int **a3, _QWORD ***a4)
{
  _QWORD **v4; // rbx
  __int64 v5; // rbp
  unsigned int *v6; // rbx
  unsigned int *i; // rbp
  _QWORD **v9; // [rsp+0h] [rbp-B8h]
  __int64 v11; // [rsp+18h] [rbp-A0h] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v15[88]; // [rsp+60h] [rbp-58h] BYREF

  v4 = *a4;
  v11 = 0;
  if ( v4 )
  {
    v9 = &v4[2 * *((unsigned int *)v4 - 1)];
    while ( v9 != v4 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v12, **v4, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v5 = sub_160E8B0(a2, v12);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v14, *v4[1], *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v5, v14);
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 += 2;
      sub_18572D0(v15);
      sub_18572D0(v13);
    }
  }
  v6 = *a3;
  if ( *a3 )
  {
    for ( i = &v6[*(v6 - 1)]; i != v6; ++v6 )
    {
      sub_AA55D0(*(_QWORD *)(a1 + 16), a2, *v6);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_18572D0(&v11);
  return a2;
}

