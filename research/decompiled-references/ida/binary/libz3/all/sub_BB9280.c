__int64 __fastcall sub_BB9280(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // r13
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *v14; // r13
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int i; // [rsp+4h] [rbp-44h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  v4 = (_DWORD *)a3[5];
  if ( !v4 )
    goto LABEL_12;
  v5 = &v4[*(v4 - 1)];
  v6 = *(v4 - 1);
  if ( v4 != v5 )
  {
    do
    {
      if ( *v4 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      ++v4;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v5 != v4 );
    v7 = a3[5];
    if ( !v7 )
      goto LABEL_12;
    v6 = *(_DWORD *)(v7 - 4);
  }
  if ( v6 )
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_12:
  v8 = a3[4];
  for ( i = 0; v8; ++i )
  {
    if ( i >= *(_DWORD *)(v8 - 4) )
      break;
    v9 = *(__int64 **)(v8 + 32LL * i + 8);
    if ( v9 )
    {
      v10 = &v9[*((unsigned int *)v9 - 1)];
      if ( v10 != v9 )
      {
        v11 = *(__int64 **)(v8 + 32LL * i + 8);
        do
        {
          v12 = *v11++;
          sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v12, 2);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v10 != v11 );
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v20 = 32LL * i;
    v13 = *(__int64 **)(a3[4] + v20 + 24);
    if ( v13 )
    {
      v14 = &v13[*((unsigned int *)v13 - 1)];
      if ( v14 != v13 )
      {
        v15 = *(__int64 **)(a3[4] + v20 + 24);
        do
        {
          v16 = *v15++;
          sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v16, 2);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v14 != v15 );
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = a3[4];
  }
  v17 = a3[6];
  if ( v17 )
    sub_BB8CF0(a1, a2, v17);
  return a2;
}

