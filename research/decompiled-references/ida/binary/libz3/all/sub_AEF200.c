__int64 __fastcall sub_AEF200(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r12
  unsigned int v5; // r15d
  __int64 i; // rax
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // r14
  int v10; // ebp
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r12
  _DWORD *v17; // r14
  int v18; // r13d
  _DWORD *v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 j; // r13
  _DWORD *v24; // r13
  int v25; // r14d
  _DWORD *v26; // rbp
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 k; // rbp
  unsigned int v31; // r14d
  unsigned int v32; // ecx
  unsigned int **v33; // rbp
  unsigned int **v34; // r12
  unsigned int *v35; // rdx
  __int64 v37; // [rsp+0h] [rbp-78h]
  char v38; // [rsp+8h] [rbp-70h]
  _BYTE v39[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v40[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1;
  v37 = a2;
  sub_1606360(v39, a1[4], *(_QWORD *)(a2 + 24), 0, 0, 0);
  sub_160E8B0(a3, v39);
  v5 = 0;
  sub_18572D0(v40);
  for ( i = *(_QWORD *)(a1[4] + 24LL); i; i = *(_QWORD *)(a1[4] + 24LL) )
  {
    v7 = *(_QWORD *)(i + 8);
    if ( !v7 )
      break;
    if ( v5 >= *(_DWORD *)(v7 - 4) )
      break;
    v8 = 16 * v5++;
    v9 = *(_QWORD *)(v37 + 24);
    v10 = v7 + v8;
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_15D46B0(v9, a3, v10, v11, v12, v13, v37, v38);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v14 = a1[13];
  if ( v14 && v14 != v14 + 32LL * *(unsigned int *)(v14 - 4) )
  {
    v15 = v14 + 32LL * *(unsigned int *)(v14 - 4);
    v16 = a1[13];
    do
    {
      while ( !*(_BYTE *)(v16 + 24) )
      {
        v16 += 32;
        if ( v15 == v16 )
          goto LABEL_20;
      }
      v17 = *(_DWORD **)(v16 + 16);
      if ( v17 )
      {
        v18 = *(v17 - 1);
        if ( v18 )
        {
          if ( *v17 == -2 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
          }
          if ( v18 != 1 )
          {
            v19 = v17 + 1;
            v20 = (__int64)&v17[v18 - 2 + 2];
            do
            {
              while ( 1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                if ( *v19 == -2 )
                  break;
                ++v19;
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                if ( v19 == (_DWORD *)v20 )
                  goto LABEL_19;
              }
              ++v19;
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            while ( v19 != (_DWORD *)v20 );
          }
        }
      }
LABEL_19:
      v16 += 32;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v15 != v16 );
LABEL_20:
    v3 = a1;
  }
  v21 = v3[11];
  if ( v21 )
  {
    v22 = *(unsigned int *)(v21 - 4);
    if ( (_DWORD)v22 )
    {
      for ( j = 0; j != v22; ++j )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v24 = (_DWORD *)v3[68];
  if ( v24 )
  {
    v25 = *(v24 - 1);
    if ( v25 )
    {
      if ( *v24 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      if ( v25 != 1 )
      {
        v26 = v24 + 1;
        v27 = (__int64)&v24[v25 - 2 + 2];
        do
        {
          while ( 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *v26 == -2 )
              break;
            ++v26;
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            if ( (_DWORD *)v27 == v26 )
              goto LABEL_34;
          }
          ++v26;
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( (_DWORD *)v27 != v26 );
      }
    }
  }
LABEL_34:
  std::__ostream_insert<char,std::char_traits<char>>();
  v28 = v3[63];
  if ( v28 )
  {
    v29 = *(unsigned int *)(v28 - 4);
    if ( (_DWORD)v29 )
    {
      for ( k = 0; k != v29; ++k )
      {
        v31 = k;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        do
        {
          v32 = v31;
          v31 = *(_DWORD *)(v3[63] + 4LL * v31);
        }
        while ( v32 != v31 );
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  v33 = (unsigned int **)v3[5];
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    while ( v34 != v33 )
    {
      v35 = *v33++;
      sub_AEF130(v37, a3, v35);
    }
  }
  return a3;
}

