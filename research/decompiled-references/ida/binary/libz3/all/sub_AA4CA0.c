__int64 __fastcall sub_AA4CA0(__int64 a1, __int64 a2, int a3, unsigned int *a4, __int64 a5, const char *a6)
{
  unsigned int v9; // eax
  _QWORD *v10; // rbp
  unsigned int *v11; // rbp
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v15; // eax
  _QWORD *v16; // rbp
  unsigned int *v17; // rbp
  __int64 v18; // r12
  unsigned int v19; // eax
  _QWORD *v20; // r13
  _QWORD *v22; // [rsp+8h] [rbp-40h]

  if ( a3 )
  {
    if ( a6 )
    {
      v9 = *a4;
      if ( *a4 == dword_1C7ECD0 || v9 == dword_1C7ECCC || v9 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        v10 = (_QWORD *)(a5 + 8LL * (v9 >> 1));
        if ( (v9 & 1) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1648CA0(a1, a2, *v10, 3);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          sub_1648CA0(a1, a2, *v10, 3);
        }
      }
      if ( a3 != 1 )
      {
        v11 = a4 + 1;
        v12 = (__int64)&a4[a3 - 2 + 2];
        do
        {
          strlen(a6);
          std::__ostream_insert<char,std::char_traits<char>>();
          v13 = *v11;
          if ( *v11 == dword_1C7ECD0 || v13 == dword_1C7ECCC || v13 == -2 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else if ( (v13 & 1) != 0 )
          {
            v22 = (_QWORD *)(a5 + 8LL * (v13 >> 1));
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(a1, a2, *v22, 3);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            sub_1648CA0(a1, a2, *(_QWORD *)(a5 + 8LL * (v13 >> 1)), 3);
          }
          ++v11;
        }
        while ( (unsigned int *)v12 != v11 );
      }
    }
    else
    {
      v15 = *a4;
      if ( *a4 == dword_1C7ECD0 || v15 == dword_1C7ECCC || v15 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        v16 = (_QWORD *)(a5 + 8LL * (v15 >> 1));
        if ( (v15 & 1) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1648CA0(a1, a2, *v16, 3);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          sub_1648CA0(a1, a2, *v16, 3);
        }
      }
      if ( a3 != 1 )
      {
        v17 = a4 + 1;
        v18 = (__int64)&a4[a3 - 2 + 2];
        do
        {
          std::ios::clear();
          v19 = *v17;
          if ( *v17 == dword_1C7ECD0 || v19 == dword_1C7ECCC || v19 == -2 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            v20 = (_QWORD *)(a5 + 8LL * (v19 >> 1));
            if ( (v19 & 1) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1648CA0(a1, a2, *v20, 3);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              sub_1648CA0(a1, a2, *v20, 3);
            }
          }
          ++v17;
        }
        while ( v17 != (unsigned int *)v18 );
      }
    }
  }
  return a1;
}

