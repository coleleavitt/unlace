__int64 __fastcall sub_81AAB0(_DWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r14
  unsigned int *v7; // r12
  int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  __int64 v11; // rbx
  unsigned int v13; // eax
  unsigned int *v14; // r12
  int v15; // r14d
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  unsigned int v19; // eax
  unsigned int *v20; // [rsp+8h] [rbp-50h]
  unsigned int *v21; // [rsp+10h] [rbp-48h]
  unsigned int v22; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v23; // [rsp+1Ch] [rbp-3Ch]

  if ( a1[4] == -2 )
  {
    if ( !a4 )
      goto LABEL_3;
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( !a4 )
    {
LABEL_3:
      v6 = 2LL * (unsigned int)a1[8];
      if ( v6 * 4 )
      {
        v7 = a1 + 19;
        v8 = 0;
        v20 = &a1[v6 + 19];
        do
        {
          v9 = *v7;
          v10 = v7[1];
          if ( v8 )
            std::__ostream_insert<char,std::char_traits<char>>();
          if ( v8 == a1[17] )
            std::__ostream_insert<char,std::char_traits<char>>();
          if ( v9 > 1 )
          {
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v10 != -2 )
            std::ostream::_M_insert<unsigned long>();
          ++v8;
          v7 += 2;
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v20 != v7 );
      }
      goto LABEL_14;
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( a1[4] != -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, (unsigned int)a1[4]);
    sub_17F35B0(a2, v13);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, (unsigned int)a1[4]) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, (unsigned int)a1[4]);
      std::ostream::_M_insert<unsigned long>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v14 = a1 + 19;
  v15 = 0;
  v16 = 2LL * (unsigned int)a1[8];
  v21 = &a1[v16 + 19];
  if ( v16 * 4 )
  {
    do
    {
      v17 = *v14;
      v18 = v14[1];
      if ( v15 )
      {
        v22 = *v14;
        std::__ostream_insert<char,std::char_traits<char>>();
        v17 = v22;
      }
      if ( v15 == a1[17] )
      {
        v23 = v17;
        std::__ostream_insert<char,std::char_traits<char>>();
        v17 = v23;
      }
      if ( v17 > 1 )
      {
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v18 != -2 )
        std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, v18);
      sub_17F35B0(a2, v19);
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, v18) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, v18);
        std::ostream::_M_insert<unsigned long>();
      }
      ++v15;
      v14 += 2;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v21 != v14 );
  }
LABEL_14:
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  return v11;
}

